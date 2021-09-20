#include<bits/stdc++.h>
using namespace std;

struct node {
    int data;
    node* next;
};
void LinlkedListTraversal(struct node *t)
{   
    while(t != NULL)
    {
        cout<<t->data<<" ";
        t = t->next;
    }

}
struct node* InsertionAtFirst(struct node *head, int data)
{
    node* IAF = new node();
    IAF->data = data;

    IAF->next = head;
    return IAF;

}
struct node* InsertionAtEnd(struct node *head, int data)
{
    node* IAE = new node();
    IAE->data = data;

    node* p = head;
    while(p->next!=NULL){
        p = p->next;
    }
    p->next = IAE;
    IAE->next = NULL;
    return head;
}
struct node* InsertionAtIndex(struct node* head, int data, int index)
{
    node *IAI = new node();
    node *p = head;
    int i =0;
    while (i != index-1)
    {
        p= p->next;
        i++;
    }
    IAI->data = data;
    IAI->next= p->next;
    p->next = IAI;
    return head;
    
}
struct node* InsertionAtNode(struct node* head, struct node *prevNode, int data)
{
    node* IAN = new node();
    IAN->data = data;
    IAN->next = prevNode->next;

    prevNode->next = IAN;
    return head;

}

int main()
{
    node* head  = new node();
    node* temp1 = new node();
    node* temp2 = new node();
    node* temp3 = new node();


    (*head).data = 1;
    (*head).next = temp1;
    temp1-> data = 2;     // (*temp1).data = 2; // both are same
    temp1-> next = temp2; // (*temp1).next = temp2;

    temp2-> data = 3;
    temp2-> next = temp3;

    temp3-> data = 4;
    temp3-> next = NULL;
    
    cout<<"Before Insertion"<<endl;
    LinlkedListTraversal(head);

    cout<<"\nAfter Insertion at Begining "<<endl;
    head = InsertionAtFirst(head,0);
    LinlkedListTraversal(head);

    cout<<"\nAfter Insertion at End "<<endl;
    head = InsertionAtEnd(head,5);
    LinlkedListTraversal(head);

    cout<<"\nAfter Insertion at given Index "<<endl;
    head = InsertionAtIndex(head,6,6);
    LinlkedListTraversal(head);

    cout<<"\nAfter Insertion at given Node "<<endl;
    head = InsertionAtNode(head,temp3,7);
    LinlkedListTraversal(head);

    return 0;
}