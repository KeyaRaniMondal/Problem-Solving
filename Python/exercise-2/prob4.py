word="Hello World"
vowel=0
consonant=0
for i in word:
    if i in 'aeiou':
        vowel+=1
    elif i!=' ':
        consonant+=1

print(vowel,consonant)