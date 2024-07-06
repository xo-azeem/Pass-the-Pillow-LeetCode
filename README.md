# Pass the Pillow

LeetCode Q # 2582.

There are n people standing in a line labeled from 1 to n. The first person in the line is holding a pillow initially. Every second, the person holding the pillow passes it to the next person standing in the line. Once the pillow reaches the end of the line, the direction changes, and people continue passing the pillow in the opposite direction.

 - For example, once the pillow reaches the nth person they pass it to the n - 1th person, then to the n - 2th person and so on.</br>
Given the two positive integers n and time, return the index of the person holding the pillow after time seconds.

 

Example 1:

> Input: n = 4, time = 5</br>
> Output: 2</br>
> Explanation: People pass the pillow in the following way: 1 -> 2 -> 3 -> 4 -> 3 -> 2.</br>
> After five seconds, the 2nd person is holding the pillow.

Example 2:

> Input: n = 3, time = 2</br>
> Output: 3</br>
> Explanation: People pass the pillow in the following way: 1 -> 2 -> 3.</br>
> After two seconds, the 3rd person is holding the pillow.

My Solution Analysis:

<div align = "center">

  ![image](https://github.com/xo-azeem/Pass-the-Pillow-LeetCode/assets/171427226/7bd03078-c82e-4402-95ac-eb3ea2e5fd61)

  Time complexity: O(1).</br>Space complexity: O(1).
</div>
