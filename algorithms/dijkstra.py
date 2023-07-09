def init(len):
    mark = [0]*len
    dist = [999999]*len
    return mark, dist


def min(mark, dist, length):
    min = 999999
    for j in range(length):
        if mark[j] == 0 and dist[j] < min:
            min = dist[j]
            k = j
    return k



def dijkstra(a, src, dist, mark):
    dist[src] = 0;
    for i in a:
        min_idx = min(mark, dist, len(a))
        mark[min_idx] = 1
        for u in range(len(a)):
            if a[min_idx][u] != 0 and mark[u] == 0 and dist[min_idx] + a[min_idx][u] < dist[u]:
                dist[u] = dist[min_idx] + a[min_idx][u]

def main():
    a = [
        [0, 6, 0, 1, 0],
        [6, 0, 5, 2, 2],
        [0, 5, 0, 0, 5],
        [1, 2, 0, 0, 1],
        [0, 2, 5, 1, 0]
    ]
    mark, dist = init(len(a))
    dijkstra(a, 0, dist, mark)
    print (dist)

main()