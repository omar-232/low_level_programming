#include "lists.h"

/**
 * add_nodeint - Adds a new node at the beginning of a list.
 * @head: ptr to a ptr to the head of the list.
 * @n: Value to be added to the new node.
 *
 * Return: return addrr of the new element (node) otherwise NULL
*/
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node = malloc(sizeof(listint_t));

	if (!head || !new_node)
		return (NULL);

	new_node->next = NULL;
	new_node->n = n;
	if (*head)
		new_node->next = *head;
	*head = new_node;
	return (new_node);
}
