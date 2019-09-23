#include "List.h"

void ListInit(List* plist) {
	assert(plist);
	plist->_head = NULL;
}

void ListDestory(List* plist) {
	assert(plist);

}

void ListPushBack(List* plist, LTDataType x) {
	assert(plist); 
	
}

void ListPopBack(List* plist) {
	assert(plist);
	
}
void ListPushFront(List* plist, LTDataType x);
void ListPopFront(List* plist);

ListNode* ListFind(List* plist, LTDataType x) {
	assert(plist && plist->_head->_next != plist->_head);
	ListNode* cur = plist->_head->_next;
	while (cur != plist->_head) {
		if (cur->_data == x) {
			return cur;
		}
		cur = cur->_next;
	}
	return NULL;
}

// 在pos的前面进行插入 
void ListInsert(ListNode* pos, LTDataType x) {
	assert(pos);
	ListNode* newNode = (ListNode*)malloc(sizeof(ListNode));
	newNode->_next = newNode->_prev = NULL;
	newNode->_data = x;

}
// 删除pos位置的节点
void ListErase(ListNode* pos) {

}

void ListRemove(List* plist, LTDataType x);

void ListPrint(List* plist) {
	assert(plist);
	ListNode* cur = plist->_head->_next;
	while (cur != plist->_head->_prev) {
		printf("%d", cur->_data);
		cur = cur->_next;
	}
	printf("\n");
}