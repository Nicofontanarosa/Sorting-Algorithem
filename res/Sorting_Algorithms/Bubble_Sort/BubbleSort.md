# Bubble Sort
  
Bubble sort is the one usually taught in introductory [Computer Science](https://en.wikipedia.org/wiki/Computer_science) classes since it clearly demonstrates how sort works while being _simple_ and _easy_ to understand.

![image](https://github.com/KeiyuKensei/Sorting-Algorithem/blob/main/res/Sorting_Algorithms/Bubble_Sort/res/Bubble-Sort-Animation-1.gif)

We begin by comparing the _first two elements_ of the list. If the _first_ element is _larger_ than the _second_ element, we **swap them**. If they are _already in order_ we **leave them as is**. We then move to the next pair of elements, compare their values and swap as necessary. This process continues to the last pair of items in the list.

# Code
```
for (int i = 0; i < dim; i++) {
	for (int j = 0; j < dim - i - 1; j++) {
		if (vec[j + 1] < vec[j]) {
			change(vec, j + 1, j);
		}
 	}
}
```

### Time complexity = O(n^2)

# Optimized Bubble Sort
  
The above function always runs O(n^2) time even if the array is sorted. It can be optimized by stopping the algorithm if inner loop didn’t cause any swap.

![image](https://github.com/KeiyuKensei/Sorting-Algorithem/blob/main/res/Sorting_Algorithms/Bubble_Sort/res/Bubble-Sort-Animation-2.gif)

# Code
```
bool swapped;

 for (int i = 0; i < dim; i++) {
 	swapped = false;
 		for (int j = 0; j < dim - i - 1; j++) {
 			if (vec[j + 1] < vec[j]) {
 				change(vec, j + 1, j);
 				swapped = true;
 			}
 		}
 		if (swapped == false) {
 			break;
 		}
 }
```
