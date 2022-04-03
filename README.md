# InsertionSortPatika
Insertion sort algorithm

# Sorting Function
```c
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
```

# Output
How many numbers do you want to enter >> 5
Enter the 1. number > 32
Enter the 2. number > 4
Enter the 3. number > 89
Enter the 4. number > 6
Enter the 5. number > 1
/------------
Number Array:
1) 1
2) 4
3) 6
4) 32
5) 89
/------------