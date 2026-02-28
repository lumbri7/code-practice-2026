#include <stdio.h>
#include <unistd.h>
int main() {
   int fd[2], num, square;
   pipe(fd);
   if (fork() == 0) {         
       close(fd[1]);          
       read(fd[0], &num, sizeof(num));
       square = num * num;
       printf("Child received %d\n", num);
       printf("Square = %d\n", square);
   }
   else {                      
       close(fd[0]);          
       num = 5;
       write(fd[1], &num, sizeof(num));
   }
   return 0;
}