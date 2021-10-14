#include<iostream>
using namespace std;
int main(){
    int side1,side2,side3;
    cout<<"TYPE OF TRIANGLE"<<endl;
    cout<<"ENTER THE FIRST VALUE OF THE SIDE: ";
    cin>>side1;
    cout<<"ENTER THE SECOND VALUE OF THE SIDE: ";
    cin>>side2;
    cout<<"ENTER THE SECOND VALUE OF THE SIDE: ";
    cin>>side3;
    if (side1==side2 && side2==side3)
    {
        cout<<"II IS AN EQUILATERAL TRIANGLE";
    }
    else if (side2!=side1 && side2!=side3)
    {
        cout<<"IT IS A SCALENE TRIANGLE";
    }
    else
    {
        cout<<"IT IS A ISOSCELES TRIANGLE";
    }
}