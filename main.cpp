#include <iostream>
/*定义结构体*/
typedef struct ListNode {
	int date;
	//数据域；
	ListNode* next;
	//指针域；
}LNode,*LinkList;	//重命名；

/*创建链表*/
LinkList creatList() {
	LinkList headNode = new LNode;	//headNode 成为了结构体变量；
	headNode->next = NULL;	//变量使用前必须被初始化；
	return headNode;
}

/*创建节点*/
LinkList creatNode(int date) {
	LinkList newNode = new LNode;
	newNode->date = date;
	newNode->next = NULL;
	return newNode;
}

/*打印链表*/
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

/*头插法添加节点	--插入的链表 --插入的结点数据*/
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