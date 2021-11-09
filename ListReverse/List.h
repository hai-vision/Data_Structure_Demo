#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

typedef int ElemType;
// 声明一个结构体
typedef struct LNode
{
	ElemType data;			// 数据域
	struct LNode* next;		// 指针域
}LNode;

// 初始化链表
void LinkListInit(LNode** phead, ElemType x);
// 销毁链表
void LinkListDestroy(LNode** phead);
// 动态申请结点
LNode* CreateByListNode(ElemType x);
// 链表的逆置
void LinkListReverse(LNode** phead);
// 遍历链表元素
void LinkListPrint(LNode* phead);
// 头插
void LinkListPushFront(LNode** destination, LNode* source );