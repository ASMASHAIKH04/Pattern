#include<iostream>
using namespace std;
int main()
{
    int star;
    cout<<"ENTER NO. OF COLS: ";
    cin>>star;
    for(int i=1; i<=star; i++)
    {
        for(int j=1; j<=star; j++)
        {
            if(j<=star-i)
            cout<<" ";
            else
            cout<<"x";
        }
        cout<<endl;
    }
}