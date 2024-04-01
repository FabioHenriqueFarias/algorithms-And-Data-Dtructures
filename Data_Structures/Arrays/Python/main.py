from _array import Array

# Criando uma instância da classe Array
meu_array = Array(5)

# Exemplo de chamada de método da classe Array
meu_array.criacaoArray()

for i in range(0, 6):
    meu_array.inserirElemento(i, i)

# Exemplo de saída: 
meu_array.exibirArray()