#include <stdio.h>
#include <stdlib.h>

/**
 * struct listint_s - singly linked list
 * @n: integer
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 * for Holberton project
 */
typedef struct listint_s
{
int n;
struct listint_s *next;
} listint_t;

/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list
 * @head: pointer to the beginning of the list
 * @index: index of the node to be returned, starting from 0
 * Return: pointer to the nth node, NULL if node does not exist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
unsigned int i;
listint_t *node;

node = head;
for (i = 0; node != NULL && i < index; i++)
node = node->next;

return (node == NULL ? NULL : node);
}

/**
 * main - check the code for Holberton School students
 *
 * Return: Always 0.
 */
int main(void)
{
listint_t *head = NULL;
listint_t *node = NULL;
unsigned int n;

for (n = 0; n < 10; n++)
add_nodeint(&head, n);

print_listint(head);
node = get_nodeint_at_index(head, 3);

if (node)
printf("node at index 3: %d\n", node->n);

node = get_nodeint_at_index(head, 11);
if (node == NULL)
printf("node at index 11: NULL\n");

free_listint(head);
return (0);
}
