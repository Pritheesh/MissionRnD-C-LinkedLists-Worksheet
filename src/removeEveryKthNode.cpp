/*
OVERVIEW: Given a single linked list, remove every Kth node in the linked list.
E.g.: 1->2->3->4->5 and K 2, output is 1->3->5.

INPUTS: A linked list and Value of K.

OUTPUT: Remove every Kth node in the linked list.

ERROR CASES: Return NULL for error cases.

NOTES:
*/

#include <stdio.h>

struct node {
	int num;
	struct node *next;
};

struct node * removeEveryKthNode(struct node * head, int K) 
{
	if (K <= 1 || head == NULL)
		return NULL;
	int count = 1;
	struct node * head1 = head;
	struct node * temp;
	while (head != NULL)
	{
		if (count == K - 1 && head->next != NULL)
		{
			temp = head->next;
			head->next = temp->next;
			count = 1;
		}
		else
			count = (count + 1) % K;
		
		head = head->next;
	}
	return head1;
}