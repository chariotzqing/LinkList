#include "head.h"
#include "DeleteNode.h"
/*����ģ�� --ɾ��ָ��ֵ���*/
void deleteNodeByAppoin(LinkList headNode, int posDate) {
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