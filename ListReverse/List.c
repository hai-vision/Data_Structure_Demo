#include "List.h"

// ���������
void LinkListReverse(LNode** phead)
{
	/*
		����ͷ�巨��ʵ�����������
	*/
}
// ��������Ԫ��
void LinkListPrint(LNode* phead)
{
	LNode* cur = phead;
	
	while (cur != NULL) {
		printf("%d->", cur->data);
		cur = cur->next;
	}
	printf("NULL\n");
}
