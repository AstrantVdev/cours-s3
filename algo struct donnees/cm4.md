_***ARBRES BINAIRES***__

[[TOC]]

# t_node

-  pointe vers deux autres `t_node`

```c
typedef struct s_node
{
	struct s_node *left ;
	T value ; // T est un type quelconque : int, float ou autre.
	struct s_node *right ;
} t_node;
```

# Arbre

- utilisation de la récursivité obligatoire

```c
typedef struct s_tree
{
	t_node *root ;
} t_tree ;
```

# Leafs

- Every left ou right values of a node (left&right | left | right)

# Profondeur

- distance entre le node et le root (0 à partir du root, puis 1, puis 2, ...)
- ***hauteur*** est la profondeur max du tree