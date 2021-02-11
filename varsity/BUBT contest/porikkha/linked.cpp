#include<bits/stdc++.h>
using namespace std;
struct Node
{
	int data;
	struct Node* next;
};
void chapakhana(struct Node* head)
{
	struct Node* ptr=head;
	while (ptr)
	{
		printf("%d -> ",ptr->data);
		ptr = ptr->next;
	}

	printf("NULL\n");
}

void dhakka(struct Node** head, int data)
{
	struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
	newNode->data = data;
	newNode->next = *head;
	*head = newNode;
}
void duster(struct Node*head){
    Node*freed;
    if(head==NULL)
		return;
    if(head->next!=NULL){
        if(head->data==head->next->data){
        freed=head->next;
        head->next=head->next->next;
        free(freed);
        duster(head);
        }
        else
        duster(head->next);
    }
}
void MoveNode(struct Node** destRef, struct Node** sourceRef)
{
	if (*sourceRef == NULL)
		return;

	struct Node* newNode = *sourceRef;

	*sourceRef = (*sourceRef)->next;

	newNode->next = *destRef;
	*destRef = newNode;}
struct Node* SortedMerge(struct Node* a, struct Node* b)
{
	struct Node* result = NULL;
	struct Node** lastPtrRef = &result;

	while (1)
	{
		if (a == NULL)
		{
			*lastPtrRef = b;
			break;
		}
		else if (b == NULL)
		{
			*lastPtrRef = a;
			break;
		}

		if (a->data <= b->data)
			MoveNode(lastPtrRef, &a);
		else
			MoveNode(lastPtrRef, &b);
		lastPtrRef = &((*lastPtrRef)->next);
	}

	return result;
}
int main(void)
{
	int keys[] = { 1, 2, 3, 4, 5, 7, 7 };
	int n = sizeof(keys)/sizeof(keys[0]);

	struct Node *a = NULL, *b = NULL;
	for (int i=n-1;i>=0;i=i-2)
		dhakka(&a, keys[i]);

	for (int i = n - 2; i >= 0; i = i - 2)
		dhakka(&b, keys[i]);
	printf("1st: ");
	chapakhana(a);
	printf("2nd: ");
	chapakhana(b);

	struct Node* head=SortedMerge(a, b);
	printf("setubondhoner por: ");
	chapakhana(head);
	duster(head);
	chapakhana(head);
	return 0;
}

