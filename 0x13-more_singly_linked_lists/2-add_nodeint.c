#include "lists.h"

/**
 * add_nodeint - adds a start node at the beginning of a linked list
 * @head: pointer to the first node in the list
 * @n: data to insert in that start node
 *
 * Return: pointer to the start node, or NULL if it fails
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *start;

start = malloc(sizeof(listint_t));
if (!start)
return (NULL);

start->n = n;
start->next = *head;
*head = start;

return (start);
}
