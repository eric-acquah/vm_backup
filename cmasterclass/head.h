#ifndef DOUBLE_LINKED_LIST
#define DOUBLE_LINKED_LIST

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

typedef struct link
{
	int data;
	struct link *next;
	struct link *prev;
}link_t;


/* Function declearations */
link_t *creator(int num_of_list);

link_t *make_node(void);

link_t *display(link_t * head);

link_t *insert_at_beginning(link_t *head);

link_t *insert_at_end(link_t *head);

void free_list(link_t *head);

#endif
