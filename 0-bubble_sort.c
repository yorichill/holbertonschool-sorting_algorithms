#include "sort.h"

/**
 * bubble_sort - Sorts an array of integers in ascending order
 * using the Bubble sort algorithm.
 *
 * @array: The array to be sorted.
 * @size: Number of elements in @array.
 */
void bubble_sort(int *array, size_t size)
{
	size_t i, j;
	int temp;

	/* Vérification de base : tableau vide ou un seul élément */
	if (array == NULL || size < 2)
		return;

	/* Boucle principale pour parcourir tout le tableau */
	for (i = 0; i < size - 1; i++)
	{
		/* Boucle de comparaison des éléments adjacents */
		for (j = 0; j < size - i - 1; j++)
		{
			/* Si l'élément actuel est plus grand que le suivant */
			if (array[j] > array[j + 1])
			{
				/* Échange des deux éléments */
				temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;

				/* Affichage OBLIGATOIRE après chaque échange */
				print_array(array, size);
			}
		}
	}
}