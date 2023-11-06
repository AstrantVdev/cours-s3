#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#ifndef TD1_STRUCTURE_H
#define TD1_STRUCTURE_H
#define NBMAX 50
#define MIN(i, j) (((i) < (j)) ? (i) : (j))
#define MAX(i, j) (((i) > (j)) ? (i) : (j))
typedef struct s_product t_product;
typedef struct s_cell t_cell, *p_cell;
typedef struct s_dcell *t_dcell;
typedef struct s_dbl_list *t_dbl_list;
typedef struct s_std_list t_std_list;
typedef struct s_ht_list t_ht_list;
typedef struct s_circ_list t_circ_list;
typedef struct s_stackList t_stackList;
typedef struct s_stacktab t_stacktab;
typedef struct s_stack_tab t_stack_tab;
typedef struct s_node t_node,*p_node;
typedef struct s_tree t_tree;
typedef struct s_customer *t_customer;
typedef struct s_cell_cust t_cell_cust, *p_cell_cust;
typedef struct s_ht_list_cust t_queue_cust;
typedef struct s_tab_cust t_tab_cust;


#endif //TD1_STRUCTURE_H
