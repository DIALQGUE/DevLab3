package main

import (
	"bufio"
	"fmt"
	"os"
	"strings"
)

func main() {
	reader := bufio.NewReader(os.Stdin)
	input, _ := reader.ReadString('\n')
	input = strings.ReplaceAll(input, "a", "")
	input = strings.ReplaceAll(input, "e", "")
	input = strings.ReplaceAll(input, "i", "")
	input = strings.ReplaceAll(input, "o", "")
	input = strings.ReplaceAll(input, "u", "")
	input = strings.ReplaceAll(input, "A", "")
	input = strings.ReplaceAll(input, "E", "")
	input = strings.ReplaceAll(input, "I", "")
	input = strings.ReplaceAll(input, "O", "")
	input = strings.ReplaceAll(input, "U", "")
	fmt.Print(input)
}
