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


// 链表的逆置
void LinkListReverse(LNode** phead);
// 遍历链表元素
void LinkListPrint(LNode* phead);