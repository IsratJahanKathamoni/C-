#include<iostream>
using namespace std;
int main ()
{
    int x=924715;
    int r=0;
    int a=x%10;
    x=x/10;
    r=r*10+a;

    a=x%10;
    x=x/10;
    r=r*10+a;

    a=x%10;
    x=x/10;
    r=r*10+a;

    a=x%10;
    x=x/10;
    r=r*10+a;

    a=x%10;
    x=x/10;
    r=r*10+a;

    a=x%10;
    x=x/10;
    r=r*10+a;

    cout<< "opposite " << r << endl;

}
