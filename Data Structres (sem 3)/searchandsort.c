#include <stdio.h>
//linear search
void ls(int arr[],int n,int item)
{
    int i,c=0;
    for (i=0;i<n;i++)
    {
        if (item==arr[i])
        {
            printf("Item is present (Linear Search)");
            c++; 
        }
       
    }
    if (c==0)
    {
        printf("Item is not present ");
    }
}
//binary search
void bs(int arr[],int n,int item)
{
    
    int beg=0,mid,end;
    end= n-1;
    while(beg<=end)
    {
        mid= (beg+end)/2;
         if (arr[mid]==item)
        {
             printf("Item is present (Binary Search)");
             break;
        }
        if (arr[mid]<=item)
        {
            end= mid-1;
        }
        else
        {
            beg= mid+1;
        }
       
    }
}
//bubble sort
void bbs(int arr[],int n)
{
    int i,j,temp;
    printf("Sorted array using Bubble Sort is : \n");
    for (i=0;i<n;i++)
    {
        for (j=0;j<n-1-i;j++)
        {
            if (arr[j]>arr[j+1])
            {
                temp= arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;

            }
        }
    }
    for (i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
}
//selection sort
void ss(int arr[],int n)
{
    int i,j,temp,min;
    printf("Sorted array using Selection Sort is : \n");
    for (i=0;i<n;i++)
    {
        min=i;
        for (j=i+1;j<n;j++)
        {
            if (arr[i]>arr[j])
            {
                min=j;
            }
        }
        temp=arr[i];
        arr[i]=arr[min];
        arr[j=temp];
    }   
    for (i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
}
//quick sort
void qs(int arr[]){
    
}
int main()
{
    
    int item,n,i;
    printf("enter lenght of array");
    scanf("%d",&n);
    int arr[n];
    printf("enter item to be searched");
    scanf("%d",&item);
    printf("enter array");
    for (i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    ls(arr,n,item);
    printf("\n");
    bs(arr,n,item);
    printf("\n");
    bbs(arr,n);
    ss(arr,n);
    return 0;
}
