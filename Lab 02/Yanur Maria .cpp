#include<bits/stdc++.h>
#include<string.h>
using namespace std;
int main ()
{
    int n,k,count=0;
    cin>>n>>k;
    string s;
    for(int i=0;i<n;i++)
    {
        cin>>s[i];
    }
    for(int i=0;i<n;i++){
        if(s[i] <= s[k-1] && s[i]>0)
            count++;

    }
    cout<<count;
}
