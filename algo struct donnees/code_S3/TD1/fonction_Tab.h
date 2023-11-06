#include "structure.c"
#ifndef TD1_FONCTION_TAB_H
#define TD1_FONCTION_TAB_H
int unstack_tab(t_stacktab*);
int EmptyStackTab(t_stacktab);
int isEmptyStackTab(t_stacktab);
int FullStackTab(t_stacktab);
void displayStackList(t_stackList);
void displayStackTab(t_stack_tab);
int isEmptyQueueTabCust(t_tab_cust queue);
t_customer dequeueTabCust(t_tab_cust *);
void enqueueTabCust(t_tab_cust *, t_customer);


#endif //TD1_FONCTION_TAB_H