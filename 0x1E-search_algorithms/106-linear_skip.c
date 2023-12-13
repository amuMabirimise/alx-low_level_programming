#include "search_algos.h"
#include <math.h>

/**
 * linear_skip - Searches for a value in a sorted skip list of integers.
 * @list: Pointer to the head of the skip list to search in.
 * @value: The value to search for.
 *
 * Return: A pointer to the first node where `value` is located,
 *         or NULL if the value is not present in the list.
 */
skiplist_t *linear_skip(skiplist_t *list, int value)
{
    skiplist_t *express;

    if (!list)
        return NULL;

    express = list->express;

    printf("Value checked at index [%lu] = [%d]\n", express->index, express->n);
    while (express && express->n < value)
    {
        list = express;
        express = express->express;
        if (express)
            printf("Value checked at index [%lu] = [%d]\n", express->index, express->n);
    }

    printf("Value found between indexes [%lu] and [%lu]\n", list->index, express->index);

    while (list && list->n <= value)
    {
        printf("Value checked at index [%lu] = [%d]\n", list->index, list->n);
        if (list->n == value)
            return list;
        list = list->next;
    }

    return NULL;
}

