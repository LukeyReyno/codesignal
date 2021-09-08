#
# Binary trees are already defined with this interface:
# class Tree(object):
#   def __init__(self, x):
#     self.value = x
#     self.left = None
#     self.right = None
def hasPathWithGivenSum(t, s, cSum = 0):
   if t == None:
      return False
   cSum += t.value
   if cSum == s and t.left == None and t.right == None:
      return True
   if t.left != None and hasPathWithGivenSum(t.left, s, cSum):
      return True
   if t.right != None and hasPathWithGivenSum(t.right, s, cSum):
      return True
   return False
