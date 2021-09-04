def isCryptSolution(crypt, solution):
   solutionDict = createSolutionDict(solution)

   word1 = getWordValue(crypt[0], solutionDict)
   word2 = getWordValue(crypt[1], solutionDict)
   word3 = getWordValue(crypt[2], solutionDict)
   if (len(word1) > 1 and word1[0] == '0') or \
      (len(word2) > 1 and word2[0] == '0') or \
      (len(word3) > 1 and word3[0] == '0'):
      return False
   return int(word1) + int(word2) == int(word3)

def createSolutionDict(solution):
   """ Example
   solution = [['O', '0'],
               ['M', '1'],
               ['Y', '2'],
               ['E', '5'],
               ['N', '6'],
               ['D', '7'],
               ['R', '8'],
               ['S', '9']]
   """
   i = 0
   solutionDict = {}
   for i in range(len(solution)):
      solutionDict[solution[i][0]] = solution[i][1]
   return solutionDict

def getWordValue(word, sDict):
   total = ""
   for char in word:
      total += sDict[char]
   return total
