#include "sort.h"

listint_t *sortList(listint_t *sort, listint_t *nextNode) 
{
        listint_t *current;

        if (sort == NULL || sort->n >= nextNode->n)
        {
                nextNode->next = sort;
                return nextNode;
        }
        current = sort;
        while (current->next != NULL && current->next->n < nextNode->n) {
                current = current->next;
        }
    
        nextNode->next = current->next;
        current->next = nextNode;
        return sort;

}

void insertion_sort_list(listint_t **list) {
        listint_t *sortedList = NULL;
        listint_t *current, *nextNode;
        
        if (list == NULL || *list == NULL) {
                return;
        }
        
        current = *list;
        while (current != NULL) {
                nextNode = current->next;
                sortedList = sortList(sortedList, current);
                current = nextNode;
        }
        
        *list = sortedList;
}
