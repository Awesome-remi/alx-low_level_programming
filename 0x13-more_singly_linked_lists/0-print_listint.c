#include "lists.h"

int main(void)
{
	listint_t *head = NULL;
	size_t node_count;

	/* create a linked list */
	add_nodeint(&head, 1);
	add_nodeint(&head, 2);
	add_nodeint(&head, 3);
	add_nodeint(&head, 4);
	add_nodeint(&head, 5);

	/* print the linked list and get the node count */
	node_count = print_listint(head);
	printf("Number of nodes: %lu\n", node_count);
	/* free the linked list */

	free_listint(head);

	return (0);
}
