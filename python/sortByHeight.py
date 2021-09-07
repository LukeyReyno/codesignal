def sortByHeight(a):
   orderList = a.copy()
   orderList.sort()

   i = 0
   j = 0
   while i < len(orderList):
      if orderList[i] == -1:
         pass
      elif a[j] == -1:
         j += 1
         continue
      else:
         a[j] = orderList[i]
         j += 1
      i += 1
   return a
