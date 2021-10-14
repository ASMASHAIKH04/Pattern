#include<iostream>
using namespace std;
int main(){
    int range,range1,range2,i;
    cout<<"DOUBT"<<endl;
    cout<<"ENTER THE FIRST LIMIT AND LAST LIMIT: "<<endl;
    cin>>range1>>range2;
    for(range=range1;range<=range2;range++)
    {
        for(i=2;i<range;i++)
        {
            if(range%i==0) 
            break;
        }
    }
    if (i==range)
        cout<<range<<endl;    
}