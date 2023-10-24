#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a start node in a linked list,
 * at a given position
 * @head: pointer to the first node in the list
 * @idx: index where the start node is added
 * @n: data to insert in the start node
 *
 * Return: pointer to the start node, or NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
unsigned int i;
listint_t *start;
listint_t *temp = *head;

start = malloc(sizeof(listint_t));
if (!start || !head)
return (NULL);

start->n = n;
start->next = NULL;

if (idx == 0)
{
start->next = *head;
*head = start;
return (start);
}

for (i = 0; temp && i < idx; i++)
{
if (i == idx - 1)
{
start->next = temp->next;
temp->next = start;
return (start);
}
else
temp = temp->next;
}

return(NULL);
}
