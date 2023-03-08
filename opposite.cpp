#include<iostream>
using namespace std;
int main ()
{
    int x= 289, r, a;
    r=0;
    a=x%10;
    x=x/10;
    r=r*10+a;
    a=x%10;
    x=x/10;
    r=r*10+a;
    a=x%10;
    x=x/10;
    r=r*10+a;

    cout << " revers " << r << endl;
    return 0;


}
