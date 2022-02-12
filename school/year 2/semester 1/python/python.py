import sys
import math

#no 1
def minimum():
    num1 = int(input("input first number : \n"))
    num2 = int(input("input second number : \n"))
    
    if num1 > num2:
        print("the value of the smaller number is : " , num2 )
    elif num2 > num1:
        print("the value of the smaller number is : " , num1 )
    else:
        print("the numbers are of equal value  " )

#no2
def signX():
    x = int(input("please enter the value of X : "))
    value = None
    
    if x > 0:
        value = 1
    elif x < 0:
        value = -1
    else :
        value = 0
        
    print("the value of sign(x) is : " , value)

#no3
def check_box_colour(c,r):
    color = None 
    
    if (c % 2 == 0) and (r % 2 == 0):
        color = "w"
    elif (c % 2 == 0) and (r % 2 != 0):
        color = "b"
    elif(c % 2 != 0) and (r % 2 != 0):
        color = "w"
    else:
        color = "b"
    return color
        
def chessBoard():
    while(True):
        coll1 = int(input("enter the column value of first square "))
        if coll1 > 8 or coll1 < 1:
            continue
        else:
            break
    while(True):
        row1 = int(input("enter the row value of first square "))
        if row1 > 8 or row1 < 1:
            continue
        else:
            break
    while(True):
        coll2 = int(input("enter the column value of second square "))
        if coll2 > 8 or coll2 < 1:
            continue
        else:
            break
    while(True):
        row2 = int(input("enter the row value of second square "))
        if row2 > 8 or row2 < 1:
            continue 
        else:
            break

    color1 = check_box_colour(coll1,row1)
    color2 = check_box_colour(coll2,row2)
    
    if color1 == color2:
        print("YES")
    else:
        print("NO")
  
#4 
def leap():
    year = int(input("please enter the year"))   
    
    if(year % 4 == 0) and (year % 100 != 0):
        print("YES")
    elif(year % 400 == 0):
        print("YES")
    else:
        print("NO")

#5  
def smallest():
    num1 = int(input("entr value of num1 "))       
    num2 = int(input("entr value of num2 ")) 
    num3 = int(input("entr value of num3 "))    
    lowest = None
    
    if num2 >= num1:
        lowest = num1
    else:
        lowest = num2
    
    if lowest >= num3:
            lowest = num3
            
    print("the value of lowest is :", lowest)

#6
def matching():
    num1 = int(input("entr value of num1 "))       
    num2 = int(input("entr value of num2 ")) 
    num3 = int(input("entr value of num3 "))    
    matches = 0
    
    if num2 == num1:
        matches += 1
    if num2 == num3:
        matches += 1
    if num3 == num1:
        matches += 1
        
    if matches == 1:
        matches += 1
            
    print("the value of matches  is :", matches)  
  
#7
def chocolate():
    n = int(input("entr value of n "))       
    m = int(input("entr value of m ")) 
    k = int(input("entr value of division  k "))  
    
    slice = n * m
    
    if k <= slice:
        print("YES")
    else:
        print("NO")
    
def main():
    chocolate()
      
if __name__ == "__main__":
    main()