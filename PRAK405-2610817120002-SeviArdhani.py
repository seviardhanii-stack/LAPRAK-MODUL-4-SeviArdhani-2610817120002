n, k = map(int, input().split())

total_keseluruhan = 0

for i in range(1, n + 1):
    total_baris = 0
    for j in range(i, 0, -1):
        print(f"({j}*{k})", end="")
        if j > 1:
            print("+", end="")
        total_baris += j * k
    
    total_keseluruhan += total_baris
    print(f" = {total_baris}")

print(total_keseluruhan)