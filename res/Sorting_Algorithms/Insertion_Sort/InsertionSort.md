
# Selection Sort
  
Insertion sort is a simple sorting algorithm that works the way we sort **_playing cards_** in our hands.

![image](https://github.com/KeiyuKensei/Sorting-Algorithem/blob/main/res/Sorting_Algorithms/Selection_Sort/res/Selection-Sort-Animation-2.gif)

In this algorithm, each iteration compares a _pair of numbers_ up to the end of the list. If you have to make an exchange, _before_ making it, check that the element I want to exchange can also be exchanged with the _previous number_ and so on until you get in the worst case index 0.

# Code
```
int key, j;
 for (int i = 1; i < dim; i++) {
 	key = vec[i];
 	j = i - 1;
 	while (j >= 0 && vec[j] > key) {
 		vec[j + 1] = vec[j];
 		j = j - 1;
 	}
 vec[j + 1] = key;
}
```

![image](C:\Computer_Science\Documentation\Algorithms\Sorting_Algorithms\Insertion_Sort\res\Insertion-Sort-Animation-2.gif)
### Time complexity = O(n^2)
