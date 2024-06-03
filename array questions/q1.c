#include<stdio.h>
#define MAX 5


void inputarray(int arr[],int len)
{
    
    printf("enter the elements of the array:\n");
    
    for(int i=0; i<len; i++)
    {
        scanf("%d",&arr[i]);
    }

}

void sortarray(int arr[], int len)
{
    for(int i=0; i<len-1; i++)
    {
        for(int j=0; j< len-i-1; j++)
        {
            int temp;
            temp=arr[i];
            arr[i]=arr[i+1];
            arr[i+1]=temp;
        }
    }
}

void printarray(int arr[], int len)
{
    printf("the sorted array is:[");
    for(int i=0; i<len; i++)
    {
        printf("%d,",arr[i]);
    }
    printf("]\n");
}

int main()
{
    int arr[MAX],len;

    printf("enter the size of the array:\n");
    scanf("%d",&len);

    inputarray(arr,len);
    sortarray(arr,len);
    printarray(arr,len);

    return 0;


}