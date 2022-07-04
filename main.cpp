#include <iostream>
/*����ṹ��*/
typedef struct ListNode {
	int date;
	//������
	ListNode* next;
	//ָ����
}LNode,*LinkList;	//��������

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

/*����ģ�� --��ӡ����*/
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

/*����ģ�� --ͷ�巨��ӽڵ�	�����������, ����Ľ�����ݣ�*/
void insertNodeByHead(LinkList headNode, int date) {
	LinkList newNode = creatNode(date);
	newNode->next = headNode->next;
	headNode->next = newNode;
}

/*����ģ�� --ɾ��ָ��ֵ���*/
void deleteNodeByAppoin (LinkList headNode, int posDate) {
	LinkList posNode = headNode->next;
	LinkList posNodeFront = headNode;
	if (posNode == NULL) {
		std::cout << "������Ϊ���޷�ɾ��" << std::endl;
	}
	else {
		while (posNode->date != posDate) {
			posNodeFront = posNode;
			posNode = posNodeFront->next;
			if (posNode == NULL) {
				std::cout << "û���ҵ������Ϣ" << std::endl;
				return;
			}
		}
		posNodeFront->next = posNode->next;
		delete posNode;
	}
}

int main()
{
	/*����һ����Ϊ��L��������*/
	LinkList L = creatList();
	for (int i = 10; i > 0; i--) {
		insertNodeByHead(L, i);
	}
	/*��ӡ����*/
	printList(L);
	/*ɾ��ָ��ֵ�ڵ�*/
	deleteNodeByAppoin(L, 9);
	/*�ٴδ�ӡ(�鿴���)*/
	printList(L);
}