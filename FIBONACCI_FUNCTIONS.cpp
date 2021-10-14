#include <iostream>
using namespace std;
void fibb(int n)
{
    int term1=0;
    int term2=1;
    int term;
    for (int i=1;i<=n;i++)
    {
        cout<<term1<<endl;
        term=term1+term2;
        term1=term2;
        term2=term;
    }
    return;
}
int main()
{
    int n;
    cout<<"ENTER A DIGIT: ";
    cin>>n;
    fibb(n);
return 0;
}