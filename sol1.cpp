#include<iostream>
using namespace std;

int main()
{
    int n,k,t,c=0,ar[10];
    cout<<"Enter the cases";
cin>>t;
for(int j=0;j<t;j++)
{
cout<<"Enter index ";
cin>>n;
for(int i=0;i<n;i++)
{
    cin>>ar[i];
}
cin>>k;
for(int m=0;m<n;m++)
{
    if(ar[m]==k)
    {
        cout<<"Present at "<<c+1<<"\n";
        break;
    }
    else if(m==(n-1))
    {
        cout<<"Not found "<<c+1<<"\n";
    }
    else
    {
        c++;
    }

}c=0;
}

}

