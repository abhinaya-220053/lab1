from datetime import datetime
import string
import math
print("LAB-1")
#1
print(datetime.now())
#2
a=input("enter  first name:")
b=input("enter last name :")
print(b, a)

#3
    
b=int(input("enter a number:"))
v=b+(b*10 +b)+(b*100 +b*10+b)
print(v)

#4
c=int(input("enter a number"))
d=int(input("enter b number"))
e=int(input("enter c number"))
if(c==d==e):
    print(3*c)
else:
    print(c+d+e)
    
#5
f=int(input("enter a number"))
g=int(input("enter b number"))
h=(f+g)**2
print(h)

#6
amount=int(input("enter amount:"))
years=int(input("enter no.of years:"))
intrest=float(input("enter intrest:"))
fv=amount*(1+(intrest/100))**years
print(fv)

#7
s=input("enter a number:")
if '.' in s:
    num=float(s)
else:
    num=int(s)
print(num,type(num))
    
#8
p=int(input("enter a numbers:"))
s=0
for i in range(1,p+1):
    s=s+i
print("sum of ",p,"numbers: ",s)

#9
n=int(input("enter a number:"))
s=0
while(n!=0):
    temp=n%10
    s=s+temp
    n=n//10
print(s)


#10
c=str(input("enter a character:"))
print(ord(c))

 
#11
c=input("enter a string/numeric:")
if '.' in c:
    print("float")
elif(c.isdigit()):
    print("integer")
else:
    print("string")


#12
rows=int(input("enter a no.of rows:"))
cols=int(input("enter a no.of cols:"))
for i in range(rows):
    for j in range(cols):
        if i==0 or i==rows-1 or j==0 or j==cols-1:
            print("*",end=" ")
        else:
            print(" ",end=" ")
    print()


#13
for i in range(2000,3001):
    if(i%7==0 and i%5!=0):
        print(i)


#14
C = 50
H = 30
D_values = input("Enter  values separated by comma: ").split(',')
result = []
for D in D_values:
    D = D.strip()# removes extra spaces
    D = int(D)# convert to integer
    Q = math.sqrt((2 * C * D) / H)
    result.append(str(round(Q)))
print(",".join(result))

#15
row=int(input("enter a number="))
for i in range(row,0,-1):
    for j in range(i):
        print(chr(65+j),end=" ")
    print()
