__***Présentation et rappels***__

[[TOC]]

# Liste

Now it's not a ptr, it's a a struct

```c
typedef struct s_std_list
{
    t_cell *head;
} t_std_list;
```

***modifier une liste*** ce n'est PAS modifier les valeurs de la liste, mais modifier les paramètres dans la structure de la liste

# Recursivité

- fonction recursive pour cellules, puis pour liste
- sens aller (sens de la liste)

```c
void displayCellRec(t_cell *ptr_cell)
{
	if (ptr_cell != NULL)
	{
		printf("%d – ",ptr_cell->value);
		displayCellRec(ptr_cell->next);
	}
}

void displayListRec(t_std_list aList)
{
	displayCellRec(aList.head);
	printf("\n");
}
```

Détruire liste
- sens retour

```c
void destroyCellRec(t_cell *ptr_cell)
{
	if (ptr_cell != NULL)
	{
		destroyCellRec(ptr_cell->next);
		free(ptr_cell);
	}
	return;
}
```
