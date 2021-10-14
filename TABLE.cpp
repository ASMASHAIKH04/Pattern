#include<iostream>
using namespace std;
int main(){
    int table;
    cout<<"TABLE OF: ";
    cin>>table;
    for(int i=1;i<=10;i++)
    {
        cout<<table<<" * "<<i<<" = "<<table*i<<endl;
    }
    
}