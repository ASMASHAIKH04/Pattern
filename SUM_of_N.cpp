#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"ENTER A POSITIVE VALUE: ";
    cin>>n;
    int sum=0;
    for(int i=0;i<=n;++i)
    {
        sum=sum+i;
    }
    cout<<"SUM OF THE POSITIVE DIGITS ARE: "<<sum<<endl;
}