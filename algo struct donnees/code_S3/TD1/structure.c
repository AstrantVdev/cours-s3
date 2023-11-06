#include "structure.h"

typedef struct s_product{
    char name[30];
    float base_price;
    float VAT_rate;
} t_product;
typedef struct s_cell{
    int value;
    struct s_cell *next;
}t_cell, *p_cell;
typedef struct s_dcell{
    struct s_dcell *prec, *next;
    int value;
} *t_dcell;
typedef struct s_dbl_list{
    struct s_dcell head;
}*t_dbl_list;
typedef struct s_std_list{
    p_cell head;
} t_std_list;
typedef struct s_ht_list{
    p_cell head;
    p_cell tail;
}t_ht_list;
typedef struct s_circ_list{
    p_cell head, tail;
} t_circ_list;
typedef struct s_stackList{
    p_cell head;
    int nbElts;
} t_stackList;
typedef struct s_stacktab{
int values[NBMAX];
int nbElts;             // nbElts correspond à tai
}t_stacktab;
typedef struct s_stack_tab{
    int* values;
    int max_size;
    int nbElts;
}t_stack_tab;
typedef struct s_node{
    struct s_node * left, *right;
    int value; //peut être de n'importe quel type
}t_node, *p_node;
typedef struct s_tree{
    p_node *root;
}t_tree;
typedef struct s_customer{
    char name;
    float outtime;
    float amount;
}*t_customer;
typedef struct s_cell_cust{
    t_customer value;
    struct s_cell_cust* next;
}t_cell_cust, *p_cell_cust;
typedef struct s_ht_list_cust{
    t_cell_cust * head, *tail;
}t_queue_cust;
typedef struct s_tab_cust{
    t_customer* values[NBMAX];
    int first;
    int last;
}t_tab_cust;