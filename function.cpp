#include<iostream>
using namespace std;

int add(){
    int num1 = 20, num2 = 56;

    cout << "The Addition is :" << num1 + num2 << endl;
}


int addition(int a , int b){

    cout << "The Addition of a and b: " << a + b << endl;

    // return a+b;

}



int main(){
  // function 
    // function is a block of code that perfrom a spacific task when it calls 

    // add();

    // addition(10, 30);
    // addition(20, 30);
    // addition(40, 30);
    // addition(60, 30);
    // addition(70, 30);
    // addition(100, 30);

    int result = addition(10, 30);
    cout << result;
  

    return 0;
}