/*
OVERVIEW:  Given a single linked list of 0s 1s and 2s ,Sort the SLL such that zeroes 
will be followed by ones and then twos.


INPUTS:  SLL head pointer

OUTPUT: Sorted SLL ,Head should Finally point to an sll of sorted 0,1,2


ERROR CASES:

NOTES: Only 0,1,2, will be in sll nodes
*/

#include <stdio.h>
#include <malloc.h>

struct node {
	int data;
	struct node *next;
};

void sll_012_sort(struct node *head)
{
	struct node * current = head;
	int count0 = 0, count1 = 0, count2 = 0;
	while (current != NULL)
	{
		if (current->data == 0)
			count0++;
		else if (current->data == 1)
			count1++;
		else
			count2++;
		current = current->next;
	}
	for (int i = 0; i < count0; i++)
	{
		head->data = 0;
		head = head->next;
	}
	for (int i = 0; i < count1; i++)
	{
		head->data = 1;
		head = head->next;
	}
	for (int i = 0; i < count2; i++)
	{
		head->data = 2;
		head = head->next;
	}
}

