#include <stdio.h>

#define SIZE 10

int queue[SIZE];
int front = 0, rear = -1;


void enqueue(int x) {
    if (rear == SIZE - 1) {
        printf("Queue Overflow\n");
        return;
    }
    queue[++rear] = x;
    printf("Sucessfully inserted\n");
}


int dequeue() {
    if (front > rear) {
        printf("Queue Underflow\n");
        return -1;
    }

    int pos = -1;


    for (int i = front; i <= rear; i++) {
        if (queue[i] == 10) {
            pos = i;
            break;
        }
    }


    if (pos != -1) {
        int temp = queue[pos];

        for (int i = pos; i < rear; i++) {
            queue[i] = queue[i + 1];
        }
        rear--;

        return temp;
    }

   
    return queue[front++];
}

void display() {
    if (front > rear) {
        printf("Queue is empty\n");
        return;
    }

    printf("Queue: ");
    for (int i = front; i <= rear; i++) {
        printf("%d ", queue[i]);
    }
    printf("\n");
}

int main() {
    int choice, value;

    while (1) {
        printf("\n1. Enqueue\n2. Dequeue\n3. Display\n4. Exit\nEnter choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter value: ");
                scanf("%d", &value);
                enqueue(value);
                break;

            case 2:
                value = dequeue();
                if (value != -1)
                    printf("Dequeued: %d\n", value);
                break;

            case 3:
                display();
                break;

            case 4:
                return 0;

            default:
                printf("Invalid choice!\n");
        }
    }
