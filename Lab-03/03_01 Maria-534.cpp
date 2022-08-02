//Name: Yanur Maria
//ID: 21225103534
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int c =0,p=0;
    for(int i =1;i<=5;i++)
    {
        for(int j=1;j<=5;j++)
        {
            cin>>c;
            if(c == 1)
            {
                p=abs(i-3)+abs(j-3);
            }
        }
    }
    cout<<p<<endl;
}
