#include "lists.h"

/**
 * add_node - adds a node to the start of the list
 * @head: address of pointer to head node
 * @str: str field of node
 *
 * Return: size of list
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *N_head = malloc(sizeof(list_t));

	if (!head || !N_head)
		return (NULL);
	if (str)
	{
		N_head->str = strdup(str);
		if (!N_head->str)
		{
			free(N_head);
			return (NULL);
		}
		N_head->len = _strlen(N_head->str);
	}

	N_head->next = *head;
	*head = N_head;
	return (N_head);
}
