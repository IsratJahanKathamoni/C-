#include<iostream>
using namespace std;
int main()
{
    int x;
    cout<< " input "<<endl ;
    cin>>x;

    if (x>=85 && x<=100)
    {
        cout <<" A" <<endl;
    }
    else if (x>=80 && x<85)
    {
        cout << "A- "<< endl;
    }
    else if (x>=75 && x<80)
    {
        cout << "B+ "<<endl;
    } else if (x>=70 && x<75)
    {
        cout << "B "<< endl;
    }
    else if (x>=65 && x<70)
    {
        cout << "B- "<<endl;
    } else if(x>=60 &&x<65)
    {
        cout << "c+ "<<endl;
    } else if (x>=55 && x<60)
    {
        cout << "c " << endl;
    }else if (x>=50 && x<55){
    cout<< "c-" << endl;}
    else if(x>=45 && x<50)
    {
        cout << "D+ "<< endl;
    } else if (x>=40 && x<45)
    {
        cout << "D "<<endl;
    }

    else if (x>=0 && x<40)
    {
        cout << "F "<< endl;
    }
    else
        cout << "wrong " <<endl;
}
