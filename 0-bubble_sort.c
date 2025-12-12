#include "sort.h"

/**
 * bubble_sort - Trie un tableau d'entiers par ordre croissant (Bubble Sort)
 * @array: Le tableau à trier
 * @size: La taille du tableau
 */
void bubble_sort(int *array, size_t size)
{
    size_t i, j;
    int temp;
    int swapped;

    if (array == NULL || size < 2)
        return;

    for (i = 0; i < size - 1; i++)
    {
        swapped = 0;
        for (j = 0; j < size - i - 1; j++)
        {
            if (array[j] > array[j + 1])
            {
                /* Échange des éléments */
                temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
                
                /* Affichage du tableau après l'échange */
                print_array(array, size);
                swapped = 1;
            }
        }
        /* Si aucun échange n'a eu lieu, le tableau est déjà trié */
        if (swapped == 0)
            break;
    }
}