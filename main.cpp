#include "head.h"
#include "InsertNode.h"
#include "DeleteNode.h"

int main()
{
	/*创建一个名为“L”的链表*/
	LinkList L = creatList();
	for (int i = 10; i > 0; i--) {
		/*使用头插法插入结点*/
		insertNodeByHead(L, i);
	}
	/*打印链表*/
	printList(L);
	/*删除指定值节点*/
	deleteNodeByAppoin(L, 9);
	/*再次打印(查看结果)*/
	printList(L);
}