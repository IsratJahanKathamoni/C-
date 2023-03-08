#include<iostream>
using namespace std;
int main()
{


int x,m;
cout<< "input 1 for kg,gm,mg "<<endl;
cout<< "input 2 for only kg"<< endl;
cout<< "please input "<<endl;
cin>>x;
if (x==1)
{
  cout<<" input mg "<<endl;
    cin>>m;

    int k=m/(1000*1000);

    m=m%(1000*1000);

    int g=m/1000;
    m=m%1000;
    cout<<k<<" kg "<<g<<" gm "<<m<<" mg "<<endl;
}
else if (x==2)
   {

    cout<<" input mg "<<endl;
    cin>>m;

    int k=m/(1000*1000);
cout<<k<<" kg "<<endl;
 }
else
{
    cout<< " wrong"<< endl;
}
}
