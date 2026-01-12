a=int(input("enter the value of a:"))
b=int(input("enter value of b:"))
c=int(input("enter value of c:"))
if a>b>c or a>c>b :
    print("largest value",a)
elif b>a>c or b>c>a :
    print("largest value",b)
elif c>b>a or c>a>b :
    print("largest value",a)
if a<b<c or a<c<b :
    print("smallest value",a)
elif b<a<c or b<c<a :
    print("smallest value",b)
elif c<b<a or c<a<b :
    print("smallest value",a)


