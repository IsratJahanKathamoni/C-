# include <iostream>
using namespace std;
int main ()
{
    double x;
    cout<< "INPUT ";
    cin>>x;
    if (x==1)
    {
        cout << x<< " 1 taka converted to dollar = 0.0125 USD" << endl;
        cin>>x;
        cout << "x=x*0.0125"<<endl;
    }
    else if (x==2)
    {
        cout <<x<< " 1 taka converted to Rupee = .25 USD"<< endl;
        cin>>x;
        cout<<" x=x*0.25"<<endl;
    }
    else if (x==3)
    {
        cout<<x<< " 1 taka converted to Riyal= .05 USD "<< endl;
        cin>>x;
        cout<< "x=x*0.05"<< endl;
    }
    else if (x==4)
    {
        cout<< x<< " 1 taka converted to Dinner =0.00366 Dinner " <<endl;
        cin>>x;
        cout << "x=x*0.00366"<<endl;

    }
    else if (x==5)
    {
        cout <<x << "  1 taka converted to Pound = 0.0126 Pound "<< endl;
        cin>>x;
        cout <<" x = x*0.0126"<< endl;


    }
    else if (x==6)
    {
        cout <<x<< " 1 taka converted to Yen = 1.234 Yen" << endl;
        cin>>x;
        cout<<" x=x*1.234";
    }
    else
    {
        cout << " wrong " << endl;
    }
}
