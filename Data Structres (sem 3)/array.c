
// void bbs(int arr[],int n)
// {
//     int i,j,temp;
//     int e;
//     for (i=0;i<n;i++)
//     {
//         for (j=0;j<n-1-i;j++)
//         {
//             if (arr[j]>arr[j+1])
//             {
//                 temp= arr[j];
//                 arr[j]=arr[j+1];
//                 arr[j+1]=temp;

//             }
//          }
//     }
//     printf("enter Nth max element to find : ");
//     scanf("%d",&e);
//     printf("%dth/rd max element is : %d",e,arr[e-1]);

// }
// void rev(int arr[],int n){
//     int s=0,temp=0;
//     int l= n-1;
//     while (s<l)
//     {
//         temp= arr[s];
//         arr[s]= arr[l];
//         arr[l]=temp;
//         s++;
//         l--;
//     }
//     printf("Reversed Array: \n");
//       for (int i=0;i<n;i++){
//        printf("%d \n",arr[i]);
//     }

// }
// int main(){
//     int n;
//     printf("Enter no of elements");
//     scanf("%d",&n);
//     int arr[n];
//     for (int i=0;i<n;i++){
//         scanf("%d",&arr[i]);
//     }
//     // // int max= arr[0];
//     // // int nxt_max= arr[0];
//     // // int temp= 0;
//     // // int temp2= 0;
//     // // for (int i=0;i<n;i++){
//     // //     if (arr[i]> max){
//     // //         temp=arr[i];
//     // //         arr[i]=max;
//     // //         max= temp;
//     // //     }

//     // //        if (max>arr[i] && arr[i]> nxt_max){
//     //         temp2=arr[i];
//     //         arr[i]=nxt_max;
//     //         nxt_max=temp2;
//     //     }
//     // // }
//     // // printf("Max element is : %d ",max);
//     // // printf("Max element is : %d ",nxt_max);
//     // // bbs(arr,n);
//     rev(arr, n);
// }
// Linked list--------------------------------------
#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node *START = NULL;
void createll()
{
    struct node *temp;
    temp = (struct node *)malloc(sizeof(struct node));
    if (temp == NULL)
    {
        printf("Memory could not be allocated");
    }
    else
    {
        printf("Enter data to be inserted");
        scanf("%d", &temp->data);
        temp->next = NULL;
        START = temp;
    }
}
void display()
{
    struct node *temp;
    temp = START;
    while (temp != NULL)
    {
        printf("%d \n", temp->data);
        temp = temp->next;
    }
}
void insertAtBegining(int val)
{
    struct node *temp;
    temp = (struct node *)malloc(sizeof(struct node));
    temp->data= val;
    temp->next = START;
    START= temp;
}
void insertAtEnd(int val){
    struct node*temp;
    struct node *tempNode;
    temp= (struct node*)malloc(sizeof(struct node));
    temp->data= val;
    temp->next= NULL;
    if (START== NULL){
        START= temp;
    }
    else{
        tempNode= START;
        while (tempNode->next != NULL)
        {
            tempNode= tempNode->next;
        }
        tempNode->next= temp; 
        temp->next=NULL;
    }
    printf("Element inserted at the end");
}
void insertAtAnyPositon(int val, int ref){
    struct node*temp;
    struct node*newNode;
    newNode= (struct node*)malloc(sizeof(struct node));
    newNode->data= val;
    temp=START;
    while (temp->data!= ref)
    {
        temp=temp->next;
    }
    newNode->next= temp->next;
    temp->next= newNode;  
}
int main()
{
    int ch=0, val,ref;
    // printf("\nEnter your choice:\n");
    // printf("0. Creation\n1. Sort \n2. Delete\n3. Display\n4. Exit\n");
    // scanf("%d", &ch);

    do
    {
        printf("\nEnter your choice:\n");
        printf("0. Creation\n1. Sort \n2. Delete\n3. Display\n4. Insert in the Begining\n5. Insert in the End \n6. Insert at any positon\n7.Exit\n");
        scanf("%d", &ch);
        switch (ch)
        {
        case 0:
            printf("You are in Creation mode\n");
            createll();
            break;
        case 1:
            printf("You are in Sort mode\n");
            break;
        case 2:
            printf("You are in Delete mode\n");
            break;
        case 3:
            printf("You are in Display mode\n");
            display();
            break;
        case 4:
            printf("You are in Insert mode\n");
            printf("Enter data to be inserted : ");
            scanf("%d", &val);
            insertAtBegining(val);
            break;
         case 5:
            printf("You are in Insert mode\n");
            printf("Enter data to be inserted : ");
            scanf("%d", &val);
            insertAtEnd(val);
            break;
        case 6:
            printf("Enter positon to insert data : ");
            scanf("%d",&ref);
            printf("Enter data to be inserted :");
            scanf("%d",&val);
            insertAtAnyPositon(val,ref);
            printf("%d Enterted successfully ",val);
            break;
        case 7:
            printf("Exiting...\n");
            exit(0);
            break;
        default:
            printf("Invalid choice, please try again.\n");
        }
    } while (ch != 7);
}