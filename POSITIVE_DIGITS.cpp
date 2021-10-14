#include<iostream>
using namespace std;
int main()
{
    int digit,reverse=0,ld;
    cout<<"ENTER A VALUE:";
    cin>>digit;

   while(digit>0)
   {
       ld=digit%10;
       reverse=reverse*10+ld;
       digit=digit/10;
   }
   cout<<reverse;
}