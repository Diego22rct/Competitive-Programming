numberOfCases = int(input())
n = 0

for _ in range(numberOfCases):
    x = input()
    
    for char in x:
        if char == "-":
            n -= 0.5
        elif char == "+":
            n += 0.5

print(int(n))
