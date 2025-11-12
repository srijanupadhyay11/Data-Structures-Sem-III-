#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node *top = NULL;

void push()
{
    struct node *newnode;
    newnode = (struct node *)malloc(sizeof(struct node));
    if (newnode == NULL)
    {
        printf("Memory not allocated");
    }
    else if (top == NULL)
    {
        printf("Enter data: ");
        scanf("%d", &newnode->data);
        top = newnode;
        newnode->next = NULL;
    }
    else
    {
        printf("Enter data: ");
        scanf("%d", &newnode->data);
        newnode->next = top;
        top= newnode;
    }
}
 void pop(){
        struct node *trash;
        trash= top;
        top= top->next;
        printf("item poped =  %d \n",trash->data);
        free(trash);
        printf("pop succesful \n");
    }
void display(){
    struct node *temp;
    temp= top;
    printf("Display Mode\n");
    while(temp!= NULL){
        printf("%d->",temp->data);
        temp= temp->next;
    }
}
int main()
{
    int ch;
    do
    {
        printf("MENU \n");
        printf("1.Push \n");
        printf("2.Pop \n");
        printf("3.Display \n");
        printf("4.Exit \n");
        printf("Enter your choice:  ");
        scanf("%d",&ch);
        switch (ch)
    {
    case 1:
        push();
        break;

    case 2:
        pop();
        break;
    case 3:
        display();
        break;
    case 4:
        printf("Exiting....");
        exit(0);
        break;
    default:
        break;
    }
    } while (ch != 4);

}