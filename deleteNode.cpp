#include "head.h"
#include "DeleteNode.h"
/*功能模块 --删除指定值结点*/
void deleteNodeByAppoin(LinkList headNode, int posDate) {
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