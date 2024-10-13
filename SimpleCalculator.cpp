#include <iostream>
#include <string>

using namespace std;

enum enOperationType {Add = '+', Subtract = '-', Multiply = '*', Divide = '/'};

float ReadNumber(string Message)
{
    float Number;
 

    cout << Message;
    cin >> Number;

    return Number;
}

enOperationType ReadingType()
{
    char OpType;

    cout << "Enter The Operation Type(+,-,*,/)" << endl;
    cin >> OpType;

    return (enOperationType)OpType;
}


float Calculate(float Number1, float Number2, enOperationType OpType)
{
    switch(OpType)
    {
    case enOperationType::Add:
        return Number1 + Number2;
    case enOperationType::Subtract:
        return Number1 - Number2;
    case enOperationType::Multiply:
        return Number1 * Number2;
    case enOperationType::Divide:
        return Number1 / Number2;        
    default:
        return Number1 / Number2;
    }
}


int main()
{
    float Number1 = ReadNumber("Enter The First  Number: ");
    float Number2 = ReadNumber("Enter The Second Number: ");

    enOperationType OpType = ReadingType();

    cout << "Result = " << Calculate(Number1, Number2, OpType);


    return 0;
}