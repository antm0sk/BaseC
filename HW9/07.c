int compression(int a[], int b[], int N) {
    int count = 0, index = 0, current = 0;
    for (int i = 0; i < N; i++) {
        if (a[i] == current) {
            count++;
        } else {
            b[index++] = count;
            current = a[i];
            count = 1;
        }
    }
    b[index++] = count;
    return index;
}
