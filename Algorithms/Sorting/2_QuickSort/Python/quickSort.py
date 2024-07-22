def quickSort(arr, low, high):
    if low < high:
        pi = partition(arr, low, high)
        quickSort(arr, low, pi-1)
        quickSort(arr, pi+1, high)


def partition(arr, start, end):
    pivot = arr[end]

    i = start - 1

    for j in range(start, end):
        if arr[j] < pivot:
            i += 1
            arr[i], arr[j] = arr[j], arr[i]

    arr[i+1], arr[end] = arr[end], arr[i+1]

    return i+1


arr = [10, 7, 8, 9, 1, 5]
quickSort(arr, 0, len(arr)-1)
print(f"Sorted array is: {arr}")

