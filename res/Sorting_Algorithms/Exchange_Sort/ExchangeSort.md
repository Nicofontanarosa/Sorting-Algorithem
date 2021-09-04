# Exchange Sort
  
The **exchange sort** is similar to its cousin, the bubble sort, in that it compares elements of the array and swaps those that are out of order. The difference between these two sorts is the manner in which they compare the elements. **The exchange sort compares the first element with each following element of the array.**

When the first pass through the array is complete, the exchange sort then takes the second element and compares it with _each following element_ of the array swapping elements that are out of order.  This sorting process continues until the entire array is ordered.

# Code
```
for (int i = 0; i < dim; i++) {
	for (int j = i + 1; j < dim; j++) {
		if (vec[i] < vec[j]) {
			change(vec, i, j);
		}
	}
}
```

### Time complexity = O(n^2)

