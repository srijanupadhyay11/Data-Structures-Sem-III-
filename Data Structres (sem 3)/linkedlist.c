#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node *START = NULL;
void createLlist()
{
    struct node *temp;
    temp = (struct node *)malloc(sizeof(struct node));
    if (temp == NULL)
    {
        printf("Memory Not Allocated");
    }
    else
    {
        printf("Enter data : ");
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
int main()
{
    int ch;
    do
    {
        printf("MENU---------------- \n 1.Create Linked List \n 2.Display \n 3.Exit\n");
        printf("Enter choice : ");
        scanf("%d",&ch);
        printf("\n");
        switch (ch)
        {
        case 1:
            createLlist();
            break;
        case 2:
            display();
            break;
        case 3:
        printf("Exiting.....");
            break;
        default:
            break;
        }
    } while (ch != 3);
}
