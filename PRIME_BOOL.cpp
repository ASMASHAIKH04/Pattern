#include<iostream>
#include<math.h>
using namespace std;
bool primenumbers(int num)
{
    for(int i=2;i<=sqrt(num);i++)
    {
        if(num%i==0)
        {
            return false;
        }
    }
    return true;
}
int main()
{
    int num1,num2;
    cout<<"ENTER THE FIRST DIGIT: "<<endl;
    cin>>num1;
    cout<<"ENTER THE SECOND DIGIT: "<<endl;
    cin>>num2;

    for(int j=num1;j<=num2;j++)
    {
        if (primenumbers(j))
        {
            cout<<"NUMBERS ARE: "<<j<<endl;
        }
    }
    return 0;
}