def binarySearch(array, data): 
    meddle = len(array) // 2 # índice do primeiro elemento
    low = 0 # índice do primeiro elemento
    high = len(array) - 1 # índice do último elemento
    while low <= high:
        if array[meddle] == data: # Se o elemento do meio for igual aos dados, retorne o índice do elemento do meio
            return meddle
        if array[meddle] < data: # Se o elemento do meio for menor que os dados, o novo mínimo é o elemento do meio + 1
            low = meddle + 1
        else: # Se o elemento do meio for maior que os dados, o novo máximo será o elemento do meio - 1
            high = meddle - 1
        meddle = (low + high) // 2
    

array = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10]
print(binarySearch(array, 5)) # 4