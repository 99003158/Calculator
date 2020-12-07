#include "calculator_operations.h"
//#include <math.h>
#include <math.h>
int add(int operand1, int operand2)
{
    return operand1 + operand2;
}

int subtract(int operand1, int operand2)// subtract of a number
{
    return operand1 - operand2;
}

//int multiply(int operand1, int operand2)// multiplication of two numbers
int multiply(int operand1, int operand2)

{
    return operand1 * operand2;
}

//int divide(int operand1, int operand2)// division of a number

    int divide(int operand1, int operand2)
{
    if(0 == operand2)
        return 0;
    else
        return operand1 / operand2;
}

//int modulo(int operand1, int operand2)
int modulo(int operand1, int operand2)// modulo of a number
{
    if(0 == operand2)
        return 0;
    else
        return operand1 % operand2;
}

int power(int operand1, int operand2)//power of a number
{int res=1;
    if(0 == operand2)
        return 1;
    if(1 == operand2)
        return operand1;
    else
     for(operand2;operand2>0;operand2--)
     {
         res=res*operand1;
     }
 return res;
}

int factorial(int operand1)// factorial of a number
{
    int i,fact=1;
    for(i=1;i<=operand1;i++)
    {
        fact=fact*i;
    }
    return fact;
}

//int inverse(int operand1)// inverse of a number
 int inverse(int operand1)
{
        if(0 == operand1)
        return 0;
    else
        return 1 / operand1;
}

//int currency(int operand1)
int currency(int operand1)
{
    return operand1 * 74;
}

int length(int operand1)
{
    return operand1 * 12;
}

int time(int operand1)// find out the time
{
    return operand1 * 60;
}
