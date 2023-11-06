__***PILES ET FILES (heap and stack)***___

[[TOC]]

# Heap
- LIFO (Last In => First Out)
- std_list / tab
- dépiler => retourne la valeur dépilée (pop of the heap)


```c
#define NBMAX 50

typedef struct s_stacktab
{
	int values[NBMAX];
	int nbElts;             // nbElts correspond à tai
} t_stacktab;

```

# Stack

- In Out
- ht_list / tab

```c
typedef struct s_customer
{
	char		name[30];
	float		amount;
	int		outtime;
} t_customer;
```

- retirer au début et ajouter à la fin = o(1) / retirer à al fin = o(n)

# Complexité

- afficher le head d'une liste = o(1) fixe
- parcourir tableau = o(n) linéaire
- parcourir un teableau de tableaux = o($n^2$) polynomiale
- o(e$^n$) = exponentielle
- o($ln(n)$) = logarithmique


