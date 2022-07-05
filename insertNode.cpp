#include "head.h"
#include "InsertNode.h"
/*功能模块 --头插法添加节点	（插入的链表, 插入的结点数据）*/
void insertNodeByHead(LinkList headNode, int date) {
	LinkList newNode = creatNode(date);
	newNode->next = headNode->next;
	headNode->next = newNode;
}