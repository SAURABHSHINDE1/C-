#include <iostream>
using namespace std;

int main()
{

    // if else

    // int age = 15;

    // if (age >= 18)
    // {
    //     cout << "You are eligibal for vote" << endl;
    // }
    // else
    // {
    //     cout << "You are  not eligibal for vote" << endl;
    // }

    // int marks;

    // cout << "Enter Your Marks:" << endl;

    // cin >> marks;

    // if(marks > 90){

    //     cout <<"You got A+ grade";
    // }
    // else if(marks > 70){

    //      cout <<"You got B grade";
    // }
    // else if(marks > 50){
    //      cout <<"You got C grade";
    // }
    // else if (marks > 35)
    // {
    //      cout <<"You got D grade";
    // }
    // else
    // {
    //      cout <<"You are failed";
    // }

    int a, b;
    char opeartor;

    cout << "Enter the value of a and b " << endl;

    cin >> a;
    cin >> b;

    cout << "Enter Operator :" << endl;

    cin >> opeartor;

    switch (opeartor)
    {

    case '+':
        cout << "The Addition of a and b is :" << a + b << endl;
        break;

    case '-':
        cout << "The Substraction of a and b is :" << a - b << endl;
        break;

    case '*':
        cout << "The Multiolication of a and b is :" << a * b << endl;
        break;

    case '/':
        cout << "The Devision of a and b is :" << a / b << endl;
        break;

    case '%':
        cout << "The Remainder of a and b is :" << a % b << endl;
        break;

    default:
        cout << "Please Enter valid symbole " << endl;
        break;
    }

    return 0;
}
