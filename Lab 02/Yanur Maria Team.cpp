//Name: Yanur Maria
//ID: 21225103534
#include<iostream>
#include<string>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int sum=0,p,v,t;
    for(int i=0;i<n;i++)
    {
    cin>>p>>v>>t;
    if((p==1 && v==1)||(v==1&&t==1)||(t==1&&p==1))
    sum++;
    }

  cout<<sum;
}
