#include<iostream>
using namespace std;
class bank
{
    private:int acc_no;
    char Consumer[30],Bank[20];
    public: void getdata()
             {
                cout<<"Enter the acc.no:"<<endl;
                cin>>acc_no;
                cout<<"Enter the cosumer and bank name"<<endl;
                cin>>Consumer>>Bank;
             }
            void display()
            {
                cout<<"The name of consumer is:"<<Consumer;
                cout<<"\nThe Bank name and account no are:"<<Bank<<"\t"<<acc_no;

            }
};
int main()
{
 bank b1;
 b1.getdata();
 b1.display();
 return 0;

}