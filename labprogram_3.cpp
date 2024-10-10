#include<iostream>
using namespace std;
void swap(int &num1,int &num2);
int main(){
    int x,y;
    cout<<"Enter the value of 2 no:"<<endl;
    cin>>x>>y;
    cout<<"The no's before swapping are:"<<"\n\t x= "<<x<<"\n y="<<y<<endl;
    swap(x,y);
    cout<<"After swapping,the no's are:"<<"\n\t x="<<x<<"\n y="<<y<<endl;
    return 0;
    }

    void swap(int &num1,int &num2)
    {
        int temp;
        temp=num1;
        num1=num2;
        num2=temp;
    }