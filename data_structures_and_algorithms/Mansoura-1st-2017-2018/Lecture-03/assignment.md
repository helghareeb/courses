# بسم الله الرحمن الرحيم

## Exercises
- Find average of all the elements in an array.
- Find the sum of all the elements of a two dimensional array.
- Find the largest element in the array.
- Find the smallest element in the array.
- Find the second largest number in the array.
- Print all the maxima’s in an array. (A value is a maximum if the value before and after its index are smaller than it is or does not exist.)
**Hint**
  - Start traversing array from the end and keep track of the max element.
  - If we encounter an element > max, print the element and update max.
- Print alternate elements in an array.
- Given an array with value 0 or 1, write a program to segregate 0 on the left side and 1 on the right side.
- Given a list of intervals, merge all overlapping intervals.
  - Input: {[1, 4], [3, 6], [8, 10]}
  - Output: {[1, 6], [8, 10]}
- Write a function that will take intervals as input and takes care of overlapping intervals.
- Reverse an array in-place. (You cannot use any additional array in other wards Space Complexity should be O(1).)
  - Hint:  Use two variable, start and end. Start set to 0 and end set to (n-1). Increment start and decrement end. Swap the values stored at arr[start] and arr[end]. Stop when start is equal to end or start is greater than end.
- Given an array of 0s and 1s. We need to sort it so that all the 0s are before all the 1s.
  - Hint:  Use two variable, start and end. Start set to 0 and end set to (n-1). Increment start and decrement end. Swap the values stored at arr[start] and arr[end] only when arr[start] == 1 and arr[end]==0. Stop when start is equal to end or start is greater than end.
- Given an array of 0s, 1s and 2s. We need to sort it so that all the 0s are before all the 1s and all the 1s are before 2s.
  - Hint:  Same as above first think 0s and 1s as one group and move all the 2s on the right side. Then do a second pass over the array to sort 0s and 1s.
- Find the duplicate elements in an array of size n where
each element is in the range 0 to n-1.
  - Hint: 
  - **Approach 1**: Compare each element with all the elements of the array (using two loops) O(n2) solution
  - **Approach 2**: Maintain a Hash-Table. Set the hash value to 1 if we encounter the element for the first time. When we same value again we can see that the hash value is already 1 so we can print that value. O(n) solution, but additional space is required. 
  - **Approach 3**: We will exploit the constraint "every element is in the range 0 to n-1". We can take an array arr[] of size n and set all the elements to 0. Whenever we get a value say val1. We will increment the value at arr[var1] index by 1. In the end, we can traverse the array arr and print the repeated values. Additional Space Complexity will be O(n) which will be less than Hash-Table approach.
- Find the maximum element in sorted and rotated array. Complexity: O(logn) Hint:  Use binary search algorithm.
- Given an array with 'n' elements & a value 'x', find two elements in the array that sums to 'x'. Hint:  
  - **Approach 1**: Sort the array.
  - **Approach 2**: Using a Hash-Table.
- Write a function to find the sum of every number in an int number. Example: input= 1984, output should be 32 (1+9+8+4).
 
- Write a function to compute Sum(N) = 1+2+3+…+N.