#include "head.h"
/*����ģ�� --��������*/
LinkList creatList() {
	LinkList headNode = new LNode;	//headNode ��Ϊ�˽ṹ�������
	headNode->next = NULL;	//����ʹ��ǰ���뱻��ʼ����
	return headNode;
}

/*����ģ�� --�����ڵ�*/
LinkList creatNode(int date) {
	LinkList newNode = new LNode;
	newNode->date = date;
	newNode->next = NULL;
	return newNode;
}