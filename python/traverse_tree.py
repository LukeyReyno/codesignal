import queue

class Tree(object):
   def __init__(self, x):
      self.value = x
      self.left = None
      self.right = None
      
def traverseTree(t):
   results = []
   if t == None:
       return results

   q = queue.Queue()
   q.put(t)
   
   while not q.empty():
      node = q.get_nowait()
      results.append(node.value)
      
      if node.left != None:
         q.put(node.left)
      
      if node.right != None:
         q.put(node.right)
         
   return results
