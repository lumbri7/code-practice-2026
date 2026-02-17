#include<iostream>
#include<string>

using namespace std;

int main(){


    // int no = 2;
    // int m = 5;

    // for(int i = 1; i <= no; i++){
    //     for(int j = 1; j <= m; j++){
    //         cout << "*";
    //     }
    //     cout << endl;
    // }


     /* output square or rectangle patterns
    *****
    *****
    *****
    *****
    *****
    */


    // int no = 10;
    // for(int i = 1; i <= no; i++){
    //     for(int j = 1; j <= i; j++){
    //         cout << "*";
    //     }
    //     cout << endl;
    // }

    /* putput triangle pattern
        *
        **
        ***
        ****
        *****
        ******
        *******
        ********
        *********
        **********
    */    



    // int n = 5;
    // for(int i = n; i >= 1; i--){
    //     for(int j = 1; j <= i; j++){
    //         cout << "*";
    //     }
    //     cout << endl;
    // }

    /*output inverted triangle
        *****
        ****
        ***
        **
        *
    */


    // int n = 5;

    // for (int i = 1; i <= n; i++){
    //     for (int space = 1; space <= n -i; space++){
    //         cout << " ";
    //     }
    //     for (int star = 1; star <= 2 * i - 1;star++){
    //         cout << "*";
    //     }
    //     cout << endl;
    // }

/*output pyramid
         *
        ***
       *****
      *******
     *********
*/


        int n = 3;
    for (int i = 1; i <= n; i++) {
        for (int s = 1; s <= n - i; s++) cout << " ";
        for (int st = 1; st <= 2*i - 1; st++) cout << "*";
        cout << endl;
    }

    for (int i = n - 1; i >= 1; i--) {
        for (int s = 1; s <= n - i; s++) cout << " ";
        for (int st = 1; st <= 2*i - 1; st++) cout << "*";
        cout << endl;
    }

    /*output diamond
        *
       ***
      *****
       ***
        *
    */



    return 0;
}