from hashTable import HashTable

# Cria uma tabela hash
ht = HashTable()

# Inserindo valores que causam colisões
print("Inserindo valores...")
ht.insert("maria", "valor_maria")    # Insere "maria" com um valor
ht.insert("ariam", "valor_ariam")     # Insere "ariam" com um valor
ht.insert("Fernanda", "valor_fernanda")  # Adiciona outro valor
ht.insert("João", "valor_joao")      # Adiciona outro valor

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