
# Binary Search

[Binary search](https://en.wikipedia.org/wiki/Binary_search_algorithm) is a
search algorithm that finds the position of a needle within a sorted haystack.
If it's the needle is in the haystack, then return the index of its first
occurrence; otherwise, return a sentinel value (e.g., `false`, `-1`, etc.) to
indicate its absence.

## Pseudocode

```
# A is a sorted 0-indexed array.
# needle is item to search for in A.
binary-search(A, needle):
    lo = 0
    hi = length(A) - 1
    while lo <= hi:
        m = floor of (lo + hi)/2
        if A[m] < needle:
            lo = m + 1
        else if A[m] > needle:
            hi = m - 1
        else if A[m] = needle:
            found the index
    return sentinel to indicate needle wasn't found
```

## Example

## Complexity

|Case|Time Complexity| Reason |
|:-----|:--------|:-------|
|Best case| O(1) | |
|Average case| O(log n) |
|Worst case| O(log n) |

