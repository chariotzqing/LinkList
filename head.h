#pragma once
#include <iostream>
/*����ṹ��*/
typedef struct ListNode {
	int date;
	//������
	ListNode* next;
	//ָ����
}LNode, * LinkList;	//��������

LinkList creatList();

LinkList creatNode(int date);

void printList(LinkList headNode);