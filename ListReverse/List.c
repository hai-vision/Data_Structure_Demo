#include "List.h"

// 链表的逆置
void LinkListReverse(LNode** phead)
{
	/*
		暴力法实现链表的逆置
		原理：利用头插法，实现链表的逆置
		步骤：
		① 定义一个 tmp 临时指针，用于指向逆置后的链表
		② 销毁 phead 所指向的链表
		③ 将 phead 指向 tmp
	*/
	LNode* cur = (*phead);
	LNode* tmp = NULL;
	if ((*phead) == NULL)
	{
		printf("链表为空\n");
		return;
	}
	


}

// 初始化链表
void LinkListInit(LNode** phead, ElemType x)
{
	LNode* cur = (*phead);
	// 定义一个尾指针
	LNode* tail = cur;
	// 调用函数动态申请结点
	LNode* newNode = CreateByListNode(x);

	// 定义一个循环变量
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
// 动态申请结点
LNode* CreateByListNode(ElemType x)
{
	LNode* newNode = (LNode*)malloc(sizeof(LNode));
	if (newNode == NULL) {
		printf("结点开辟失败！\n");
		return;
	}
	newNode->data = x;
	newNode->next = NULL;

	return newNode;
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

// 头插
void LinkListPushFront(LNode** phead, ElemType x)
{
	LNode* cur = (*phead);
	if ((*phead) == NULL)
	{

		return;
	}


}