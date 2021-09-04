# Selection Sort
  
Selection sort is also quite simple but frequently outperforms **Bubble sort**. This algorithm segments the list into two parts: sorted and unsorted.

![image](C:\Computer_Science\Documentation\Algorithms\Sorting_Algorithms\Selection_Sort\res\Selection-Sort-Animation-2.gif)

We first find the _smallest_ element in the _unsorted sublist_ and place it at the _end_ of the _sorted sublist_. Thus, we continuously remove the _smallest_ element of the _unsorted sublist_ and _append_ it to the _sorted sublist_. This process continues iteratively until the list is fully sorted.

# Code
```
int min;

 for (int i = 0; i < dim; i++) {
 	min = i;
 	for (int j = i + 1; j < dim; j++) {
 		if (vec[j] < vec[min]) {
 			min = j;
 		}
 	}
 change(vec, i, min);
 }
```

### Time complexity = O(n^2)
