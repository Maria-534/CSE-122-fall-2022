//Name: Yanur Maria
//ID: 21225103534
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,b=0;
    string p;
    cin>>p;

    for(i=0;i<p.length();i++)
    {
        for(j=i+2;j<p.length();j+=2)
        {
            if(p[i]>p[j])
            {
                b=p[i];
                p[i]=p[j];
                p[j]=b;
            }
        }

    }

 cout <<p<<endl;

}
