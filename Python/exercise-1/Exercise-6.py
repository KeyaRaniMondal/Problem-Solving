def isLandscape(width, height):
    if width > height:
        return "Landscape"
    else:
        return "Portrait"


w = int(input("width of the image : "))
h = int(input("height of the image : "))
print(isLandscape(w, h))
