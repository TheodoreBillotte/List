/*
** EPITECH PROJECT, 2023
** clear
** File description:
** file for clear functions for list library
*/

#include <stddef.h>
#include "list.h"

void list_clear(list_t * list)
{
    list_free_nodes(list);
    list->head = NULL;
    list->tail = NULL;
    list->size = 0;
}

void list_clear_free(list_t * list)
{
    list_free_nodes_data(list);
    list->head = NULL;
    list->tail = NULL;
    list->size = 0;
}
