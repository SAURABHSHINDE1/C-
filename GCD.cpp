#include<iostream>
using namespace std;


int main(){

    int a , b ;

    cout << "Enter the value of a and b";

    cin >> a >> b;

    while(a != b){
        if(a> b){
            a = a - b;
        }
        else{
            b = b - a;
        }
    }

    cout << "the GCD is :" << b;

}