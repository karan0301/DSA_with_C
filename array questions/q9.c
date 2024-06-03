#include<stdio.h>
int main()
{
    int arr[20],len,position,element;

    printf("enter the length of the array\n");
    scanf("%d",&len);

    printf("enter the elements of the array\n");
    for(int i=0; i<len;i++)
    {
        scanf("%d",&arr[i]);
    }

    printf("enter the element you want to insert in the array\n");
    scanf("%d",&element);

    printf("enter the position of the element \n");
    scanf("%d",&position);

    if (position<0 || position>len)
    {
        printf("position is not valid!!\n");
    }
    else
    {
        for (int i =len ; i>position; i--)
        {
            arr[i]=arr[i-1];
        }
    }
      
    arr[position]=element;

    len++;

    printf("the final array is:[");
    for (int i = 0; i < len; i++)
    {
     printf("%d,",arr[i]);
    }
    printf("]");

    return 0;
        


    
    

}