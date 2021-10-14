#include<iostream>
using namespace std;
int main(){
    int num1,num2,num3;
    cout<<"MAXIMUM OR MINIMUM"<<endl;
    cout<<"ENTER THE FIRST VALUE: ";
    cin>>num1;
    cout<<"ENTER THE SECOND VALUE: ";
    cin>>num2;
    cout<<"ENTER THE SECOND VALUE: ";
    cin>>num3;
    if (num1>num2 && num1>num3)
    {
        cout<<"FIRST VALUE IS GREATER THAN OTHER TWO";
    }
    else if (num2>num1 && num2>num3)
    {
        cout<<"SECOND VALUE IS GREATER THAN OTHER TWO";
    }
    else
    {
        cout<<"THIRD VALUE IS GREATER THAN OTHER TWO";
    }
}