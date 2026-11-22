a, b = map(int, input().split())

i, j = a, b
first = True

if a <= b:
    while i <= b and j >= a:
        if not first:
            print("-", end="")
        print(f"{i} {j}", end="")
        first = False
        i += 1
        j -= 1
else:
    while i >= b and j <= a:
        if not first:
            print("-", end="")
        print(f"{i} {j}", end="")
        first = False
        i -= 1
        j += 1
print()