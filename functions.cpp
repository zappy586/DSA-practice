#include<iostream>

using namespace std;

int add(int a, int b)
{
    int c;
    c=a+b;
    return c;
}

void swap(int *x, int &y)
{
    int temp;
    temp=*x;
    *x = y;
    y = temp;
}

int main()
{
    int num1 = 10;
    int num2 = 15;
    
    swap(&num1, num2);

    cout<<num1<<"\n"<<num2<<endl;
}