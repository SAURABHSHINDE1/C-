#include<iostream>
using namespace std;

int main(){

    int num , temp , digit , sum =0 ;

    cout <<"Enter the number :";

    cin >> num ;

    temp = num ;

    while(temp > 0){

        digit = temp % 10;
        sum  = sum +(digit * digit * digit);
        temp = temp / 10 ;

    }


    if(sum == num){
        cout << "The number is Armstrong number";
    }
    else{
         cout << "The number not is Armstrong number";
    }


    return 0;
}