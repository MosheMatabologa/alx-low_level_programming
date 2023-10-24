#include "lists.h"

/**
 * listint_len – I am going to return elements in the list
 * @h: linked list of type listint_t to traverse
 *
 * Return: mynumberber of nodes
 */
size_t listint_len(const listint_t *h)
{
size_t mynumber = 0;

while (h)
{
mynumber++;
h = h->next;
}

return (mynumber);
}
