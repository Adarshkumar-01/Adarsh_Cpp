#include<iostream>
using namespace std;
void ascdes(int a[],int n)
{
    int i,j;
    for(i=0;i<=n-1;i++)
    {
        for(j=0;j<n/2;j++)
        {
            if(a[j]>a[j+1])
            {
                int temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    
        for(j=n/2;j<n-1;j++)
        {
            if(a[j]<a[j+1])
            {
                int temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;          
            }
        }
    }
for(int i=0;i<=n-1;i++)
{
    cout<<a[i]<<" ";
}
}
int main()
{
    int a[]={3,4,2,1,10,30,20,40};
    int len=sizeof(a)/sizeof(a[0]);
    ascdes(a,len);
    return 0;
}