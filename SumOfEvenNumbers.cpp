#include<iostream>
using namespace std;

int main()
{
    int i,n,sum=0;
    cout<<"enter the number"<<endl;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        if(i%2==0)
        {
            cout<<i<<endl;
            sum+=i;
        }
    }
      cout<<"sum:"<<sum<<endl;

}
