#ifndef __LINKEDLIST_H__
#define __LINKEDLIST_H__
#define DATA_LENGTH 512

typedef char data_t[DATA_LENGTH];
typedef struct list_node_t list_node_t;

struct list_node_t {
    data_t data;
    list_node_t *next;
};

#endif
