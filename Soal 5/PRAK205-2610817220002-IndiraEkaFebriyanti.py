import math

a = int(input())
b = int(input())

c = int(math.sqrt(b**2 - a**2))

K = a + b + c
L = (a * c) // 2

print(f"Alas = {c} cm")
print(f"Tinggi = {a} cm")
print(f"Keliling = {K} cm")
print(f"Luas = {L} cm^2")