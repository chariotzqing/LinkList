#include "head.h"
#include "InsertNode.h"
#include "DeleteNode.h"

int main()
{
	/*����һ����Ϊ��L��������*/
	LinkList L = creatList();
	for (int i = 10; i > 0; i--) {
		/*ʹ��ͷ�巨������*/
		insertNodeByHead(L, i);
	}
	/*��ӡ����*/
	printList(L);
	/*ɾ��ָ��ֵ�ڵ�*/
	deleteNodeByAppoin(L, 9);
	/*�ٴδ�ӡ(�鿴���)*/
	printList(L);
}