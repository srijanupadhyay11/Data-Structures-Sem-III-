#include <stdio.h>
#include<conio.h>
// void matp(int arr[3][3])
// {
//     int i,j;
//         for (i = 0; i < 3; i++)
//     {
//         for (j = 0; j < 3; j++)
//         {
//             printf("%d\t", arr[i][j]);
//         }
//         printf("\n"); 
//     }
// }
int dr(int n)
{
    int d,sum=0;
    if (n<9)
    {
        return n;
    }
    else
    {
        while(n>0)
        {
            d= n%10;
            sum= sum + d;
            n= n/10;
        }
        if (sum>9)
        {
            n= sum;
            return dr(n);
        }
        else
        return sum;

    }
}
int main()
{
    // int i, j,r1=3,r2=3,c1=3,c2=3,k,sum=0;
    // int arr[3][3],arr1[3][3],arr2[3][3];
    // printf("Enter values for the matrix 1:\n");

    // for (i = 0; i < 3; i++)
    // {
    //     for (j = 0; j < 3; j++) 
    //     {
    //         scanf("%d", &arr[i][j]);
    //     }
    // }
    //  matp(arr);
    // printf("Enter values for the matrix 2:\n");

    // for (i = 0; i < 3; i++)
    // {
    //     for (j = 0; j < 3; j++) 
    //     {
    //         scanf("%d", &arr1[i][j]);
    //     }
    // }
    //  matp(arr1);
    // for (i=0;i<r1;i++)
    // {
    //     for (j=0;j<c2;j++)
    //     {
    //         for (k=0;k<c1;k++)
    //         {
    //             sum= sum+arr[i][k]*arr1[k][i];
    //         }
    //         arr2[i][j]=sum;
    //         sum=0;
    //     }
    // }

    // printf("The multiplied matrix is:\n");
    // matp(arr2);

    // int a,b,*p1,*p2;
    // p1=&a;
    // p2=&b;
    // printf("enter values of a and b: \n ");
    // scanf("%d",p1);
    // scanf("%d",&b);
    // printf("value of a=%d\nvalue of p1=%d\nvalue of b=%d\nvalue of p2=%d",*p1,p1,*p2,p2);
    int r,n;
    scanf("%d",&n);
    r= dr(n);
    printf ("%d",r);
    return 0;
}
