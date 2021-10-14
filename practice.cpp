#include <iostream>
using namespace std;
int main()
{
    //SOLID RECTANGLE
    // int a,b;
    // cout<<"ROWS:";
    // cin>>a;
    // cout<<"COLS:";
    // cin>>b;
    // for (int i=0;i<a;i++)
    // {
    //     for (int j=0;j<b;j++)
    //     {
    //         cout<<" * ";
    //     }
    //     cout<<endl;
    // }

    //HOLLOW RECTANGLE
    // int a,b,i,j;
    // cout<<"ROWS:";
    // cin>>a;
    // cout<<"COLS:";
    // cin>>b;
    // for (i=1;i<=a;i++)
    // {
    //     for(j=1;j<=b;j++)
    //     {
    //         if (i==1 || i==a || j==1 || j==b)
    //         cout<<" * ";
    //         else
    //         cout<<" ~ ";
    //     }
    //     cout<<endl;
    // }

    //PYRAMID USING STARS
    // int a,i,j;
    // cout<<"NUMBER OF ROWS/COLOUMNS: ";
    // cin>>a;
    // for(i=1;i<=a;i++)
    // {
    //     for(j=1;j<=i;j++)
    //     {
    //         cout<<"x";
    //     }
    //     cout<<endl;
    // }

    //INVERTED HALF PYRAMID USING STARS
    // int a,i,j;
    // cout<<"NUMBER OF ROWS/COLOUMNS: ";
    // cin>>a;
    // for (i=a;i>=1;i--)
    // {
    //     for(j=1;j<=i;j++)
    //     {
    //         cout<<" x ";
    //     }
    //     cout<<endl;
    // }
    
    //PYRAMID USING STARS AFTER 180 ROTATION
    // int a,i,j;
    // cout<<"NUMBER OF ROWS/COLOUMNS: ";
    // cin>>a;
    // for(i=1;i<=a;i++)
    // {
    //     for (j=1;j<=a;j++)
    //     {
    //         if(j<=a-i)
    //         cout<<" ";
    //         else
    //         cout<<"x";
    //     }
    //     cout<<endl;
    // }

    //PYRAMID USING STARS
    int a,i,j;
    cout<<"ENTER NO. OF ROWS/COLOUMS:";
    cin>>a;
    for(i=1;i<=a;i++)
    {

        for(j=1;j<=i;j++)
        {
            if (j<=i-a)
            cout<<" ";
            else
            cout<<i;
        }
        cout<<endl;
    }
    

}