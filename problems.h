// Problem 1
// floorFunction
template<typename A>
int floorFunction(A n)
{
    return n/1;
}
// ceilingFunction
template<typename B>
int ceilingFunction(B n)
{
    if(n==int(n))
    {
        return int(n);
    }
    if(n>0)
    {
        return int(n)+1;
    }
    return int(n);
}
// Problem 2
// swap_values
template<typename A>
void swap_values(A &a, A &b)
{
    a=a+b;
    b=a-b;
    a=a-b;
}

// Problem 3
// multiply
int multiply(int num1, int num2)
{
    if(num2==0)
    {
        return 0;
    }num2--;
    return num1+multiply(num1,num2);
}
// Problem 4
// digitSum
int digitSum(int num)
{
    int sum = 0;
    if(num==0)
    {
        return 0;
    }
    return num%10 + digitSum(num/10);
};
// Problem 5
// decimalToBinary
int decimalToBinary(int number)
{
    if (number == 0)
    {
        return 0;
    }
    return (number%2)+10* decimalToBinary(number / 2);
};

// Problem 6
// midValue
template<typename T>
T midValue(T a, T b, T c)
{
    if(a>b && b>c || c>b && b>a)
    {

        return b;
    }
    if(a>c && c>b || b>c && c>a)
    {
        return c;
    }
    if(b>a && a>c || c>a && a>b)
    {
        return a;
    }
}
#ifndef PROBLEMS_H
#define PROBLEMS_H

#endif //PROBLEMS_H
