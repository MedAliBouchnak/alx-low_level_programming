#include "lists.h"

/**
 * add_node_end - adds a node to the end of the list
 * @head: address of pointer to head node
 * @str: str field of node
 *
 * Return: size of list
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *N_node = malloc(sizeof(list_t));
	list_t *node = *head;

	if (!head || !N_node)
		return (NULL);
	if (str)
	{
		N_node->str = strdup(str);
		if (!N_node->str)
		{
			free(N_node);
			return (NULL);
		}
		N_node->len = _strlen(N_node->str);
	}
	if (node)
	{
		while (node->next)
			node = node->next;
		node->next = N_node;
	}
	else
		*head = N_node;
	return (N_node);
}
