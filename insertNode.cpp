#include "head.h"
#include "InsertNode.h"
/*����ģ�� --ͷ�巨��ӽڵ�	�����������, ����Ľ�����ݣ�*/
void insertNodeByHead(LinkList headNode, int date) {
	LinkList newNode = creatNode(date);
	newNode->next = headNode->next;
	headNode->next = newNode;
}