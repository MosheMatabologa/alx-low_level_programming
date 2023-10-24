#include "lists.h"
#include <stdio.h>

/**
 * find_listint_loop_custom - finds a loop in a linked list
 * @head: linked list to search
 * Return: address of node where loop starts/returns, NULL if no loop
 */
listint_t *find_listint_loop_custom(listint_t *head)
{
    if (head == NULL)
        return NULL;

    listint_t *slow = head;
    listint_t *fast = head;

    while (fast != NULL && fast->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;

        if (slow == fast)
            return slow;
    }

    return NULL;
}

/**
 * print_listint_safe_custom - prints a linked list, even if it has a loop
 * @head: head of list to print
 * Return: number of nodes printed
 */
size_t print_listint_safe_custom(const listint_t *head)
{
    size_t len = 0;
    int loopDetected = 0;
    listint_t *loopNode = find_listint_loop_custom((listint_t *)head);

    while (head != NULL)
    {
        printf("[%p] %d\n", (void *)head, head->n);

        if (head == loopNode && !loopDetected)
        {
            loopDetected = 1;
            printf("-> [%p] %d\n", (void *)head->next, head->next->n);
        }

        head = head->next;
        len++;
    }

    return len;
}
