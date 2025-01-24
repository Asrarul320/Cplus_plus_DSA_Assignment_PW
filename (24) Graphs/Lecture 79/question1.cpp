// Q1 There is a group of n people labeled from 0 to n - 1 where each person has a different 
// amount of money and a different level of quietness.

// You are given an array richer where richer[i] = [ai, bi] indicates that ai has more money than 
// bi and an integer array quiet where quiet[i] is the quietness of the ith person. All the given 
// data in richer are logically correct (i.e., the data will not lead you to a situation where x is 
// richer than y and y is richer than x at the same time).


// Return an integer array answer where answer[x] = y if y is the least quiet person (that is, the 
// person y with the smallest value of quiet[y]) among all people who definitely have equal to 
// or more money than the person x.

// Input: richer = [[1,0],[2,1],[3,1],[3,7],[4,3],[5,3],[6,3]], quiet = [3,2,5,4,6,1,7,0]

// Output: [5,5,2,5,4,5,6,7]