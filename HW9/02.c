void sort_even_odd(int n, int a[]) {
    int b[n], index = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] % 2 == 0) {
            b[index++] = a[i];
        }
    }
    for (int i = 0; i < n; i++) {
        if (a[i] % 2 != 0) {
            b[index++] = a[i];
        }
    }
    for (int i = 0; i < n; i++) {
        a[i] = b[i];
    }
}
