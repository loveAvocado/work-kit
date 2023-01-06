def noGap(myStr): #make str with no gap
     newStr=""
     for char in myStr:
         if char not in " ":
             newStr += char
          
     return newStr


youString = input()
print(noGap(youString))


             
     
