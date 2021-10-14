#include<iostream>
using namespace std;

int binary_search(int arr[],int element,int key)
{
    int r=element;
    int f=0;
    while(f<=r)
    {
        int mid=(r+f)/2;
        if(arr[mid]==element)
        {
            cout<<"ELEMENT FOUND SUCESSFULLY";
            break;
        }
        else if(arr[mid>element])
        {
            r=mid-1;
        }
        else
        {
            f=mid+1;
        }
    }
    //cout<<"ELEMENT MISSING :("<<endl;
    //return 0;
}
int main()
{
    int element;
    cout<<"ENTER NUMBER OF ELEMENT: ";
    cin>>element;

    int arr[element];
    for(int i=1;i<=element;i++)
    {
        cout<<"ENTER ELEMENTS: ";
        cin>>arr[element];
    }

    int key;
    cout<<"ENTER THE KEY: ";
    cin>>key;

    cout<<binary_search(arr, element, key);
}