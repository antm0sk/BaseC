void swap_negmax_last(int size, int a[]) {
    int max_neg = -1, max_neg_index = -1;

    for (int i = 0; i < size; i++) {
        if (a[i] < 0 && (max_neg == -1 || a[i] > max_neg)) {
            max_neg = a[i];
            max_neg_index = i;
        }
    }

    if (max_neg_index != -1) {
        int temp = a[max_neg_index];
        a[max_neg_index] = a[size - 1];
        a[size - 1] = temp;
    }
}
