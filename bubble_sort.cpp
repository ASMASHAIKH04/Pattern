#include<iostream>
using namespace std;
int main()
{
    int bubble;
    cout<<"ENTER THE NUMBER OF ELEMENTS: ";
    cin>>bubble;

    int array[bubble];
    cout<<"ENTER THE ELEMENTS IN THE ARRAY: ";
    for(int i=0;i<bubble;i++)
    {
        cin>>array[bubble];
    }

    int digit=1;
    while(digit<bubble-1)
    {
        for(int i=0;i<digit-bubble-1;i++)
        {
            if(array[i]>array[i+1])
            {
                int temp=array[i];
                array[i]=array[i+1];
                array[i+1]=temp;
            }
        }
        digit ++;
    }
    for (int i=0; i<digit;i++)
    {
        cout<<array[i];
    }
    cout<<" :SORTED ARRAY"<<endl;
    return 0;
}