#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
    int data;
    struct node * next;
}node;

node * createlist(int n);
void display(node * head);
node * swapPairs(node * head);
void swap(int *a,int *b);




int main()
{
    int n = 0;
    node * HEAD = NULL;
    node * SWAP = NULL;
    node * nt = NULL;
    scanf("%d",&n);
    HEAD = createlist(n);
    display(HEAD);
    SWAP = swapPairs(HEAD);



    printf("\nHead Node : %d ",SWAP->data);


    return 0;
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


node * swapPairs(node * head)
{
    node * TEMP = head;


    while(TEMP != NULL && TEMP->next != NULL)
    {
        swap(&TEMP->data, &TEMP->next->data);
        TEMP = TEMP->next->next;
    }

}

void swap(int *a,int *b)
{
    int t;
    t = *a;
    *a = *b;
    *b = t;
}

void display(node * head)
{
    node * p = head;

    while(p != NULL)
    {
        printf("%d ",p->data);
        p = p->next;
    }
}










