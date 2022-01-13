package main

import (
	"bufio"
	"fmt"
	"os"
)

func score(target string) int {
	if target == "P" || target == "p" {
		return 1
	}
	if target == "N" || target == "n" {
		return 3
	}
	if target == "B" || target == "b" {
		return 3
	}
	if target == "R" || target == "r" {
		return 5
	}
	if target == "Q" || target == "q" {
		return 9
	}
	return 0
}

func main() {
	var playerscore [2]int
	reader := bufio.NewReader(os.Stdin)
	for i := 0; i < 8; i++ {
		input, _ := reader.ReadString('\n')
		for j := 0; j < 8; j++ {
			if input[j] >= 'A' && input[j] <= 'Z' {
				playerscore[0] += score(string(input[j]))
			} else if input[j] >= 'a' && input[j] <= 'z' {
				playerscore[1] += score(string(input[j]))
			}
		}
	}
	if playerscore[0]-playerscore[1] != 0 {
		fmt.Print(playerscore[0] - playerscore[1])
	} else {
		fmt.Print("equal")
	}
}
