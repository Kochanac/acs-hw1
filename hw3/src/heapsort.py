def heapsort(arr: list, key=lambda x: x) -> list:
    n = len(arr)

    for i in range(n // 2 - 1, -1, -1):
        heapify(arr, n, i, key=key)

    for i in range(n - 1, 0, -1):
        arr[i], arr[0] = arr[0], arr[i]
        heapify(arr, i, 0, key=key)

    return arr


def heapify(arr, n, i, key):
    largest = i
    l = 2 * i + 1
    r = 2 * i + 2

    if l < n and key(arr[largest]) < key(arr[l]):
        largest = l
    if r < n and key(arr[largest]) < key(arr[r]):
        largest = r

    if largest != i:
        arr[i], arr[largest] = arr[largest], arr[i]
        heapify(arr, n, largest, key)
