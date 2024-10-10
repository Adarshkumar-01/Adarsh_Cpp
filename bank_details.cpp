#include<iostream>
using namespace std;
class Bank
{
    private: int acc_no;
             char consumer_name[30],bank[40];    
    public: void getdata()
                 {
                    cout<<"Enter the account no.:"<<endl;
                    cin>>acc_no;
                    cout<<"Enter the consumer and bank:"<<endl;
                    cin>>consumer_name>>bank;
                 }
            void display();
};
void Bank::display()
{
    cout<<"The name of consumer is :"<<consumer_name;
    cout<<"\nThe account no"<<acc_no;
    cout<<"\nThe bank name "<<bank;
}
int main()
{ 
    Bank b1;
    b1.getdata();
    b1.display();
    return 0;
}