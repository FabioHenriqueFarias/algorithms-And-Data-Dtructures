def mergeSort(array):
    if len(array) <= 1:
        return array
    
    mid = len(array) // 2
    left = mergeSort(array[:mid])
    right = mergeSort(array[mid:])
    
    return merge(left, right)


def merge(listLeft, listRight):
    result = []
    i = 0
    j = 0
    while i < len(listLeft) and j < len(listRight):
        if listLeft[i] < listRight[j]:
            result.append(listLeft[i])
            i += 1
        else:
            result.append(listRight[j])
            j += 1

    while i < len(listLeft):
        result.append(listLeft[i])
        i += 1

    while j < len(listRight):
        result.append(listRight[j])
        j += 1

    return result


print(mergeSort([3, 5, 1, 6]))