int count_bigger_abs(int n, int a[]) {
    int max = a[0];
    for (int i = 1; i < n; i++) {
        if (a[i] > max) {
            max = a[i];
        }
    }

    int count = 0;
    for (int i = 0; i < n; i++) {
        if (abs(a[i]) > max) {
            count++;
        }
    }

    return count;
}
