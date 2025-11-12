#include <stdio.h>
#include <stdlib.h>
void swap(int *a,int *b)
{
    int temp;
    temp= *a;
    *a= *b;
    *b= temp;
}
int main()
{
    int a,b;
    printf("Enter values of a and b : ");
    scanf("%d%d",&a,&b);
    printf("A=%d  B=%d\n",a,b);
    swap(&a,&b);
    printf("A=%d  B=%d",a,b);
    return 0;
}
 