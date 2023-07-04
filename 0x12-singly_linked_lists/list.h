#ifndef LISTS_H
#define LISTS_H


/**
 * struct s_list - The singly linked list
 * @str: string - The string malloc
 * @len: string length
 * @next: ptr to the next node
 *
 * Description: The singly linked list node struct
 * for Holberton projects.
 */
typedef struct s_list
{
char *str;
unsigned int len;
struct s_list *next;
} list_t;

list_t *add_node(list_t **head, const char *str);
list_t *add_node_end(list_t **head, const char *str);
size_t list_len(const list_t *h);
size_t print_list(const list_t *h);
void free_list(list_t *head);

#endif
