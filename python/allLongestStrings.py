def allLongestStrings(inputArray):
   lengthDict = {}
   maxLength = 0
   for s in inputArray:
      sLength = len(s)
      try:
         lengthDict[str(sLength)] += [s]
      except:
         lengthDict[str(sLength)] = [s]
      
      if sLength > maxLength:
         maxLength = sLength
   
   return lengthDict[str(maxLength)]
