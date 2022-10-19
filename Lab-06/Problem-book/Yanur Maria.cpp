//Yanur Akter Maria 
//ID=21225103534
#include<iostream>
#include<string>
#include<conio.h>
using namespace std;
class store
{
    public:
    string title;
    float price;
 
};
class books:private store
{
private:
    int page_count;
public:
        void getdata(string p,float q,int r)
        {
        	title=p;
        	price=q;
        	page_count=r;
        }
         void putData()
    {
        cout<<"\n\t\tBook Tile is :\t"<<title<<endl<<"\t\tBook Price is :"<<price<<endl<<"\t\tBook pgae : "<<page_count<<endl;
    }
}a;
class tape: private store
{
    private:
    float playing_time;
public:
        void getdata(string x,float y,float z)
        {
        	title=x;
        	price=y;
        	playing_time=z;
        }
         void putData()
    {
        cout<<"\n\t\tTape Tile is :\t"<<title<<endl<<"\t\tTape Price is :"<<price<<endl<<"\t\tTape Play Time : "<<playing_time<<endl;
    }
}b;
int main ()
{
 
    string x,p;
    float y,z,q;
    int r;
    cout <<"For books"<<endl<<"\nEnter book title: "<<endl;
    cin>>p;
    cout <<"Enter book price: "<<endl;
    cin>>q;
    cout <<"Enter book page: "<<endl;
    cin>>r;
 
    a.getdata(p,q,r);
    a.putData();
    cout<<"\n\t\tPress any key to enter tape information..........";
    getch();
    fflush(stdin);
    system("cls");
    cout <<"For tape"<<endl<<"\nEnter tape title: "<<endl;
    cin>>x;
    cout <<"Enter tape price: "<<endl;
    cin>>y;
    cout <<"Enter Tape play time: "<<endl;
    cin>>z;
    b.getdata(x,y,z);
    b.putData();
 
 
}
