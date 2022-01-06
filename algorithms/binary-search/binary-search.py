
def binary_search(arr, needle):
    lo = 0
    hi = len(arr) - 1

    while lo <= hi:
        m = (lo + hi) // 2
        if arr[m] < needle:
            lo += 1
        elif arr[m] > needle:
            hi -= 1
        else:
            return arr[m]
    return None

