#include "lists.h"

/**
 * add_nodeint - adds a node to the top
 * @head: pointer to first node
 * @n: value for new node
 *
 * Return: pointer to new node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *N_node = malloc(sizeof(listint_t));

	if (!head || !N_node)
		return (NULL);

	N_node->next = NULL;
	N_node->n = n;
	if (*head)
		new_node->next = *head;
	*head = N_node;
	return (N_node);
}
