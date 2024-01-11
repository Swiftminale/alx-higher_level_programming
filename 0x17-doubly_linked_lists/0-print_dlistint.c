#include <stdio.h>
#include "lists.h"
/**
  * print_listint - prints all elements of a list_t list
  * @h: singly linked list to print
  * Return: number of nodes in the list
  */
size_t print_dlistint(const dlistint_t *h) {
size_t node_count = 0;
while (h != NULL) {
printf("%d\n", h->n);
h = h->next;
node_count++;
}
return node_count;
}
