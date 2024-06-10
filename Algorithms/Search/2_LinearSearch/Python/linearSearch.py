def linearSearch(array, element):
    for i in range(len(array)):
        if array[i] == element:
            return i


    return -1


array = [0, 1, 2, 3, 4, 5, 6, 7]
element = 5

print("Array:", array)

index = linearSearch(array, element)
if index != -1:
    print(f"Elemento encontrado no índice {index}")
else:
    print("Elemento não encontrado")



