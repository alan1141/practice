/*
 * Soulation61.cpp
 *
 *  Created on: Feb 14, 2018
 *      Author: alan
 */

#include<cstddef>
#include<iostream>
#include "Soulation61.h"

namespace leetcodeeasy {

Soulation6_1::Soulation6_1() {
	// TODO Auto-generated constructor stub

}

Soulation6_1::~Soulation6_1() {
	// TODO Auto-generated destructor stub
}

bool Soulation6_1::isSymmetric(TreeNode* root) {
	if(root == NULL) return true;
	return isMirror(root, root);
}

bool Soulation6_1::isMirror(TreeNode* node1, TreeNode* node2) {
	if(node1 == NULL && node2 == NULL) return true;
	if(node1 == NULL || node2 == NULL) return false;
	return (node1->val == node2->val) && isMirror(node1->left, node2->right) && isMirror(node1->right, node2->left);
}

} /* namespace leetcodeeasy */

//int main(int argc, char *argv[]) {
//	leetcodeeasy::Soulation6_1 *soulation6 = new leetcodeeasy::Soulation6_1();
//	leetcodeeasy::TreeNode *root = new leetcodeeasy::TreeNode(1);
//	leetcodeeasy::TreeNode *tmp;
//
//	root->left = new leetcodeeasy::TreeNode(2); root->right = new leetcodeeasy::TreeNode(2);
//
//	tmp = root->left;
//	tmp->left = new leetcodeeasy::TreeNode(3);
//	tmp->right = new leetcodeeasy::TreeNode(4);
//
//	tmp = root->right;
//	tmp->left = new leetcodeeasy::TreeNode(4);
//	tmp->right = new leetcodeeasy::TreeNode(3);
//	std::cout << soulation6->isSymmetric(root) << std::endl;
//	return 0;
//
//}
