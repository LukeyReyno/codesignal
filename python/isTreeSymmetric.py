#
# Binary trees are already defined with this interface:
# class Tree(object):
#   def __init__(self, x):
#     self.value = x
#     self.left = None
#     self.right = None
def isTreeSymmetric(t):
    if t == None:
        return True
    leftList = []
    getLeftList(t, leftList)
    rightList = []
    getRightList(t, rightList)
    return leftList == rightList

def getLeftList(t, l):
    if t == None:
        l += [None]
        return
    l += [t.value]
    getLeftList(t.left, l)
    getLeftList(t.right, l)
        
def getRightList(t, l = []):
    if t == None:
        l += [None]
        return
    l += [t.value]
    getRightList(t.right, l)
    getRightList(t.left, l)
