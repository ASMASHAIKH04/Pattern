//LINEAR SEARCH: TME COMPLICITY[O(N)]
#include<iostream>
using namespace std;
int linearseacrh( int arr[],int element,int key)
{
    for(int i=0; i<element; i++)
    {
        if(arr[element]==key)
        {
            cout<<"KEY IS PRESENT!! :) "<<endl;
        }
    }
    cout<<"KEY IS NOT PRESENT!! :( "<<endl;
    return 0;
}
int main()
{
    int key, element,i;
    cout<<"ENTER THE NUMBER OF ELEMENTS: ";
    cin>>element;

    int arr[element];
    for (i=0;i<element;i++)
    {
        cout<<"ENTER THE ELEMENT: ";
        cin>>arr[element];
    }

    cout<<"ENTER THE KEY ELEMENT: ";
    cin>>key;
    cout<<linearseacrh(arr, element, key)<<endl;;
}