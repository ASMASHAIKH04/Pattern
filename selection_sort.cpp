#include<iostream>
using namespace std;
int main()
{
    int sort;
    cout<<"ENTER THE NUMBER OF ELEMENTS:"<<endl;
    cin>>sort;

    int array[sort];
    for(int i=0;i<sort;i++)
    {
        cout<<"ENTER THE ELEMENTS TO BE SORTED:"<<endl;
        cin>>array[i];
    }

    for (int i = 0 ; i < sort - 1 ; i++)
    {
        for (int j = i + 1 ; j < sort ; j++)
        {
            if( array[j] < array[i] )
            {
                int tempo = array[j];
                array[j] = array[i];
                array[i] = tempo;
            }
        }
    }
    for (int i = 0 ; i < sort ; i++)
    {
        cout<<array[i]<<" ";
    }
    cout<<"IS SORTED ARRAY"<<endl;
}