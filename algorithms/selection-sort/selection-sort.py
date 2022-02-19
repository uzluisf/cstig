

def selection_sort(arr):
    """
    Implementation of the selection sort algorithm (increasing order).
    """
    for i in range(0, len(arr)):
        k = i
        for j in range(i+1, len(arr)):
            if arr[j] < arr[k]:
                k = j
        temp = arr[i]
        arr[i] = arr[k]
        arr[k] = temp

