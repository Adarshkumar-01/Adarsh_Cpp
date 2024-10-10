#include<iostream>
using namespace std;
class Mul
{
    private:int x,y,z,mul;
    public:int multiplication();
};
int Mul::multiplication()
{
    cout<<"Enter the value of x,y,z:"<<endl;
    cin>>x>>y>>z;
    mul=x*y*z;
    cout<<"The multiplication of 3 no are:"<<mul<<endl;
}
int main()
{
    Mul m1;
    m1.multiplication();
    return 0;
}

