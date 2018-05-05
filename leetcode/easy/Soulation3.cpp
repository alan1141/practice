/*
 * Soulation3.cpp
 *
 *  Created on: Feb 13, 2018
 *      Author: alan
 */

#include<iostream>
#include "Soulation3.h"

namespace leetcodeeasy {

Soulation3::Soulation3() {
	// TODO Auto-generated constructor stub

}

Soulation3::~Soulation3() {
	// TODO Auto-generated destructor stub
}

ListNode* Soulation3::mergeTwoLists(ListNode* l1, ListNode* l2) {
	ListNode *answer = NULL;
	ListNode *answer_head = NULL;

	if(l1 == NULL) return l2;
	if(l2 == NULL) return l1;
	if(l1 == NULL && l1 == NULL) return NULL;

	if(l1->val <= l2->val) {
		answer = new ListNode(l1->val);
		l1 = l1->next;
	} else {
		answer = new ListNode(l2->val);
		l2 = l2->next;
	}
	answer_head = answer;

	while(l1 != NULL && l2 != NULL) {
		if(l1->val <= l2->val) {
			answer->next = new ListNode(l1->val);
			answer = answer->next;
			l1 = l1->next;
			continue;
		} else {
			answer->next = new ListNode(l2->val);
			answer = answer->next;
			l2 = l2->next;
			continue;
		}
	}

	if(l1 != NULL) {
		for(; l1 != NULL ; l1 = l1->next) {
			answer->next = new ListNode(l1->val);
			answer = answer->next;
		}
	}

	if(l2 != NULL) {
		for(; l2 != NULL ; l2 = l2->next) {
			answer->next = new ListNode(l2->val);
			answer = answer->next;
		}
	}

	return answer_head;
}

} /* namespace leetcodeeasy */

//int main(int argc, char *argv[]) {
//	leetcodeeasy::Soulation3 soulation3 = leetcodeeasy::Soulation3();
//	leetcodeeasy::ListNode *answer = NULL;
//
//	leetcodeeasy::ListNode *l1 = new leetcodeeasy::ListNode(1);
//	leetcodeeasy::ListNode *l1_ptr = l1;
//	l1_ptr->next = new leetcodeeasy::ListNode(3); l1_ptr = l1_ptr->next;
//	l1_ptr->next = new leetcodeeasy::ListNode(5); l1_ptr = l1_ptr->next;
//
//	leetcodeeasy::ListNode *l2 = new leetcodeeasy::ListNode(2);
//	leetcodeeasy::ListNode *l2_ptr = l2;
//	l2_ptr->next = new leetcodeeasy::ListNode(4); l2_ptr = l2_ptr->next;
//	l2_ptr->next = new leetcodeeasy::ListNode(6); l2_ptr = l2_ptr->next;
//	l2_ptr->next = new leetcodeeasy::ListNode(8); l2_ptr = l2_ptr->next;
//	l2_ptr->next = new leetcodeeasy::ListNode(10); l2_ptr = l2_ptr->next;
////	leetcodeeasy::ListNode *l2 = NULL;
//
//	answer = soulation3.mergeTwoLists(l1, l2);
//	for(; answer != NULL ; answer = answer->next) {
//		std::cout << answer->val << std::endl;
//	}
//
//	return 0;
//}
