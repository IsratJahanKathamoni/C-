#include<iostream>
using namespace std;
int main ()
{
    int s=100000;
    int d=s/86400;
    s=s%84600;

    int h=s/3600;
    s=s%3600;

    int m=s/60;
    s=s%60;
     cout << d << " days " << h << " hours " << m << " minutes " << s << " secouds " << endl;

}
