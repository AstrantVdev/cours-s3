#include "fonction_Tab.h"

int unstack_tab(t_stacktab* s){
    int result;
    int position = s->nbElts-1;
    result = s->values[position] = val;
    s->nbElts = s->nbElts-1;
    return result;
}
int EmptyStackTab(t_stacktab stack){
    if (stack.nbElts==0){
        return 1;
    } else{
        return 0;
    }
}// équivaut a return((stack.nbElts == 0));
int isEmptyStackTab(t_stacktab s){
    int res, nbElems;
    nbElems = s.nbElts;
    if (nbElems == 0){
        res = 1;
    }    else{
        res = 0;
    }
    return res;
}// équivaut à return (s.nbElts == 0);
int FullStackTab(t_stacktab stack){
    return (stack.nbElts==NBMAX);
}
void displayStackList(t_stackList s){
    if (s.head == NULL){
        printf("stack [empty] \n");
    }else{
        printf("stack [");
        while(s.head!=NULL){
            printf(" : %d ", s.head->value);
            s.head = s.head->next;
        }
        printf("]\n");
    }
    return;
}
void displayStackTab(t_stack_tab s){
    int i;
    if(s.values == NULL || s.max_size == 0 || s.nbElts == 0 ){
        printf("stack [empty] \n");
    }else{
        printf("stack [");
        for(i=s.nbElts-1;i>=0;i--){
            printf(" : %d ", s.values[i]);
        }
        printf("]\n");
    }
}
int isEmptyQueueTabCust(t_tab_cust queue){
    return (queue.first==queue.last);
}
t_customer dequeueTabCust(t_tab_cust * p_queue){
    t_customer cust = p_queue->values[p_queue->first];
    p_queue->first = p_queue->first+1;
    return cust;
}
void enqueueTabCust(t_tab_cust *p_queue, t_customer cust){
    int position = p_queue->last;
    p_queue->values[position] = cust;
    p_queue->last = position+1;
}
