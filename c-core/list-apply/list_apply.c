#include "list.h"
#include <stdlib.h>

void	list_apply(ListNode *list, void (*f)(void *))
{
	if(list == NULL)
		return;
	
	while(list != NULL){
		f(list->data);
		list = list -> next;
	}
}
