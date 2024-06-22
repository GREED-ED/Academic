#include<stdio.h>
#include<stdlib.h>
struct node // Define the structure for a node
{
    int data;
    struct node* next;
};
void ibeg(struct node** head, int insert_data) // Function to insert at the beginning of the linked list
{
  struct node* newnode = (struct node*)malloc(sizeof(struct node)); // Create a new node
  newnode->data = insert_data;
  newnode->next = (*head);
  (*head) = newnode;
}
void iend(struct node** head, int insert_data) // Function to insert at the end of the linked list
{
  struct node* newnode = (struct node*)malloc(sizeof(struct node)); // Create a new node
  newnode->data = insert_data;	
  newnode->next = NULL;
    if (*head == NULL)
    {
        *head = newnode;
        return;
    }
    struct node* temp = *head; // Traverse to the end of the list and add the new node
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = newnode;
}
void dbeg(struct node** head) // Function to delete from the beginning of the linked list
{
    if (*head == NULL)
    {
        printf("Linked list is empty.\n");
        return;
    }
    struct node* temp = *head; // Traverse to the end of the list and delete
    *head = (*head)->next;
    free(temp);
    printf("First item is deleted.\n");
}
void dend(struct node** head) // Function to delete from the end of the linked list
{
    if (*head == NULL)
    {
        printf("Linked list is empty.\n");
        return;
    }
    struct node* temp = *head;
    struct node* prev = NULL;
    while (temp->next != NULL)
    {
        prev = temp;
        temp = temp->next;
    }
    if (prev == NULL)
        *head = NULL;
    else
        prev->next = NULL;
    free(temp);
    printf("Last item deleted.\n");
}
void display(struct node* p)
{
    if (p == NULL)
    {
        printf("List is empty.\n");
        return;
    }
    printf("Linked List: ");
    while (p != NULL)
    {
        printf("%d ", p->data);
        p = p->next;
    }
    printf("\n");
}
int main()
{
    int num, d;
    struct node* head = NULL;
    printf("\t\tLinked list operations\n\n");
    printf("1.Insert at the beginning\t2.Insert at the end\n3.Delete from the beginning\t4.Delete from the end\t5.Display\t6.Exit\n\n");
    while (1)
    {
        printf("Select the operation: ");
        scanf("%d", &num);
        switch (num)
        {
        case 1:
            printf("Insert data at the beginning: ");
            scanf("%d", &d);
            ibeg(&head, d);
            break;
        case 2:
            printf("Insert data at the end: ");
            scanf("%d", &d);
            iend(&head, d);
            break;
        case 3:
            dbeg(&head);
            break;
        case 4:
            dend(&head);
            break;
        case 5:
            display(head);
            break;
        case 6:
            exit(0);
        default:
            printf("Invalid Selection!\n");
        }
        printf("\n");
    }
    return 0;
}

