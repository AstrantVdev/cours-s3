#include "structure.h"
#include "fonction_Cell.h"
#include "fonction_BinaryTree.h"
#include "fonction_List.h"
#include "fonction_Tab.h"


//Exercice 1
void displayProduct(t_product p){
    printf("name :%s \n", p.name);
    printf("base price: %f\n", p.base_price);
    printf("VAT rate: %f\n", p.VAT_rate);
    printf("Full price: %f\n", p.base_price*(1+p.VAT_rate/100.0));
}
void displayProductPtr(t_product *p){
    printf("name :%s \n", p->name);
    printf("base price: %f\n", p->base_price);
    printf("VAT rate: %f\n", p->VAT_rate);
    printf("Full price: %f\n", p->base_price*(1+p->VAT_rate/100.0));
}
int exo1(){
    t_product prod;
    strcpy(prod.name, "Smartphone");
    prod.base_price = 453;
    prod.VAT_rate = 20;
    displayProduct(prod);
    displayProductPtr(&prod);
    return 0;
}
//Exercice 2:
int exo2(){
    int *ptr1 = NULL ;
    float x = 1.70732;
    float 	*ptr2 = &x ;
    t_product *ptr3 ;
    ptr3 = (t_product *)malloc(1 * sizeof(t_product));
    ptr3->VAT_rate = 5.50;
    return 0;
};
void exo3(){
    t_ht_list mylist;
    t_cell *newcell;
    mylist = creatHtlist();
    newcell = createCell(-4);
    mylist.head = newcell;
    mylist.tail = newcell;
    newcell = createCell(123);
    newcell->next = mylist.tail;
    mylist.head = newcell;
}
void exo5(){
    t_std_list mylist;
    t_cell *newcell;
    mylist.head = NULL;
    newcell = createCell(8);
    newcell->next = mylist.head;
    mylist.head = newcell;
    newcell = createCell(4);
    newcell->next = mylist.head;
    mylist.head = newcell;
}
int exo6(){
    t_std_list mylist;
    int cpt;
    mylist.head = NULL;
    for(cpt=3; cpt<10; cpt++){
        addHeadStdList(&mylist, cpt);
    }
    free(mylist.head);
}
void addRandomNode(t_tree *p_tree, char somechar){
    p_node p_nouv, temp;
    p_nouv = createNodeChar(somechar);
    temp = p_tree->root;
    if(p_tree->root ==NULL){
        p_tree->root = p_nouv;
    }
    // à finir
}

