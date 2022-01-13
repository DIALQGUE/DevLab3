package main

import (
	"bufio"
	"fmt"
	"math"
	"os"
)

func main() {

	reader := bufio.NewReader(os.Stdin)
	input, _ := reader.ReadString('\n')
	//input := "Repeater"
	length := len(input)
	for row := 0; row < length; row++ {
		for col := -length + 1; col < length; col++ {
			newcol := math.Abs(float64(col))
			if -newcol+float64(row) >= 0 {
				fmt.Print(string(input[int(newcol)]))
			} else {
				fmt.Print(" ")
			}
			if col < length-1 {
				fmt.Print(" ")
			}
		}
		fmt.Print("\n")
	}

	//Tips:  Run for check input format
}
