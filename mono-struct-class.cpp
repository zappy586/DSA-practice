#include<iostream>
#include<stdio.h>

using namespace std;


class Rectangle
{
    public:
    int length;
    int breadth;

    Rectangle(int l, int b)
    {
        length=l;
        breadth=b;
    }

    int area()
    {
        return length*breadth;
    }

    int peri()
    {
        return 2*(length*breadth);
    }
};

int main()
{
    
    printf("Enter length and Breadth: ");
    int l,b;
    cin>>l>>b;
    Rectangle r(l,b);
    int ar = r.area();
    int perimeter = r.peri();

    printf("Area=%d\nPerimeter=%d\n", ar, perimeter);
    return 0;
}