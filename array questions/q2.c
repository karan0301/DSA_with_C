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

int sumofvalues(int arr[], int len)
{
    int temp=0;
    for(int i=0;i<len;i++)
    {
        temp=arr[i]+temp;
    }

    return temp;

}

int main()
{
    int arr[MAX],len,temp;

    printf("enter the length of the array\n");
    scanf("%d",&len);

    inputarray(arr,len);
    temp=sumofvalues(arr,len);

    printf("the sum of values is:%d\n",temp);

    return 0;
}
