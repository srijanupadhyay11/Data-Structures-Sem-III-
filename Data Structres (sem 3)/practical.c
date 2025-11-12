#include<stdio.h>
int main(){
    int i,j,k,c;
    char str[11];
    for (i=1;i<=7;i++)
    {
        c=1;
        for (k=6;k>=i;k--)
        {
            printf(" ");
        }
        for (j=1;j<=i;j++)
        {
            printf("%d ",c);
            c=c*(i-j)/j;
            
        }
        printf("\n");
        
    }
    for (i=1;i<=5;i++){
        for(k=15;k>i;k--){
            printf("%d",i);
        }
        for(j=0;j<2*i-1;j++){
            printf("*");
        }
        printf("\n");
    }
    scanf("%s",str);
    printf("%s",str);
    return 0;
}