t = int(input())

while(t):
    n,x1,y1,x2,y2 = map(int, input().split())

    raw_x = x2 - x1 if x2>=x1 else x1 - x2
    raw_y = y2 - y1 if y2>=y1 else y1 - y2

    min_raw_distance_in_matrix = raw_x + raw_y

    min_dist2go_out = min(x1-1, n-x1, y1-1, n-y1) + 1
    min__dis2go_in = min(x2-1, n-x2, y2-1, n-y2) + 1


    # print(min_raw_distance_in_matrix, min_dist2go_out + min__dis2go_in)
    print(min(min_raw_distance_in_matrix, min_dist2go_out + min__dis2go_in))

    t -= 1



