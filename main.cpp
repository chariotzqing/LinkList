#include <iostream>
/*����ṹ��*/
typedef struct ListNode {
	int date;
	//������
	ListNode* next;
	//ָ����
}LNode,*LinkList;	//��������

/*��������*/
LinkList creatList() {
	LinkList headNode = new LNode;	//headNode ��Ϊ�˽ṹ�������
	headNode->next = NULL;	//����ʹ��ǰ���뱻��ʼ����
	return headNode;
}

/*�����ڵ�*/
LinkList creatNode(int date) {
	LinkList newNode = new LNode;
	newNode->date = date;
	newNode->next = NULL;
	return newNode;
}

/*��ӡ����*/
void printList(LinkList headNode) {
	LinkList pMove = headNode->next;
	while (pMove) {
		std::cout << pMove->date;
		if (pMove->next != NULL) {
			std::cout << " ";
		}
		pMove = pMove->next;
	}
	std::cout << std::endl;
}

/*ͷ�巨��ӽڵ�	--��������� --����Ľ������*/
void insertNodeByHead(LinkList headNode, int date) {
	LinkList newNode = creatNode(date);
	newNode->next = headNode->next;
	headNode->next = newNode;
}
int main()
{
	LinkList L = creatList();
	for (int i = 10; i > 0; i--) {
		insertNodeByHead(L, i);
	}
	printList(L);
}