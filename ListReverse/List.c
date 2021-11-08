#include "List.h"

// ���������
void LinkListReverse(LNode** phead)
{
	/*
		������ʵ�����������
		ԭ������ͷ�巨��ʵ�����������
		���裺
		�� ����һ�� tmp ��ʱָ�룬����ָ�����ú������
		�� ���� phead ��ָ�������
		�� �� phead ָ�� tmp
	*/
	LNode* cur = (*phead);
	LNode* tmp = NULL;
	if ((*phead) == NULL)
	{
		printf("����Ϊ��\n");
		return;
	}
	


}

// ��ʼ������
void LinkListInit(LNode** phead, ElemType x)
{
	LNode* cur = (*phead);
	// ����һ��βָ��
	LNode* tail = cur;
	// ���ú�����̬������
	LNode* newNode = CreateByListNode(x);

	// ����һ��ѭ������
	int num = 1;
	if ((*phead) == NULL) 
	{
		*phead = newNode;
	}
	else 
	{
		while (cur->next!=NULL)
		{
			cur = cur->next;
		}
		cur->next = newNode;
	}

}
// ��̬������
LNode* CreateByListNode(ElemType x)
{
	LNode* newNode = (LNode*)malloc(sizeof(LNode));
	if (newNode == NULL) {
		printf("��㿪��ʧ�ܣ�\n");
		return;
	}
	newNode->data = x;
	newNode->next = NULL;

	return newNode;
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

// ͷ��
void LinkListPushFront(LNode** phead, ElemType x)
{
	LNode* cur = (*phead);
	if ((*phead) == NULL)
	{

		return;
	}


}