/* C program to pairwise swap elements in a given linked list */
#include <stdio.h>
#include <stdlib.h>

/* A linked list node */
struct node {
	int data;
	struct node* next;
}node;

/*Function to swap two integers at addresses a and b */
void swap(int* a, int* b);

/* Function to pairwise swap elements of a linked list */
void pairWiseSwap(node* head)
{
	node* temp = head;

	/* Traverse further only if there are at-least two nodes left */
	while (temp != NULL && temp->next != NULL) {
		/* Swap data of node with its next node's data */
		swap(&temp->data, &temp->next->data);

		/* Move temp by 2 for the next pair */
		temp = temp->next->next;
	}
}

/* UTILITY FUNCTIONS */
/* Function to swap two integers */
void swap(int* a, int* b)
{
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}

node * createlist(int n)
{
    node *head = NULL;
    node *temp = NULL;
    node *p = NULL;
    int i;

    for(i=0;i<n;i++)
    {
        temp = (node *)malloc(sizeof(node));
        scanf("%d",&(temp->data));
        temp->next = NULL;

        if(head == NULL)
        {
            head = temp;
        }
        else
        {
            p = head;
            while(p->next != NULL)
            {
                p = p->next;
            }
            p->next = temp;
        }
    }
    return head;
}

/* Function to print nodes in a given linked list */
void printList(node* node)
{
	while (node != NULL) {
		printf("%d ", node->data);
		node = node->next;
	}
}

/* Driver program to test above function */
int main()
{
	node* start = NULL;

	/* The constructed linked list is:
	1->2->3->4->5 */
	int n = 5;
	node *LIST = createlist(n);

	printf("Linked list before calling pairWiseSwap()\n");
	printList(LIST);

	pairWiseSwap(LIST);

	printf("\nLinked list after calling pairWiseSwap()\n");
	printList(LIST);

	return 0;
}
