def palindromeRearranging(inputString):
   even = len(inputString) % 2 == 0
   l = [char for char in inputString]
   buff = 1
   i = 0
   while len(l) > 1:
      value = l[i]
      if value in l[i + 1:]:
         l.remove(value)
         l.remove(value)
      else:
         if buff == 0 or even:
               return False
         buff -= 1
         i += 1
   return True
