import math

#Problem_1: 3 input sum finder
a, b, c = map(int, input("Enter 3 numbers: ").split())

print(a+b)
print(b+c)
print(c+a)


#Problem_2: Area calculator
r = float(input("Enter the Radius: "))
print("Area : " +  str(math.pi * r *r))


#Problem_3: Odd or Even finder
number = int(input("Enter a number: "))
print("Even" if number%2 == 0 else "Odd")
