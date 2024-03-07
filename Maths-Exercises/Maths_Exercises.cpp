#include <iostream>
using namespace std; 
class Vector
{
public:
    float Length()const;
    float LengthSqr()const;
    
    float x,y;
};
class Point
{
public:
    Point AddVector(Vector v);
    float x,y;
};
float Vector::Length()const
{
    float length;
    length=sqrt(x*x + y*y);
    return length;
}
float Vector::LengthSqr()const
{
    float length;
    length=(x*x + y*y);
    return length;
}

Vector operator-(Point a, Point b)
{
    Vector v;
    v.x=a.x-b.x;
    v.y=a.y-b.y;
    return v;
}
Point Point::AddVector(Vector v)
{
 Point p2;
    p2.x=x+v.x;
    p2.y=y+v.y;
    return p2;
}

int main ()
{
    //move character p=character
    Point p; p.x=0; p.y=-1; //p = start player
    Point i; i.x=1; i.y= 1; // i = enemy
    Point c; c.x=2; c.y=-1; // c = 2nd enemy 
    
    Vector v; v.x=2; v.y=3; // move
    
    Vector ip; ip =p-i; // operator overload
    Vector cp; cp =p-c;
    
    float length = v.Length();
    float length_sqr_cp = cp.LengthSqr();
    float length_sqr_ip = ip.LengthSqr();

    Point p2 = p.AddVector(v); // add together
    
    cout<<"Result1: "<< p2.x<<", "<< p2.y<<"\n";
    cout<<"Result2: "<< v.x<<", "<<v.y<<"\n";
    cout<<"Result3: "<<length<<"\n";
    cout<<"Result4: Length squared of CP: "<<length_sqr_cp<<"\n";
    cout<<"Result4: Length squared of IP: "<<length_sqr_ip<<"\n";
    
    return 0;
}
