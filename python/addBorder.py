def addBorder(picture):
   for i in range(len(picture)):
      s = "*" + picture[i] + "*"
      picture[i] = s
   strLength = len(picture[0])
   border = "*"*strLength
   picture = [border] + picture
   picture += [border]
   return picture

"""
def addBorder(picture):
    l=len(picture[0])+2
    return ["*"*l]+[x.center(l,"*") for x in picture]+["*"*l]
"""