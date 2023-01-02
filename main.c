/*
** EPITECH PROJECT, 2023
** main
** File description:
** test file for lib
*/

#include <stdio.h>
#include "src/list.h"

int main()
{
    list_t * list = create_list();
    list_append(list, "Hello");
    list_append(list, "World");
    list_append(list, "!");
    printf("%s %s %s\n", (char *)list->head->data,
           (char *) list->head->next->data,
           (char *) list->tail->data);
}
