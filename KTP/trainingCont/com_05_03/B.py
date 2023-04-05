n, m = map(int, input().split())
x1, y1, x2, y2 = map(int, input().split())

w = y2  - y1 + 1
h = x2 - x1 + 1

c = n - h 
d = m -  w 

a1 = c * m % 2
a2 = d * m % 2

print(round((a1 + a2)/2))