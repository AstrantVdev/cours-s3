#include "fonction_Cell.h"

p_cell createCell(int val){
    p_cell p_res;
    p_res =(p_cell) malloc(sizeof (t_cell));
    p_res->value =val;
    p_res->next = NULL;
    return p_res;
};
