#include<iostream>
using namespace std;
class grt
{
    public:void comp()
    {
        int a,b;
        cout<<"enter the values of a and b:"<<endl;
        cin>>a>>b;
        if(a>b)
        {
            cout<<a<<" is greater than "<<b<<endl;
        }
        else{
            cout<<b<<" is greater than "<<a<<endl;
        }
    }
};
int main()
{
    grt g1;
    g1.comp();
    return 0;
}