#include<iostream>

using namespace std;

void fun(int *A)
{
    for(int i=0;i<5;i++)
    cout<<A[i]<<" ";
    cout<<endl;
    A[0]=15;
    for(int i=0;i<5;i++)
    cout<<A[i]<<" ";
    cout<<endl;
}

int * fun2(int size)
{
    int *p;
    p = new int[size];

    for(int i=0;i<size;i++)
    p[i]=i+1;

    return p;
}


int main(int argc, char **argv)
{
    int *ptr,sz = 5;

    ptr = fun2(sz);

    for(int i=0;i<sz;i++)
    cout<<ptr[i]<<endl;

    return 0;

}