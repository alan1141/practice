/*
 * Soulation3.h
 *
 *  Created on: Feb 13, 2018
 *      Author: alan
 */

#ifndef EASY_SOULATION3_H_
#define EASY_SOULATION3_H_

#include<cstddef>

namespace leetcodeeasy {

struct ListNode {
	int val;
	ListNode *next;
	ListNode(int x) : val(x), next(NULL) {}
};

class Soulation3 {
public:
	Soulation3();
	virtual ~Soulation3();
	ListNode* mergeTwoLists(ListNode* l1, ListNode* l2);
};

} /* namespace leetcodeeasy */

#endif /* EASY_SOULATION3_H_ */
