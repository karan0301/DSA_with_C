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

void searchindex(int arr[],int len, int temp)
{
    int flag=0;
    for(int i=0; i<len; i++)
    {
        if(temp==arr[i])
        {
            printf("the index of %d is:%d",arr[i],i);
            flag=1;
            
        }
        
    }
    if (flag==0)
    {
        printf("element is not present");
    }  
}

int main()
{
    int arr[MAX],len,temp;

    printf("enter the length of the array\n");
    scanf("%d",&len);
   
    inputarray(arr,len);

    printf("enter the number of which index is to be searched:\n");
    scanf("%d",&temp);

    searchindex(arr,len,temp);

    return 0;
}