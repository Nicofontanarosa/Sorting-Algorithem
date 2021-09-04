# Merge Sort
  
Merge sort is a very good example of Divide algorithms. We _recursively_ split the list in _half_ until we have lists with _size one_. We then _merge_ each half that was _split_, _sorting_ them in the process.

![image](C:\Computer_Science\Documentation\Algorithms\Sorting_Algorithms\Merge_Sort\res\Merge-Sort-Animation-1.gif)

**Sorting** is done by comparing the _smallest_ elements of _each half_. The _first_ element of each list are the first to be compared. If the first half begins with a _smaller_ value, then we add that to the sorted list.

# Code
```

```

![image](C:\Computer_Science\Documentation\Algorithms\Sorting_Algorithms\Merge_Sort\res\Merge-Sort-Animation-2.gif)
### Time complexity = O(n*log(2))