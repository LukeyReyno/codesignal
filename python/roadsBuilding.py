def roadsBuilding(cities, roads):
   neededRoads = []
   currentRoads = {}
   for c, k in roads:
      if c > k:
         temp = c
         c = k
         k = temp
      try:
         currentRoads[c] += [k]
      except:
         currentRoads[c] = [k]

   for i in range(cities - 1):
      for j in range(i + 1, cities):
         try:
               if j not in currentRoads[i]:
                  neededRoads += [[i, j]]
         except:
               neededRoads += [[i, j]]
   
   return neededRoads    
