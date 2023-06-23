#Day_1: COURSES FINDER
n = int(input("Enter the trials: "))
c = []

for i in range(0, n):
    x, y, z = map(int, input().split())
    c.append(x*y*z)
    
for j in c:
    print(j)
