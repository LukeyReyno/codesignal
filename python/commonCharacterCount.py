def commonCharacterCount(s1, s2):
   checked = []
   totalCount = 0
   for char in s1:
      if char in checked:
         continue
      checked += [char]

      count1 = s1.count(char)
      count2 = s2.count(char)
      if count1 > count2:
         totalCount += count2
         continue
      totalCount += count1
      
   return totalCount

"""
def commonCharacterCount(s1, s2):
    com = [min(s1.count(i),s2.count(i)) for i in set(s1)]
    return sum(com)
"""
