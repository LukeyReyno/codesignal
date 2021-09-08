def getPoints(answers, p):
   questionPoints = lambda i, ans : [(-p),(i+1)][int(ans)]

   res = 0
   for i, ans in enumerate(answers):
      res += questionPoints(i, ans)
   return res
