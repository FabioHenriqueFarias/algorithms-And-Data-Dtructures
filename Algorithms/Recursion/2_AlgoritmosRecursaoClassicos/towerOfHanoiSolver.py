import sys

# Configure as torres A, B e C. O final da lista é o topo da torre.
TOTAL_DISKS = 6

# Preencher a Torre A:
TOWERS = {'A': list(reversed(range(1, TOTAL_DISKS + 1))), 
    'B': [],
    'C': []}

def printDisk(diskNum):
    # Imprima um único disco de largura diskNum.
    emptySpace = ' ' * (TOTAL_DISKS - diskNum)
    if diskNum == 0:
        # Basta desenhar o poste.
        sys.stdout.write(emptySpace + '||' + emptySpace)
    else:
        # Desenhe o disco.
        diskSpace = '@' * diskNum
        diskNumLabel = str(diskNum).rjust(2, '_')
        sys.stdout.write(emptySpace + diskSpace + diskNumLabel + diskSpace + emptySpace)

def printTowers():
    # Imprima todas as três torres.
    for level in range(TOTAL_DISKS, -1, -1):
        for tower in (TOWERS['A'], TOWERS['B'], TOWERS['C']):
            if level >= len(tower):
                printDisk(0)
            else:
                printDisk(tower[level])
        sys.stdout.write('\n')
    # Imprima as etiquetas da torre A, B e C.
    emptySpace = ' ' * (TOTAL_DISKS)
    print('%s A%s%s B%s%s C\n' % (emptySpace, emptySpace, emptySpace, emptySpace, emptySpace))

def moveOneDisk(startTower, endTower):
    # Mova o disco superior de startTower para endTower.
    disk = TOWERS[startTower].pop()
    TOWERS[endTower].append(disk)

def solve(numberOfDisks, startTower, endTower, tempTower):
    # Mova os discos numberOfDisks superiores de startTower para endTower.
    if numberOfDisks == 1:
        # CASO BASE
        moveOneDisk(startTower, endTower) 
        printTowers()
        return
    else:
        # CASE RECURSIVO
        solve(numberOfDisks - 1, startTower, tempTower, endTower) 
        moveOneDisk(startTower, endTower) 
        printTowers()
        solve(numberOfDisks - 1, tempTower, endTower, startTower) 
        return

# Resolver:
printTowers()
solve(TOTAL_DISKS, 'A', 'B', 'C')

# Modo interativo para mover discos manualmente:
while True:
    printTowers()
    print('Enter letter of start tower and the end tower. (A, B, C) Or Q to quit.')
    move = input().upper()
    if move == 'Q':
        sys.exit()
    elif len(move) == 2 and move[0] in 'ABC' and move[1] in 'ABC' and move[0] != move[1]:
        if TOWERS[move[0]]:  # Verifica se a torre de origem não está vazia antes de mover
            moveOneDisk(move[0], move[1])
        else:
            print(f"Torre {move[0]} está vazia! Não é possível mover discos dessa torre.")
    else:   
        print("Entrada inválida. Tente novamente.")