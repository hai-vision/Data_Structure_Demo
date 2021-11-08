#include "List.h"

// 链表的逆置
void LinkListReverse(LNode** phead)
{
	/*
		利用头插法，实现链表的逆置
	*/
}
// 遍历链表元素
void LinkListPrint(LNode* phead)
{
	LNode* cur = phead;
	
	while (cur != NULL) {
		printf("%d->", cur->data);
		cur = cur->next;
	}
	printf("NULL\n");
}
