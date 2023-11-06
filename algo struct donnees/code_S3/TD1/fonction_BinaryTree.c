#include "fonction_BinaryTree.h"

t_node * createNodeInt(int val){
    t_node* n = (t_node*) malloc(sizeof(t_node));
    n->value=val;
    n->left= NULL;
    n->right = NULL;
    return n;
}
t_node * createNodeChar(char val){
    p_node p_new;
    p_new = (p_node) malloc(sizeof (t_node));
    p_new->value = val;
    p_new->left = p_new->right = NULL;
    return p_new;
}
t_tree createTreeFromNode(p_node *pn){
    t_tree t;
    t.root = pn;
    return t;
}
int binaryTree(){
    t_node n;
    n.value = 1;
    n.left = NULL;
    n.right = NULL;
    t_tree t;
    t.root = NULL;
    t.root = &n;
    return 0;
    t.root->right = createNodeInt(2);
    t.root->left = createNodeInt(3);
}
int height (t_node * n){
    int Height = 0;
    if (n == NULL) {
        Height = -1;
    } else {
        Height = 1 + MAX(height(n->left), height(n->right));
    }/*
    t_tree t;
    height(t.root);*/
    return Height;
}
void addRandomNode(t_tree*t, int val){
    t_node*n = createNodeInt(val);
    if (t->root==NULL){
        t->root=n;
    }else  {
        t_node * cur = t->root;
        while (cur!=NULL){
            if(rand()%2){

            }else{

            }
        }
    }
}
t_tree CreateEmptyTree(){
    t_tree mytree;
    mytree.root = NULL;
    return mytree;
}
int countNode(p_node pn){
    int count;
    if (pn == NULL){
        return 0;
    } else{
        count = 1 + countNode(pn->left)+ countNode(pn->right);
    }
    return count;
}
p_node seekValue(p_node pn, char val){
    p_node pleft, pright;
    if(pn == NULL){
        return NULL;
    }
        if(pn->value == val) {
            return pn;
        }
        pleft = seekValue(pn->left, val);
        if(pleft != NULL){
            return pleft;
            }
        pright = seekValue(pn->right, val);
        if(pright != NULL){
            return pright;
        }
    return NULL;
}
t_tree treeSeekValue (t_tree *root, char val){
    p_node pn = seekValue(root, val);
    t_tree subtree = createTreeFromNode(pn);
    return subtree;
}
void displayNode(p_node pn){
    if(pn != NULL){
        printf("%c", pn->value); //affichage préfixé
        displayNode(pn->left);
        printf("%c", pn->value); // affichage infixé
        displayNode(pn->right);
        printf("%c", pn->value); // affichage postfixé
    }
}