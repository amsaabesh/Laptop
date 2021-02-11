#include <bits/stdc++.h>
using namespace std;
class Node
{
    public:
    int data;
    Node* nxt;
};
void removeDuplicates(Node* head)
{
    Node* current = head;
    Node* next_next;
    if (current == NULL)
    return;
    while (current->nxt != NULL)
    {
    if (current->data == current->nxt->data)
    {
        next_next = current->nxt->nxt;
        free(current->nxt);
        current->nxt = next_next;
    }
    {
        current = current->nxt;
    }
    }
}
void push(Node** head_ref, int new_data)
{
    Node* new_node = new Node();
    new_node->data = new_data;
    new_node->nxt = (*head_ref);
    (*head_ref) = new_node;
}
void printList(Node *node)
{
    while (node!=NULL)
    {
        cout<<","<<node->data;
        node = node->nxt;
    }
}
int main()
{
    Node* head = NULL;

    int has,an;
    scanf("%d",&has);
do{
scanf("%d",&an);
push(&head, an);}
while(--has);
    printList(head);
    cout<<endl;
    removeDuplicates(head);
    printList(head);
    cout<<endl;
    cout<<"changed linked list and remove"<<endl;
    return 0;
}
