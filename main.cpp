#include <iostream>
/*定义结构体*/
typedef struct ListNode {
	int date;
	//数据域；
	ListNode* next;
	//指针域；
}LNode,*LinkList;	//重命名；

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

/*功能模块 --打印链表*/
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

/*功能模块 --头插法添加节点	（插入的链表, 插入的结点数据）*/
void insertNodeByHead(LinkList headNode, int date) {
	LinkList newNode = creatNode(date);
	newNode->next = headNode->next;
	headNode->next = newNode;
}

/*功能模块 --删除指定值结点*/
void deleteNodeByAppoin (LinkList headNode, int posDate) {
	LinkList posNode = headNode->next;
	LinkList posNodeFront = headNode;
	if (posNode == NULL) {
		std::cout << "此链表为空无法删除" << std::endl;
	}
	else {
		while (posNode->date != posDate) {
			posNodeFront = posNode;
			posNode = posNodeFront->next;
			if (posNode == NULL) {
				std::cout << "没有找到相关信息" << std::endl;
				return;
			}
		}
		posNodeFront->next = posNode->next;
		delete posNode;
	}
}

int main()
{
	/*创建一个名为“L”的链表*/
	LinkList L = creatList();
	for (int i = 10; i > 0; i--) {
		insertNodeByHead(L, i);
	}
	/*打印链表*/
	printList(L);
	/*删除指定值节点*/
	deleteNodeByAppoin(L, 9);
	/*再次打印(查看结果)*/
	printList(L);
}