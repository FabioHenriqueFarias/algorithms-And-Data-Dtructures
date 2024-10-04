from hashTable import HashTable

# Cria uma tabela hash
ht = HashTable()

# Inserindo valores que causam colisões
print("Inserindo valores...")
ht.insert("maria")    # Supondo que "maria" vai para o índice 5
ht.insert("ariam")     # Supondo que "ariam" colide e vai para o índice 6 (ou próxima posição livre)
ht.insert("Fernanda")  # Adicionando outro valor
ht.insert("João")      # Adicionando outro valor

# Mostrando o estado da tabela após inserções
print("\nEstado da tabela após inserções:")
print(ht)

# Buscando um valor
print("\nBuscando 'maria':", ht.search("maria"))

# Removendo "maria"
print("\nRemovendo 'maria'...")
ht.delete("maria")

# Mostrando o estado da tabela após remoção
print("\nEstado da tabela após remoção:")
print(ht)

# Tentando buscar "maria" novamente
print("\nBuscando 'maria' após remoção:", ht.search("maria"))