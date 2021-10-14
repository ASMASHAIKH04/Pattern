#include<stdio.h>
int main()
{
    int sort;
    printf("ENTER THE NUMBER OF ELEMENTS:");
    scanf("%d",&sort);

    int array[sort];
    printf("ENTER THE ELEMENTS ");
    for(int i = 0 ; i < sort ; i++)
    {    
        scanf("%d",&array[sort]);
    }

    for(int i = 0 ; i < sort - 1 ; i++)
    {
        for(int j = i + 1 ; j < sort ; j++)
        {
            if (array[i] > array[j])
            {
                int temp=array[j];
                array[j]=array[i];
                array[i]=temp;
            }
        }
    }
    for (int i=0;i<sort;i++)
    {
        printf("%d",array[i]);
    }
    printf(" IS SORTED ARRAY");
}
    

