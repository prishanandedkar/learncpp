// Write a c++ program to calculate the factorial of the given number

#include <iostream>

using namespace std;

int main()
{
    int input = 10;
    //so this means, we are goint to calculate the factorial of 5

    int factorialOutput = 1;
    int temp = input;

    while(temp > 0)
    {
        factorialOutput = factorialOutput * (temp) * (temp -1);
        temp = temp - 2;
    }    

    cout << "factorialOutput = " << factorialOutput << endl;

    return 0;
}