#include<iostream>
using namespace std;
int main()
// {
    //if-else statement
    // char alpha;
    // int uppercase,lowercase;
    // cout<<"ENTER THE ALPHABET"<<endl;
    // cout<<"ENTER THE charachter to be checked: ";
    // cin>>alpha;
    // uppercase=(alpha=='A' || alpha=='E' || alpha=='I' || alpha=='O' || alpha=='U');
    // lowercase=(alpha=='a' || alpha=='e' || alpha=='i' || alpha=='o' || alpha=='u');
    // if(uppercase || lowercase)
    // {
    //     cout<<"IT IS A VOWEL!!  :)"<<endl;
    // }
    // else  
    // {
    //     cout<<"II IS NOT A VOWEL!!   :("<<endl;
    // }
// }
{
    //switch case
    char letter;
    cout<<"ENTER THE ALPHABET"<<endl;
    cout<<"ENTER THE charachter to be checked: ";
    cin>>letter;
    switch (letter)
    {
        case 'a' :
        {
            cout<<"IT IS A VOWEL!!  :) ";
            break;
        } 
        case 'A':
        {
            cout<<"IT IS A VOWEL!!  :) ";
            break;
        } 
        case 'e' :
        {
            cout<<"IT IS A VOWEL!!  :) ";
            break;
        } 
        case 'E':
        {
            cout<<"IT IS A VOWEL!!  :) ";
            break;
        } 
        case 'i' :
        {
            cout<<"IT IS A VOWEL!!  :) ";
            break;
        } 
        case 'I':
        {
            cout<<"IT IS A VOWEL!!  :) ";
            break;
        } 
        case 'o' :
        {
            cout<<"IT IS A VOWEL!!  :) ";
            break;
        } 
        case 'O':
        {
            cout<<"IT IS A VOWEL!!  :) ";
            break;
        } 
        case 'u' :
        {
            cout<<"IT IS A VOWEL!!  :) ";
            break;
        } 
        case 'U':
        {
            cout<<"IT IS A VOWEL!!  :) ";
            break;
        } 
        default:
            cout<<"II IS NOT A VOWEL!!   :("<<endl;
            break;
    }
}
