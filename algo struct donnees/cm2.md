__***Listes avancées***__

[[TOC]]

# Autres listes :

## HT_list
- Pour ajout en fin de liste
- `ht` pour `head and tail`

```c
typedef struct s_ht_list
{
    t_cell *head;   	// adresse de la première cellule
    t_cell *tail;	// adresse de la dernière cellule
} t_ht_list;
```

```c
void insertOrderedHtList(t_ht_list *p_htlist, int val)
{
    p_cell newcell, temp, prev;
    newcell = createCell( val );
 
    if ( isEmptyHtList( *p_htlist ) ){
        p_htlist->head = p_htlist->tail = newcell;  

    } else{
        temp = p_htlist->head;
        prev = temp;
    
        while ( ( temp !=NULL ) && ( temp->value < newcell->value ) ){
            prev = temp;
            temp = temp->next;
        }
    
        if ( prev == temp ){
            newcell->next = p_htlist->head,
            p_htlist->head = newcell;

        } else{
            prev->next = newcell;
            newcell->next = temp;
            if ( temp==NULL ){
                p_htlist->tail = newcell;  
            }
        }
    }
}
```

## Circulaire
- Pour parcourt circulaire (phénomène cyclique)

```c
// &head = &tail
typedef struct s_circ_list
{
    t_cell *head;   	// adresse de la première cellule
    t_cell *tail;	// adresse de la dernière cellule
} t_ht_list;
```

## Chaque cellule avec prev et next
- traitement simplifié mais plus lourd à l'ajout
- `d` pour `double`

```c
typedef struct s_d_list {
    t_dcell *head;
}

typedef struct s_dcell
{
	struct s_dcell *prec;
	int value;
	struct s_dcell *next;
} t_dcell;
```
