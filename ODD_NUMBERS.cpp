#include<iostream>
using namespace std;
int main(){
    int odd,i;
    cout<<"PRINT ALL ODD NUMBERS TILL N";
    cout<<"ENTER THE LIMIT:";
    cin>>odd;
    for(i=1;i<=odd;i++)
    {
        if(i%2==0)
            cout<<i<<endl;  
            continue;  
    }
        
}