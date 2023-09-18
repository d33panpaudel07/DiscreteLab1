/*1. Write a program to implement Euclidean and Extended Euclidean algorithms*/
#include<iostream>
using namespace std;

int main()
{
    int x, y, a, b, r;

    cout<<"Enter value for x: ";
    cin>>x;
    cout<<"Enter value for y: ";
    cin>> y;
    a = x, b = y;

    /*Euclidean nikalne part*/
    while (b != 0)
    {
        r = a % b;
        a = b;
        b = r;
    }
    cout<<"G.C.D("<<x<<","<<y<<") is "<<a<<endl;
    
    /*Extended euclidean nikalne part*/
    int x1, y1, a1, b1, d1;
    int s1 = 0, s2 = 1, t1 = 1, t2 = 0;

    cout<<"Enter x: ";
    cin>>x1;
    cout<<"Enter y: ";
    cin>>y1;

    a1 = x1, b1 = y1;
    int q1, r1, s, t;
    while (b1 != 0)
    {
        q1 = a1 / b1;
        r1 = a1 % b1;
        s = s2 - q1 * s1;
        t = t2 - q1 * t1;
        a1 = b1;
        b1 = r1;
        s2 = s1;
        s1 = s;
        t2 = t1;
        t1 = t;
    }
    d1 = a1;
    s = s2;
    t = t2;
    cout<<"G.C.D ("<<x1<<","<<y1<<") is "<<d1<<" with coefficients "<<s<<" and "<<t<<" respectively.";
    return 0;
}
