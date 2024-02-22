#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *link;
};
struct node *root = NULL;
int len()
{
    struct node *p = root;
    int counter = 0;
    while(p!=NULL)
    {
        counter++;
        p = p->link;
    }
    return counter;
}
struct node* trav(int pos)
{
    struct node *ad;
    ad = root;
    for (int i = 0; i <= (pos - 2);i++)
    {
        ad = ad->link;
    }
    return ad;
}

void append(int data)
{
    struct node *temp;
    struct node *p=root;

    temp = (struct node *)malloc(sizeof(struct node));
    temp->data = data;
    temp->link = NULL;
    if(root == NULL)
    {
        root = temp;
    }
    else{
    while(p->link!=NULL)
    {
        p = p->link;
    }
    p->link = temp;
}
}
void display()
{
    struct node *p;
    p = root;
    while(p!=NULL)
    {
        printf("%d ", p->data);
        p = p->link;
    }
}

void reverse()
{
    struct node *p;
    
    for (int i = len(); i > 0;i--)
    {
        p = trav(i);
        printf(" %d", p->data);
    }
}

int main()
{
    for (int i = 1; i < 5;i++)
    {
        append(2*i);
    }
    display();
    reverse();
}
