def areEquallyStrong(yourLeft, yourRight, friendsLeft, friendsRight):
   yourStrong = max(yourLeft, yourRight)
   yourWeak = min(yourLeft, yourRight)
   friendsStrong = max(friendsLeft, friendsRight)
   friendsWeak = min(friendsLeft, friendsRight)
   
   return yourStrong == friendsStrong and yourWeak == friendsWeak
