#include<iostream>
using namespace std;
class Maths
{
public: float volume(float a)
    {
        float cube;
        cout<<"Enter the value of a"<<endl;
        cin>>a;
        cube=a*a*a;
  
        cout<<"The volume of cube of side a is:"<<cube;
    }
    double volume(double r,double h)
    {
        double c;
        cout<<"\nEnter the value of r and h"<<endl;
        cin>>r>>h;
        c=3.14*r*r*h;
        cout<<"The volume of cylinder of radius r and height h is: "<<c<<endl;
    }
};
int main()
{
    double r,h,a;
    Maths m;
    m.volume(r);
    m.volume(r,h);
    return 0;
}