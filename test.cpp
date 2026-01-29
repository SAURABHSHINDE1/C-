#include<iostream>
using namespace std;


int main(){

    int num = 153;

    

    int digit , temp , sum=0;

    temp =num;

    digit = temp % 10;

    cout << digit << endl ;

    sum = sum + (digit * digit * digit);

    cout<< sum << endl;

    temp = temp / 10;

    cout << temp;



return 0;
}