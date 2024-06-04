def isPalindrome(theString):
    if len(theString) == 0 or len(theString) == 1:
        # CASO BASE
        return True
    else:
        #  CASO RECURSIVO
       head = theString[0]
       middle = theString[1:-1]
       last = theString[-1]
       return head == last and isPalindrome(middle)

text = 'reviver'
print(text + ' é um palíndromos: ' + str(isPalindrome(text)))
text = 'omissíssimo'
print(text + ' é um palíndromos: ' + str(isPalindrome(text)))
text = 'romaeamor'
print(text + ' é um palíndromos: ' + str(isPalindrome(text)))
text = 'romaeamor'
print(text + ' é um palíndromos: ' + str(isPalindrome(text)))
text = 'saias'
print(text + ' é um palíndromos: ' + str(isPalindrome(text)))
text = 'olfato'
print(text + ' é um palíndromos: ' + str(isPalindrome(text)))