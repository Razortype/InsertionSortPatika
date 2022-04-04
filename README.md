# InsertionSortPatika
Insertion sort algoritması

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

# Project 1
Proje 1
[22,27,16,2,18,6] -> Insertion Sort

1-) Yukarı verilen dizinin sort türüne göre aşamalarını yazınız.
2-) Big-O gösterimini yazınız.
3-) Time Complexity: Average case: Aradığımız sayının ortada olması,Worst case: Aradığımız sayının sonda olması, Best case: Aradığımız sayının dizinin en başında olması. Dizi sıralandıktan sonra 18 sayısı hangi case kapsamına girer? Yazınız.


[7,3,5,8,2,9,4,15,6] dizisinin Insertion Sort'a göre ilk 4 adımını yazınız.

# Answers
## 1)
[2,27,16,22,18,6]
[2,6,16,22,18,27]
[2,6,16,22,18,27]
[2,6,16,18,22,27]
[2,6,16,18,22,27]

## 2)
Algoritma 2 iç içe for loopa sahip
complexity: O(n^2)

## 3) 
Average case.