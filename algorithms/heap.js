
const heapify = (a, idx, N) => {
    let largest = idx;
    let left = 2*idx + 1;
    let right = 2*idx + 2;

    // Find the max between three numbers
    if (left < N && a[left] > a[largest]) {
        largest = left;
    }
    if (right < N && a[right] > a[largest]) {
        largest = right;
    }

    // If we can update a parent node with a bigger value;
    if (largest !== idx) {
        let temp = a[idx]
        a[idx] = a[largest]
        a[largest] = temp
        heapify(a, largest, N);
    }
}

var a = [4, 1, 6, 8, 2, 5, 3];
// create a max-heap
for (let i = (a.length-2)%2; i>=0; i--) {
    heapify(a, i, 7);
}

// swap the first and the last element, then call heap on the entire tree
// minus the last number in array
for (let i=a.length -1; i>=0; i--) {
    temp = a[0]
    a[0] = a[i]
    a[i] = temp
    heapify(a, 0, i)
}

a.map((e) =>{ console.log(e)})