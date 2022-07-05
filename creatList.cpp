#include "head.h"
/*功能模块 --创建链表*/
LinkList creatList() {
	LinkList headNode = new LNode;	//headNode 成为了结构体变量；
	headNode->next = NULL;	//变量使用前必须被初始化；
	return headNode;
}

/*功能模块 --创建节点*/
LinkList creatNode(int date) {
	LinkList newNode = new LNode;
	newNode->date = date;
	newNode->next = NULL;
	return newNode;
}