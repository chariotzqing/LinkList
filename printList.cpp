#include "head.h"
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