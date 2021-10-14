#include<iostream>
using namespace std;
int main()
{
    int star,i,j;
    cout<<"ENTER NO. OF COLS: ";
    cin>>star;
    for(i=star;i>=1;i--)
    {
        for(j=1; j<=i;++j)
        {
            cout<<j<<" ";
        }
        cout<<endl;
    }
}