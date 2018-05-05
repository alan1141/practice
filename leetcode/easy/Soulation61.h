/*
 * Soulation61.h
 *
 *  Created on: Feb 14, 2018
 *      Author: alan
 */

#ifndef EASY_SOULATION61_H_
#define EASY_SOULATION61_H_

namespace leetcodeeasy {

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class Soulation6_1 {
public:
	Soulation6_1();
	virtual ~Soulation6_1();
	bool isSymmetric(TreeNode* root);
private:
	bool isMirror(TreeNode *node1, TreeNode *node2);
};

} /* namespace leetcodeeasy */

#endif /* EASY_SOULATION61_H_ */
