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

int reversearray(int arr[], int len,int arr2[])
{
    for(int i=0; i<len; i++)
    {
        arr2[i]=arr[len-i-1];
    }
}

void printarray(int arr2[],int len)
{
    printf("the array is:[");

    for(int i=0; i<len;i++)
    {
        
        printf("%d,",arr2[i]);
    }
    printf("]");
}

int main()
{
    
    int arr[MAX],len,arr2[MAX];

    printf("enter the size of the array:\n");
    scanf("%d",&len);

    inputarray(arr,len);
    reversearray(arr,len,arr2);
    printarray(arr2,len);

    return 0;


}
