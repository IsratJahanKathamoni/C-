#include<iostream>
using namespace std;
int main ()
{
    int m;
    cout<<" input mg ";
    cin>>m;

    int k=m/(1000*1000);

    m=m%(1000*1000);

    int g=m/1000;
    m=m%1000;

    cout<<k<<" kg "<<g<<" gm "<<m<<" mg "<<endl;


    return 0;
}
