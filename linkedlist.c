#include <stdlib.h>
#include "linkedlist.h"

/* initializes the list */
list_node_t *list_init(list_node_t *root)
{
    root = (list_node_t*) malloc(sizeof(list_node_t));
    root->next = NULL;
    end = root;
}

/* frees allocated memory */
void list_free(list_node_t *root)
{
    list_node_t *next = NULL;
    while(root != NULL) {
        next = root->next;
        free(root);
        root = next;
    }
}

/* adds a new node at the end of the list */
void list_append(list_node_t *root, list_node_t *node)
{
    while(root->next != NULL) root = root->next;
    root->next = (list_node_t*) malloc(sizeof(list_node_t));
    strcpy(root->next->data, node->data);
    root->next->next = NULL;
}
