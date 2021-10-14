#include<iostream>
using namespace std;
int main(){
    int num1,num2;
    cout<<"MAXIMUM OR MINIMUM"<<endl;
    cout<<"ENTER THE FIRST VALUE: ";
    cin>>num1;
    cout<<"ENTER THE SECOND VALUE: ";
    cin>>num2;
    if (num1>num2)
    {
        cout<<"FIRST VALUE IS GREATER THAN THE OTHER";
    }
    else
    {
        cout<<"SECOND VALUE IS GREATER THAN THE OTHER";
    }
}