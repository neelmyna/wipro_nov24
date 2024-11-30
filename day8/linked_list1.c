#include "linked_list1.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

Node *createNode()
{
    Node *newNode = (Node *)malloc(sizeof(Node)); // allocate memory in Heap for a new structure (Node)
    newNode->link = NULL;                         // make the link pointer inside the Node (structure) as NULL
    printf("Add data of new node: ");             // Read data of the structure (Node)
    scanf("%s", newNode->data);                   // &newNode->data[0]
    return newNode;                               // return address of the new Node
}

Node *addAtFront(Node *head)
{
    Node *newNode = createNode();
    if (head == NULL)   // if list is empty
        return newNode; // make the new node as 1st node of the list
    newNode->link = head;
    head = newNode;
    return head;
}

Node *addAtRear(Node *first)
{
    Node *newNode = createNode();
    if (first == NULL)         // check if list is empty
        return newNode;        // make the new node as 1st node
    Node *temp = first;        // copy address of 1st node
    while (temp->link != NULL) // until last node is not found
        temp = temp->link;     // traverse to next node
    temp->link = newNode;      // attach the new node as last node
}

Node *deleteFromFront(Node *head)
{
    if (head == NULL)
    {
        puts("List is empty");
        return NULL;
    }
    Node *temp = head;                                     // copy address of 1st node
    head = head->link;                                     // make the present 2nd node as 1st node
    printf("Node with data %s is deleted \n", temp->data); // display data of the node to be deleted
    free(temp);                                            // delete the node
    return head;                                           // return head of the modified list
}

Node *deleteFromRear(Node *head)
{
    if (head == NULL)
    {
        puts("List is empty");
        return NULL;
    }
    Node *temp1 = head, *temp2 = NULL;
    while (temp1->link != NULL) // until last node is not reached
    {
        temp2 = temp1;
        temp1 = temp1->link; // traverse to next node
    }
    if (temp2 == NULL)
    {                                                           // if there was only one node in the list
        printf("Node with data %s is deleted \n", temp1->data); //
        free(temp1);                                            // delete the node of the list
        return NULL;                                            // because after deleting the only node in the list, now the list is empty
    }
    printf("Node with data %s is deleted \n", temp2->link->data);
    free(temp1);        // free(temp2->link); Last node is deleted
    temp2->link = NULL; // make the last but node as last node of the linked list
    return head;
}

Node *addAtPosition(Node *head, int position)
{
    Node *newNode = createNode();
    if (head == NULL)
    {
        if (position == 1)
        {
            return newNode;
        }
        puts("Invalid position");
        return NULL;
    }
    if (position == 1)
    {
        newNode->link = head; // make the new node point to 1st node in the list
        head = newNode;
        return head;
    }
    Node *temp1 = head, *temp2 = NULL;
    int count = 1;
    while (temp1->link != NULL && count < position)
    {
        temp2 = temp1;
        temp1 = temp1->link;
        count++;
    }
    if (temp1->link == NULL) // we have reached the last node
    {
        if (count == position - 1) // check if we have to insert new node as last node
            temp1->link = newNode;
        else
            puts("Invalid position");
        return head;
    }
    newNode->link = temp1;
    temp2->link = newNode;
    return head;
}

Node *deleteFromPosition(Node *head, int position)
{
}

void displayList(const Node *head)
{
    if (head == NULL)
    {
        puts("List is empty");
        return;
    }
    puts("The list Node data are");
    while (head != NULL)
    { // go till link part of the last node
        printf("%-15s", head->data);
        head = head->link;
    }
}

void searchNode(const Node *head, char str[])
{
    if (head == NULL)
    {
        puts("List is empty");
        return;
    }
    while (head != NULL)
    {
        if (stricmp(head->data, str) == 0)
        {
            printf("Node Found. Data = %-15s \n", head->data);
            return;
        }
        head = head->link;
    }
    printf("Node with data %s not found \n", str);
}

void deleteAllNodes(Node *head)
{
    if (head == NULL)
        return;
    Node *temp = head;
    while (temp != NULL)
    {
        if (head != NULL)
            head = head->link;
        free(temp);
        temp = head;
    }
}