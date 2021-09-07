def reverseInParentheses(inputString):
   reverseString = [char for char in inputString[::-1]]

   oIndex = 0
   while oIndex < len(reverseString):
      if reverseString[oIndex] == '(':
         cIndex = oIndex
         while reverseString[cIndex] != ')':
               cIndex -= 1
         reverseString[cIndex: oIndex+1] = reverseString[cIndex+1: oIndex][::-1]
         oIndex = 0
      oIndex += 1
   
   return "".join(reverseString[::-1])

"""
def reverseInParentheses(s):
    return eval('"' + s.replace('(', '"+("').replace(')', '")[::-1]+"') + '"')

"""