#include "fonction_List.h"
#include "fonction_Cell.h"
t_ht_list creatHtlist(){
t_ht_list newlist;
newlist.head = NULL;
newlist.tail = NULL;
    return newlist;
}
void addTailHtList(t_ht_list *p_list, int val){
    p_cell nouv;
    nouv = createCell(val);
    if(p_list->head == NULL && p_list->tail == NULL){ //list vide
        p_list->head = nouv;
        p_list->tail = nouv;
    } else{
        p_list->tail->next = nouv; //garantie le chainage entre la dernière cellule et la nouvelle
        p_list->tail = nouv; // MAJ de tail
    }
}
void addHeadStdList(){

}// à compléter
void displayCircList (t_circ_list clist)
{
    p_cell temp = clist.head ;
    if (temp != NULL)
    {
        while (temp->next != clist.head) // ou (temp != clist.tail)
        {
            printf("%d",temp->value) ;
            temp = temp->next;
        }
        printf("%d",clist.tail->value) ;
    }
}
void removeCellCircList(t_circ_list *p_list, int val) {
    p_cell temp, prev;
    if (p_list->head != NULL) {// liste non vide
        if (p_list->head->value == p_list->tail->value && p_list->head == val){ // si 1 seule cellule
            p_list->head = p_list->tail = NULL;
        } else { // parcours de la liste
            temp = prev = p_list->head;
            while ((temp->next != p_list->head) && (temp->value != val)) {
                prev = temp;
                temp = temp->next;
            }
            if (temp->value == val) { // on a trouve la cellule (sauf si c’est la dernière, comme pour l’affichage
                if (temp == p_list->head) {
                    p_list->head = p_list->head->next;
                    p_list->tail->next = p_list->head;
                } else {
                    prev->next = temp->next;
                }
            }
            if (p_list->tail->value == val) {
                prev->next = temp->next;
                p_list->tail = prev;
            }
        }
    }
}
void addHeadDoubleList(t_dbl_list *ptr_dlist, int val){
    p_cell newDcell;
    newDcell = createDcell(val);
    if (ptr_dlist->head == NULL){
        ptr_dlist->head = newDcell;
    } else{
        newDcell->next = ptr_dlist->head;
        ptr_dlist->head->prec = newDcell;
        ptr_dlist->head =newDcell;
    }
}
int unstack_list(t_stackList*s){
    int result;
    p_cell temp;
    temp = s->head;
    result = temp->value;
    s->head=s->head->next;
    free(temp);
    return result;
}
int EmptyStackList(t_stackList stack){
    if(stack.nbElts==0){
        return 1;
    } else{
        return 0;
    }
}// équivaut a return((stack.nbElts == 0));
void stack_List(t_stackList* p_list, int val){
    addHeadStdList(p_list, val);
    return;
}
t_customer dequeueListCust(t_queue_cust * p_queue){
    t_customer cust;
    p_cell_cust temp;
    cust = p_queue->head->value;
    temp = p_queue->head;
    p_queue->head = p_queue->head->next;
    //file initiale contenant une seul valeur
    if(p_queue->head == NULL){
        p_queue->tail = NULL;
    }
    free(temp);
    return cust;
}
void enqueueListCust(t_queue_cust* p_queue, t_customer cust){
    p_cell_cust new;
    //on suppose que la fonction createCellCust est fournir
    new = createCellCust(cust);
    //file vide
    if (p_queue->tail == NULL){
        p_queue->head = new;
        p_queue->tail = new;
    }else{
        p_queue->tail->next = new;
        p_queue->tail = new;
    }
    return;
}