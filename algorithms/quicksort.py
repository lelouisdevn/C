def partition(a, i, j):
    pivot = a[j]
    pIndex = i
    for k in range(i, j):
        if a[k] < pivot:
            a[k], a[pIndex] = a[pIndex], a[k]
            pIndex += 1
    if a[j] < a[pIndex]:
        a[j], a[pIndex] = a[pIndex], a[j]
    return pIndex


def quicksort(a, i, j):
    if i < j:
        pivot = partition(a,i,j)
        quicksort(a, i, pivot-1)
        quicksort(a, pivot+1, j)


def main():
    a = [6, 3, 1, 8, 4, 9, 5]
    quicksort(a, 0, 6)
    for i in a:
        print (i, end=" ")
    print("")

if __name__ == "__main__":
    main()