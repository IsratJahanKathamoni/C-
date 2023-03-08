#include<iostream>
using namespace std;
int main ()
{
    int x;
    cout<< "input "<< endl;
    cin>>x;
    if (x<50 && x>100 && x%13==0 || x%9==0) {
      cout << "yes ";
    }
    else {
        cout<< "no ";
    }

