//Yanur Akter Maria
//ID-21225103534
#include<bits/stdc++.h>
#include<conio.h>
using namespace std;
class var{
    public:
    int a1=80,a2=70,a3=50,a4=150,a5=90,a6=100;
    int sum=a1+a2+a3+a4+a5+a6;;
   };
int main()
{   system("cls");
    var m;
    if(m.sum>500){
    	double tk=m.sum*.10;
    	tk=m.sum-tk;
    	cout<<"Return back taka"<<": "<<1000-tk;
    }
    else if(m.sum<500){
    	double tk2=m.sum*.05;
    	tk2=m.sum-tk2;
    	cout<<"Return back taka"<<": "<<1000-tk2;
    }
    getch();
}	
