def checkAnagram (l, s):
    l=sorted(l.lower())
    s=sorted(s.lower())
    if l==s:
        return"Anagram"
    else:
        return"not Anagram"

print(checkAnagram("listen", "silent"))