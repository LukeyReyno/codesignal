def sudoku2(grid):
   results = checkRowsandCols(grid)
   if results != None:
      return results
   return checkSquare(grid)

def checkRowsandCols(grid):
   row = 0
   col = 0
   for row in range(len(grid)):
      checkListRow = []
      checkListCol = []
      for col in range(len(grid)):
         if grid[row][col].isdigit():
            if grid[row][col] in checkListRow:
               return False
            checkListRow.append(grid[row][col])
         if grid[col][row].isdigit():
            if grid[col][row] in checkListCol:
               return False
            checkListCol.append(grid[col][row])

def checkSquare(grid):
   row = col = 0
   for col in [0, 3, 6]:
      for row in [0, 3, 6]:
         checkList = []
         i = j = 0
         for i in range(3):
            for j in range(3):
               if grid[row + i][col + j].isdigit():
                  if grid[row + i][col + j] in checkList:
                     return False
               checkList.append(grid[row + i][col + j])
   return True
