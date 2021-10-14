#include<stdio.h>
//using namespace std;
int linearseacrh( int arr[],int element,int key)
{
    for(int i=0; i<element; i++)
    {
        if(arr[element]==key)
        {
            printf("KEY IS PRESENT!! :) \n");
            break;
        }
        printf("KEY IS NOT PRESENT!! :( \n");
        break;
    }
    return 0;
}
int main()
{
    int key, element,i;
    printf("ENTER THE NUMBER OF ELEMENTS: ");
    scanf("%d",&element);

    int arr[element];
    for (i=0;i<element;i++)
    {
        printf("ENTER THE ELEMENT: ");
        scanf("%d",&arr[element]);
    }

    printf("ENTER THE KEY ELEMENT: ");
    scanf("%d",&key);
    printf("%d",linearseacrh(arr, element, key));
}