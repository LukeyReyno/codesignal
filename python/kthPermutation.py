from itertools import permutations

def kthPermutation(numbers, k):
   return list(permutations(numbers, len(numbers)))[k-1]
