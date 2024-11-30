#include "linked_list1.h"
#include <stdio.h>

int main()
{
    Node *head = NULL;
    int choice = 0, position = 0;
    do
    {
        puts("1:InsertFRont 2:InsertRear 3:InsertAtPosition 4:DeleteFront 5:DeleteRear 6:DeleteFromPosition 7:Search 8:Display 9:Exit.   Your choice? ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            head = addAtFront(head);
            break;
        case 2:
            head = addAtRear(head);
            break;
        case 3:
            printf("Enter positon to insert node: ");
            scanf("%d", &position);
            head = insertAtPostion(head, position);
            break;
        case 4:
            head = deleteFromFront(head);
            break;
        case 5:
            head = deleteFromRear(head);
            break;
        case 6:
            printf("Enter positon to delete node: ");
            scanf("%d", &position);
            head = deleteFromPosition(head, position);
            break;
        case 7:
            head = insertAtFront(head);
            break;
        case 8:
            head = insertAtFront(head);
            break;
        case 9:
            head = insertAtFront(head);
            break;
        default:
            puts("Invalid choice");
        }

    } while (choice != 0);
    deleteAllNodes(head);
    puts("End of program");
}