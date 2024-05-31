def sum(numbers):
    if len(numbers) == 0:
      # Caso base: lista vazia tem soma 0
      return 0
    else:
        # Caso recursivo: soma o primeiro elemento com a soma dos elementos restantes
        head = numbers[0]
        tail = numbers[1:]
        return head + sum(tail)


# Testando a função
print(sum([5, 2, 4, 8]))  # Saída: 19
print(sum([]))            # Saída: 0
print(sum([1, 2, 3, 4, 5]))  # Saída: 15