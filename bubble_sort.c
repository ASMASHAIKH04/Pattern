#include<stdio.h>
int main()
{
    int digit;
    printf("ENTER THE NUMBER OF ELEMENTS: ");
    scanf("%d",&digit);

    int array[digit];
    printf("ENTER THE DIGITS OF AN ARRAY: ");
    for (int i=0;i<digit;i++)
    {
        scanf("%d ", &array[digit]);
    }
    for(int i=0; i<digit-1; i++) //NUMBE OF PASSES
    {
        for(int j=0; j<digit;j++) //COMPARISION IN EACH PASS
        {
            if(array[j]>array[j+1])
            {
                int temp=array[j];
                array[j]=array[j+1];
                array[j+1]=temp;
            }
        }
    }
    printf("SORTED ARRAY IS: ");
    for (int i=0;i<digit; i++)
    {
        printf("%d ", &array[digit]);
    }
}