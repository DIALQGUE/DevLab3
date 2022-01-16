package main

import (
	"bufio"
	"fmt"
	"math"
	"os"
)

func main() {
	var m, n int

	reader := bufio.NewReader(os.Stdin)
	input, _ := reader.ReadString('\n')
	fmt.Sscan(input, &m)
	input, _ = reader.ReadString('\n')
	fmt.Sscan(input, &n)

	var max, min float64 = math.Inf(-1), math.Inf(1)
	matrix := make([][]float64, m)
	for i := range matrix {
		matrix[i] = make([]float64, n)
	}

	for j := 0; j < n; j++ {
		for i := 0; i < m; i++ {
			input, _ = reader.ReadString('\n')
			fmt.Sscan(input, &matrix[i][j])
			if matrix[i][j] > max {
				max = matrix[i][j]
			}
			if matrix[i][j] < min {
				min = matrix[i][j]
			}
		}
	}

	scale := max - min

	for j := 0; j < n; j++ {
		for i := 0; i < m; i++ {
			matrix[i][j] = (matrix[i][j] - min) / scale
			fmt.Printf("%.4f ", matrix[i][j])
		}
		fmt.Print("\n")
	}
}
