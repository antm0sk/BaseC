void change_max_min(int size, int a[]) {
    int max_index = 0, min_index = 0;

    for (int i = 1; i < size; i++) {
        if (a[i] > a[max_index]) {
            max_index = i;
        }
        if (a[i] < a[min_index]) {
            min_index = i;
        }
    }

    int temp = a[max_index];
    a[max_index] = a[min_index];
    a[min_index] = temp;
}
