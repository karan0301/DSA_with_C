#include<stdio.h>
#define MAX 5

void inputarray(int arr[], int len)
{
    printf("enter the elements of the array:\n");
    
    for(int i=0; i<len; i++)
    {
        scanf("%d",&arr[i]);
    }

}

void copyarray(int arr[],int len,int arr2[])
{
    for (int i = 0; i < len; i++)
    {
        arr2[i]=arr[i];
    }
    
}

void printbotharray(int arr[],int len, int arr2[])
{
    printf("first array is:[");
    for (int i = 0; i < len; i++)
    {
        printf("%d,",arr[i]);
    }
    printf("]\n");

    printf("second array is:[");
    for (int i = 0; i < len; i++)
    {
        printf("%d,",arr2[i]);
    }
    printf("]\n");


    
}

int main()
{
    int arr[MAX],len,arr2[MAX];

    printf("enter the size of the array:\n");
    scanf("%d",&len);

    inputarray(arr,len);
    copyarray(arr,len,arr2);
    printbotharray(arr,len,arr2);

    return 0;
}