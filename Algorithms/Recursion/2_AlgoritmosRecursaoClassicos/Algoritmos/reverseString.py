def rev(theString):
    if len(theString) == 0 or len(theString) == 1:
        # CASO BASE
        return theString
    else:
        # CASO RECURSIVO
        head = theString[0]
        tail = theString[1:]
        return rev(tail) + head

print(rev('abcdef'))
print(rev('Hello, world!'))
print(rev(''))
print(rev('X'))