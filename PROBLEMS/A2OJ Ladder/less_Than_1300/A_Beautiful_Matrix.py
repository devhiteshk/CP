a = []

for i in range(5):
    a.append(list(map(int, input().split())))

one_loc_x = -1
one_loc_y = -1
for i in range(5):
    for j in range(5):
        if a[i][j] == 1:
            one_loc_x = i
            one_loc_y = j

ans = abs(one_loc_x - 2) + abs(one_loc_y-2)
print(ans)