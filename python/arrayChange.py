def arrayChange(inputArray):
   totalChanges = 0
   i = 0
   length = len(inputArray) - 1
   while i < length:
      if inputArray[i] >= inputArray[i + 1]:
         change = (inputArray[i] +1 - inputArray[i + 1])
         inputArray[i+1] += change
         totalChanges += change
      i += 1
   return totalChanges
