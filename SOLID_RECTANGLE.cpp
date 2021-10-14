#include<iostream>
using namespace std;
int main()
{
    int rows, cols;
    cout<<"ENTER NO. OF ROWS: ";
    cin>>rows;
    cout<<"ENTER NO. OF COLS: ";
    cin>>cols;
    for(int i=1; i<=rows; i++)
    {
        for(int j=1; j<=cols; j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
}