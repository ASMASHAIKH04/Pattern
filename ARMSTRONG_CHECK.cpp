#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int digit,ld=0,number;
    cout<<"ENTER A VALUE:";
    cin>>digit;

    number=digit;
    while(number!=0)
    {
        int l=digit%10;
        ld=ld+(l*l*l);
        digit=digit/10;
    }
    if(ld==digit)
    {
        cout<<"ITS ARMSTRONG";
    }
    else
    {
        cout<<"ITS NOT ARMSTRONG";
    }

   
}