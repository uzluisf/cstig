# Static and Dynamic Arrays 

A **static array** is a fixed length container that holds `n` elements indexable
from the range `[0, n-1]`. 

## Static Arrays Usage

* Storing and accessing sequential data.
* Temporary object storage.
* Used as **buffers** by IO routines to store information from input/output
  stream.
* Lookup tables and inverse lookup tables.
* To return multiple values from a function. This is specially the case with
  programming languages that only allow a return value.
* Used in **dynamic programming** to cache answers to subproblems. Classic
  examples of this are the **Knapsack Problem** and **Coin Change Problem**.

## Complexity

|Operation|Static Array|Dynamic Array|Notes|
|:-----|:-----|:-----|:-------|
|Access|`O(1)`|`O(1)`|Access time for both is constant due to the indexability property.|
|Search|`O(n)`|`O(n)`|Worst-case scenario we must traverse the entire array when searching, thus search is linear for both array types.|
|Insertion|`N/A`|`O(n)`|For dynamic arrays, this operation can cost up to linear time since you might need to shift all elemets to the right and recopy all those elements anew.|
|Appending|`N/A`|`O(1)`|When appending to a dynamic array, we need to resize the internal static array. However this is rare, thus appending becomes constant.|
|Deletion|`N/A`|`O(n)`|For dynamic arrays, similar situation as with insertion: shifting and recopying of elements.|

## 
