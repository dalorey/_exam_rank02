#include <stdio.h>
#include <stdlib.h>
#include "ft_list_size.h"

// Function to create a new list node
t_list *create_node(void *data)
{
    t_list *new_node = (t_list *)malloc(sizeof(t_list));
    if (!new_node)
        return NULL;
    new_node->data = data;
    new_node->next = NULL;
    return new_node;
}

int main()
{
    // Test case 1: Empty list
    t_list *empty_list = NULL;
    printf("Test 1 (Empty List): %d\n", ft_list_size(empty_list)); // Expected output: 0

    // Test case 2: List with one element
    t_list *one_element = create_node("First");
    printf("Test 2 (One Element): %d\n", ft_list_size(one_element)); // Expected output: 1

    // Test case 3: List with multiple elements
    t_list *head = create_node("First");
    head->next = create_node("Second");
    head->next->next = create_node("Third");
    head->next->next->next = create_node("Fourth");

    printf("Test 3 (Four Elements): %d\n", ft_list_size(head)); // Expected output: 4

    // Free memory
    free(one_element);
    while (head)
    {
        t_list *temp = head;
        head = head->next;
        free(temp);
    }

    return 0;
}
