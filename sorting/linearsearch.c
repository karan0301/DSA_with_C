#include<stdio.h>
int main()
{
    int num,key,flag=0;

    printf("enter the size of the array\n");
    scanf("%d",&num);

    int arr[num];

    printf("enter the elements of the array\n");
    for(int i=0;i<num;i++)
    {
        scanf("%d",&arr[i]);
    }

    printf("enter the number to be searched\n");
    scanf("%d",&key);

    for(int i=0; i<num; i++)
    {
        if(num==key)
        {
            printf("the element is present at %d position of the array\n",i);
            flag=1;

        }
    }
    if(flag==0)
    {
        printf("the element is not present in the array\n");
    }
    
    return 0;

}