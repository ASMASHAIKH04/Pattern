#include<iostream>
using namespace std;
int main()
{
    int star;
    cout<<"ENTER NO. OF COLS: ";
    cin>>star;
    for(int i=star; i>=1; i--)
    {
        for(int j=1; j<=i; j++)
        {
            cout<<" *";
        }
        cout<<endl;
    }
}