#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

typedef int ElemType;
// ����һ���ṹ��
typedef struct LNode
{
	ElemType data;			// ������
	struct LNode* next;		// ָ����
}LNode;


// ���������
void LinkListReverse(LNode** phead);
// ��������Ԫ��
void LinkListPrint(LNode* phead);