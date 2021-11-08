#include "List.h"

void test()
{
	LNode* plist = NULL;
	LinkListInit(&plist, 1);
	LinkListInit(&plist, 2);
	LinkListInit(&plist, 3);
	LinkListInit(&plist, 4);

	LinkListPrint(plist);
}

int main()
{
	test();

	return 0;
}