// You are given a string consisting of only lowercase English letters
// In one operation, you can:
// 1. Delete the entire string s, or
// 2. Delete the first i letters of s if the first i letters of s are equal
//    to the following i letters of s, for any i in the range 1 <= i <= s.length/2
// Return the maximum number of operations needed to delete all of s
// Input:
// s = "aaabaab"
// Output:
// 4
// Explanation:
// - Delete the first letter 'a' since the next letter is equal. Now s = "aabaab"
// - Delete the first 3 letters "aab" since next 3 letters are equal. s = "aab"
// - Delete the first letter "a" since the next letter is equal. s = "ab"
// - Delete all letters
// Return 4 as we used 4 operations
// Input: 
// abcabcdabc
// Output:
// 2