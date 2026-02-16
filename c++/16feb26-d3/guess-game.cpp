#include <iostream>
#include <string>
using namespace std;

int main(){
int secNum;
int guessed;
int chances = 3;

cout << "Enter a secret number: ";
cin >> secNum;

for(int attempt = 1; attempt <= chances; attempt++){
    cout << "Guess the number:";
    cin >> guessed;

    if(guessed == secNum){
        cout << "Correct!" << endl;
        break;
    }
    else if(secNum > guessed){
        cout << "Wrong guessed! Guess higher:" << endl;
        continue;
    }
    else if(secNum < guessed){
        cout << "Wrong guessed! Guess lower:" << endl;
        continue;
        }
    else{
        cout << "Invalid!" << endl;

    }
}
cout << "your are out of attempt the Secret number is " << secNum << endl;

    return 0;
}