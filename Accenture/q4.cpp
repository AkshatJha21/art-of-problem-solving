// Given an input string (s) and a pattern (p)
// implement wildcard pattern matching with support for '?' and '*' where:
// '?' Matches any single character
// '*' Matches any sequence of characters (including the empty sequence)
// The matching should convert the entire input string (not partial)
// Input: s="aa" p="a"
// Output: false
// Explanation: 'a' does not match the entire string "aa"
// Input: s="aa" p="*"
// Output: true
// Explanation: '*' matches any sequence
// Input: s="cb" p="?a"
// Output: false
// Explanation: "?" matches "c", but the second letter is "a" which doesn't match "b"
