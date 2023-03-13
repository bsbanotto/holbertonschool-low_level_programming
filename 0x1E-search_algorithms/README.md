This is a README for various Searching Algorithms

## 0x04. Task 0. Linear search
Write a function that searches for a value in an array of integers using the  [Linear search algorithm](https://intranet.hbtn.io/rltoken/vcsA7a_hqQDF0KzOZSpRNQ "Linear search algorithm")

-   Prototype :  `int linear_search(int *array, size_t size, int value);`
-   Where  `array`  is a pointer to the first element of the array to search in
-   `size`  is the number of elements in  `array`
-   And  `value`  is the value to search for
-   Your function must return the first index where  `value`  is located
-   If  `value`  is not present in  `array`  or if  `array`  is  `NULL`, your function must return  `-1`
-   Every time you compare a value in the array to the value you are searching, you have to print this value (see example below)

## 0x04. Task 1. Binary search
Write a function that searches for a value in a sorted array of integers using the  [Binary search algorithm](https://intranet.hbtn.io/rltoken/QxlU9jIngzgvgbuOCu9k0A "Binary search algorithm")

-   Prototype :  `int binary_search(int *array, size_t size, int value);`
-   Where  `array`  is a pointer to the first element of the array to search in
-   `size`  is the number of elements in  `array`
-   And  `value`  is the value to search for
-   Your function must return the index where  `value`  is located
-   You can assume that  `array`  will be sorted in ascending order
-   You can assume that  `value`  won’t appear more than once in  `array`
-   If  `value`  is not present in  `array`  or if  `array`  is  `NULL`, your function must return  `-1`
-   You must print the array being searched every time it changes. (e.g. at the beginning and when you search a subarray) (See example)

## 0x04. Task 2. Big O #0
What is the `time complexity` (worst case) of a linear search in an array of size `n`?

## 0x04. Task 3. Big O #1
What is the `space complexity` (worst case) of an iterative linear search algorithm in an array of size `n`?

## 0x04. Task 4. Big O #1
What is the `time complexity` (worst case) of a binary search in an array of size `n`?

## 0x04. Task 5. Big O #2
What is the `time complexity` (worst case) of a binary search in an array of size `n`?

## 0x04. Task 6. Big O #3
What is the `space complexity` (worst case) of a binary search in an array of size `n`?

## 0x04. Task 7. Big O #4
What is the space complexity of this function / algorithm?

```
int **allocate_map(int n, int m)
{
     int **map;

     map = malloc(sizeof(int *) * n);
     for (size_t i = 0; i < n; i++)
     {
          map[i] = malloc(sizeof(int) * m);
     }
     return (map);
}
```

## 0x05. Task 0. Advanced binary search
You may have noticed that the basic binary search does not necessarily return the index of the  _first_  value in the array (if this value appears more than once in the array). In this exercise, you’ll have to solve this problem.

Write a function that searches for a value in a sorted array of integers.

-   Prototype :  `int advanced_binary(int *array, size_t size, int value);`
-   Where  `array`  is a pointer to the first element of the array to search in
-   `size`  is the number of elements in  `array`
-   And  `value`  is the value to search for
-   Your function must return the index where  `value`  is located
-   You can assume that  `array`  will be sorted in ascending order
-   If  `value`  is not present in  `array`  or if  `array`  is  `NULL`, your function must return  `-1`
-   Every time you split the array, you have to print the new array (or subarray) you’re searching in (See example)
-   You have to use recursion. You may only use one loop (`while`,  `for`,  `do while`, etc.) in order to print the array

## 0x06. Linear search in a skip list
As you see now, looking for a specific value in a singly linked list always leads to browse every element of the list. A common way to optimize the time complexity of a search in a singly linked list is to modify the list itself by adding an “express lane” to browse it. A linked list with an express lane is called a [skip list](https://intranet.hbtn.io/rltoken/T2oTkjx6BqujWUz17OObcQ "skip list"). This change does not come without consequences. Indeed, the space complexity of a search in this kind of list will grow as `sizeof(skiplist_t) > sizeof(listint_t)` 

Write a function that searches for a value in a sorted skip list of integers.

-   Prototype :  `skiplist_t *linear_skip(skiplist_t *list, int value);`
-   Where  `list`  is a pointer to the head of the skip list to search in
-   A node of the express lane is placed every index which is a multiple of the square root of the size of the list (see example below)
-   And  `value`  is the value to search for
-   You can assume that  `list`  will be sorted in ascending order
-   Your function must return a pointer on the first node where  `value`  is located
-   If  `value`  is not present in  `list`  or if  `head`  is  `NULL`, your function must return  `NULL`
-   Every time you compare a value in the list to the value you are searching, you have to print this value (see example below)
