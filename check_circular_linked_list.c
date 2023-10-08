#include <stdio.h> 
#include <stdlib.h> 
struct Node { 
	int data; 
	struct Node* next; 
}; 
int isCircular(struct Node* head) 
{ 

	// If given linked list is null then it is circular 
	if (head == NULL) { 
		return 1; 
	} 
	struct Node* ptr; 
	ptr = head->next; 

	// Traversing linked list till last node 
	while (ptr != NULL && ptr != head) { 
		ptr = ptr->next; 
	} 

	// will return 1 if Linked list is circular else 0 
	return (ptr == head); 
} 

struct Node* newnode(int data) 
{ 
	struct Node* first; 
	first = (struct Node*)malloc(sizeof(struct Node)); 
	first->data = data; 
	first->next = NULL; 
	return first; 
} 

int main() 
{ 

	struct Node* head = newnode(10); 
	head->next = newnode(12); 
	head->next->next = newnode(14); 
	head->next->next->next = newnode(16); 
	head->next->next->next->next = head; 

	// if it will be 1 then it means linked list is 
	// circular 
	if (isCircular(head)) { 
		printf("Linked List is Circular\n"); 
	} 
	else { 
		printf("Linked List is Not Circular\n"); 
	} 

	return 0; 
}
