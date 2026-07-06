#include <stdlib.h>
typedef struct ListNode
{
	void          *data;
	struct ListNode *next;
} ListNode;

int	list_node_count(ListNode *head){
	if(head == NULL){
		return(0);
	}
	int count = 0;
	while(head != NULL){
		head = head -> next;
		count ++;
	}
	return (count);
}
