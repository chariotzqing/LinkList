#pragma once
#include <iostream>
/*定义结构体*/
typedef struct ListNode {
	int date;
	//数据域；
	ListNode* next;
	//指针域；
}LNode, * LinkList;	//重命名；

LinkList creatList();

LinkList creatNode(int date);

void printList(LinkList headNode);