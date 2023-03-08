#include<iostream>
using namespace std;
int main ()
{
    int x,sum,minus,y;
    cout<< "input a number"<<endl;
    cin>>x;
    if (x%2==0)
    {
        cout<< "even" << endl;
        cin>>y;
        y= x+1;
        sum= x+y;
        cout<<sum<<" ans " <<endl;

    }
    else if (x%2!=0)
        {cout << "odd" << endl;
        y= x-1;
        minus = x-y;
        cout<< minus<< " ans " << endl;
        }
        else
        {
            cout<< "wrong"<< endl;
        }


}
