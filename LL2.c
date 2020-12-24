#include<stdio.h>
#include<stdlib.h>


typedef struct node
{
    int data;
    struct node * next;
}node;

node * createlist(int n);


int main()
{

    int n;
    scanf("%d",&n);
    node * CREATE = NULL;
    CREATE = createlist(n);

}


node * createlist(int n)
{
    node *head = NULL;
    node *temp = NULL;


    for(int i = 0;i<n;i++)
    {
        temp = (node *) malloc(sizeof(node));
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
}
