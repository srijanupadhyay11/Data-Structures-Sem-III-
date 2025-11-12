#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct Node* prev;
    struct Node* next;
};
struct node* START=NULL;
struct node* createNode(int data) {
    struct node* newNode = (struct node*)malloc(sizeof(struct node));
    newNode->data = data;
    newNode->prev = NULL;
    newNode->next = NULL;
    return newNode;
}
void insertData()
{
    struct node * newnode;
    struct node * temp;
    newnode = (struct node *)malloc(sizeof(struct node));
    int n; 
    temp=START;
    printf("Enter data after which new data is to be inserted : ");
    scanf("%d", &n);
    printf("Enter data to be inserted : ");
    scanf("%d", &newnode->data);

    while ( temp->data != n)
    {
        temp = temp->next;
    };
    newnode->next = temp->next;
    temp->next = newnode;
    newnode->prev = temp;
    display();
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
int main(){
int ch;
int dt;
    do
    {
        printf("MENU---------------- \n 1.Create Linked List \n 2.insert after data \n 3.Exit\n");
        printf("Enter choice : ");
        scanf("%d",&ch);
        printf("\n");
        switch (ch)
        {
        case 1:
             printf("Enter data : ");
             scanf("%d",&dt);
            createNode(dt);
            break;
        case 2:
           insertData();
            break;
        case 3:
           display();
            break;
        case 4:
        printf("Exiting.....");
            break;
        default:
            break;
        }
    } while (ch != 4);
}