/*
** EPITECH PROJECT, 2023
** free
** File description:
** file for free functions for list library
*/

#include <stdlib.h>

#include "list.h"

void list_free(list_t * list)
{
    node_t * node = list->head;
    node_t * tmp = NULL;

    while (node) {
        tmp = node;
        node = node->next;
        free(tmp);
    }
    free(list);
}

void list_free_data(list_t * list)
{
    node_t * node = list->head;
    node_t * tmp = NULL;

    while (node) {
        tmp = node;
        node = node->next;
        free(tmp->data);
        free(tmp);
    }
    free(list);
}

void list_free_nodes(list_t * list)
{
    node_t * node = list->head;
    node_t * tmp = NULL;

    while (node) {
        tmp = node;
        node = node->next;
        free(tmp);
    }
}

void list_free_nodes_data(list_t * list)
{
    node_t * node = list->head;
    node_t * tmp = NULL;

    while (node) {
        tmp = node;
        node = node->next;
        free(tmp->data);
        free(tmp);
    }
}
