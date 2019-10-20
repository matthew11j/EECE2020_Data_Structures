# Lab 5 - Searching & Sorting
## Objectives and Concepts:
   The objective of this lab was to learn and explore using different sorting and searching methods and comparing times taken to sort and search respectively
   to help understand the different types. The different sorting and searching methods were also capable of handling different data types by using templates.
   The lab also included more practice using header files, virtual functions, and the built in timing mechanism in c++. As shown in Figure 1 the time to execute both search methods increased as the number of elements in the array increased. Linear search proved to be a faster search method than binary search for all 5 array sizes.
   
## Contributions:
    Matthew Jackson: Created linear Search method. Created radix sort method. Created task2 file and task4 file for search and sort testing.
    Nathan Sucher: Created bubble sort, insertion sort, selection sort, and merge sort methods. Made task4 run the sorting methods on the same array
        to help compare times. 
    Sara VanDewerker: Created quick sort method. Created binary Search method. Created Search and Sort Test files. Helped make functions work with multiple data types
    
    All other functions were created as a collaboration between all three partners.
    
## Figures:
![Task 3 Execution Times](/images/Lab5_Search.PNG)

Figure 1: Task 2 Searching Comparison Graph

### Graph Analysis: 
    Binary search is always slightly faster than linear search. 

![Task 4 Execution Times](/images/Lab5_Sort.PNG)

Figure 2: Task 4 Average Execution Times Table
![Task 4 Execution Times](/images/Lab5_Sort_Table.PNG)

Figure 3: Task 4 Sorting Comparison Graph

### Graph Analysis: 
    Bubble Sort with the smaller arrays followed its best case and had a linear increase as array size increased, once the array size got larger it began
        to exponentially increase as expected by its worse case.
    Insertion Sort followed exponential growth as expected in both cases.
    Selection Sort followed exponential growth as expected in both cases.
    Merge Sort followed the expected output having a slower increase than n squared and following the nlogn Big O notation.
    Quick Sort followed the nlogn Big O notation as the values barely increased as the array size inreased, also being the best sorting method we had.
    Radix Sort was the only sort that did not act as expected. It was no where near the O(dn) notation because as array size increased the time it took to sort 
        was almost exponential. In our original radixSort function created to only test int values, the notation O(dn) was being followed as expected, but once
        we added in the functionality of having multiple data types, we had to remove the modulus because it would not work for double and float data types and 
        add a function to correctly sort using those data types, the time it took to sort greatly increased.
