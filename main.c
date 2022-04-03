#include <stdio.h>

int find_min(int start_p, int finish_p, int numbers[]) {
    int min = 99999,
        index = 0;
    for (int i = start_p; i<finish_p; i++) {
        if (numbers[i] < min) {
            min = numbers[i];
            index = i;
        }
    }
    return index;
}

void swap(int a, int b, int numbers[])
{
    int temp;
    temp = numbers[a]; 
    numbers[a] = numbers[b]; 
    numbers[b] = temp;
}

void insertion_sort(int size, int numbers[]) {

    for (int i = 0; i<size; i++) {
        int min_index = find_min(i, size, numbers);
        if (i != min_index) {
            swap(i, min_index, numbers);
        }
    }

}

void print_arr(int size, int numbers[]) {
    printf("------------\nNumber Array:\n");
    for (int i = 0; i<size; i++) {
        printf("%d) %d\n", i+1, numbers[i]);
    }
    printf("------------");
}

int main(void)
{
    int n;

    printf("How many numbers do you want to enter >> ");
    scanf("%d", &n);

    int numbers[n];

    for (int i = 0; i<n; i++) {
        printf("Enter the %d. number > ", i+1);
        scanf("%d", &numbers[i]);
    }

    insertion_sort(n, numbers);

    print_arr(n, numbers);

    return (0);
}