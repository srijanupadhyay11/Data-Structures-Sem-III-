#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node *FRONT = NULL;
struct node *REAR = NULL;

void insert()
{
    struct node *temp;
        temp = (struct node *)malloc(sizeof(struct node));
        if (temp == NULL)
        {
            printf("Memory overflow");
        }

        else
        {
            printf("Enter data : ");
            scanf("%d", &temp->data);
            temp->next=NULL;
            if (FRONT == NULL){
                FRONT= temp;
                REAR= temp;
            }
            else {
                REAR->next=temp;
                REAR= temp;
            }
        }
}
void deletion()
{
    struct node *temp;
    temp = FRONT;
    if (FRONT == NULL)
    {
        printf("QUEUE is empty");
    }
    else
    {
        printf("Deleted node is %d", FRONT->data);
        FRONT = FRONT->next;
        free(temp);
    }
}
void display()
{
    struct node *temp;
    temp = FRONT;
    while (temp != REAR)
    {
        printf("%d\n", temp->data);
        temp = temp->next;
    }
}
int main()
{
    int ch;
    do
    {
        printf("MENU \n 1.Insertion\n 2.Deletion\n 3.Display\n 4.Exit\n");
        printf("Enter choice : ");
        scanf("%d", &ch);
        printf("\n");
        switch (ch)
        {
        case 1:
            insert();
            break;
        case 2:
            deletion();
            break;
        case 3:
            display();
            break;
        case 4:
            printf("Exiting.....");
            break;
        default:
            printf("Enter valid choice");
            break;
        }
    } while (ch != 4);
}