package main

import "fmt"

func GetMinOperations(s1, s2 string, i, j int) int {
	if i == len(s1) {
		return len(s2) - j
	}
	if j == len(s2) {
		return len(s1) - i
	}

	if s1[i] == s2[j] {
		return GetMinOperations(s1, s2, i+1, j+1)
	}

	minOp := 32767
	minOp = min(minOp, GetMinOperations(s1, s2, i+1, j))
	minOp = min(minOp, GetMinOperations(s1, s2, i, j+1))
	minOp = min(minOp, GetMinOperations(s1, s2, i+1, j+1))
	return minOp + 1
}

func minOperations(s1, s2 string) int {
	return GetMinOperations(s1, s2, 0, 0)
}

func main() {
	for {
		fmt.Print("Enter string 1: ")
		var s1 string
		fmt.Scanln(&s1)
		if s1 == "q" || s1 == "Q" {
			break
		}

		fmt.Print("Enter string 2: ")
		var s2 string
		fmt.Scanln(&s2)

		n := minOperations(s1, s2)
		fmt.Printf("The levenshtein distance between %s and %s is %d\n", s1, s2, n)
	}
}
