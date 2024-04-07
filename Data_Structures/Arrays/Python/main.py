from _array import Array

# Criando uma instância da classe Array
meu_array = Array(5)

# Exemplo de chamada de método da classe Array
meu_array.criacaoArray()

for i in range(0, 6):
    meu_array.inserirElemento(i+5, i)

# Exemplo de saída: 
print("Saída 1: ")
meu_array.exibirArray()
print("\n")

# Remocendo o elemento na posição 2
meu_array.removerElemento(2)

# Exemplo de saída 2: 
print("Saída 2: ")
meu_array.exibirArray()
print("\n")