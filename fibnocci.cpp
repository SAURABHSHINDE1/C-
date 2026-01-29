#include<iostream>
using namespace std;


int main(){

    int num ;

    cout << "Enter Your number :";

    cin >> num;

    int a = 0,  b = 1 , next;

    for(int i = 1 ; i <=num ; i++ ){

        cout << " " << a <<  "+";

        next = a + b;

        a = b;

        b = next ;
    }


    return 0 ;
}