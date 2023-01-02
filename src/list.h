/*
** EPITECH PROJECT, 2023
** list
** File description:
** header file for list library
*/

#ifndef LIST
    #define LIST

typedef struct node_s {
    void * data;
    struct node_s * next;
    struct node_s * prev;
} node_t;

typedef struct list_s {
    node_t * head;
    node_t * tail;
    int size;
} list_t;

list_t * create_list(void);
node_t * create_node(void * data);

void list_append(list_t * list, void * data);
void list_append_list(list_t * list, list_t * to_append);

void list_free(list_t * list);
void list_free_data(list_t * list);
void list_free_nodes(list_t * list);
void list_free_nodes_data(list_t * list);

void list_clear(list_t * list);
void list_clear_free(list_t * list);

list_t * list_copy(list_t * list);

int list_size(list_t * list);
int list_count(list_t * list, void * data);
int list_count_func(list_t * list, int (*equals)(void *));

void * list_get(list_t * list, int index);
node_t * list_get_node(list_t * list, int index);

#endif
