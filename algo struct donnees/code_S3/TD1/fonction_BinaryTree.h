#include "structure.c"
#ifndef TD1_FONCTION_BINARYTREE_H
#define TD1_FONCTION_BINARYTREE_H
t_node * createNodeInt(int val);
t_node *createNodeChar(char val);
t_tree createTreeFromNode(p_node *pn);
int binaryTree();
int height (t_node * n);
void addRandomNode(t_tree*t, int val);
t_tree CreateEmptyTree();
int countNode(p_node);
p_node seekValue(p_node, char);
t_tree treeSeekValue (t_tree*, char);
void displayNode(p_node);
#endif //TD1_FONCTION_BINARYTREE_H
