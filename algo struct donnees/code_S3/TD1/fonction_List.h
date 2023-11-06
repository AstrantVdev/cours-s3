#include "structure.c"
#ifndef TD1_FONCTION_LIST_H
#define TD1_FONCTION_LIST_H
t_ht_list creatHtlist();
void addTailHtList(t_ht_list *p_list, int val);
void addHeadStdList();
void displayCircList (t_circ_list clist);
void removeCellCircList(t_circ_list *p_list, int val);
void addHeadDoubleList(t_dbl_list *ptr_dlist, int val);
int unstack_list(t_stackList*s);
int EmptyStackList(t_stackList stack);
void stack_List(t_stackList* p_list, int val);
t_customer dequeueListCust(t_queue_cust *);
void enqueueListCust(t_queue_cust*, t_customer);

#endif //TD1_FONCTION_LIST_H
