#include<stdio.h>
#define MAX 6

void inputarray(int arr[])
{
    printf("enter the elements of the array\n");
    for(int i=0; i<MAX; i++)
    {
        scanf("%d",&arr[i]);
    }
}
void bubblesort(int arr[])
{
    for(int i=0; i<MAX-1; i++)
    {
        for(int j=0;j<MAX-i-1; j++)
        {
            if(arr[j] > arr[j+1])
            {
                int temp;
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
}
void printsortedarray(int arr[])
{
    for(int i=0; i<MAX; i++)
    {
        printf("%d,",arr[i]);
    }
}

int main()
{
    int arr[MAX];
    inputarray(arr);
    bubblesort(arr);
    printsortedarray(arr);
    return 0;
}