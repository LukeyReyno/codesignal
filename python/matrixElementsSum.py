def matrixElementsSum(matrix):
   results = 0
   hauntedCol = set()
   for row in range(len(matrix)):
      for col in range(len(matrix[row])):
         if matrix[row][col] == 0:
            hauntedCol.add(col)
         elif col in hauntedCol:
            continue
         else:
            results += matrix[row][col]

   return results
