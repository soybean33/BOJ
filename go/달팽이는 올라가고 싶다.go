package main

import (
	"fmt"
	"math"
)

func main() {
	var A, B, V int
	var day float64
	fmt.Scan(&A, &B, &V)

	day = float64(V-A) / float64(A-B)
	day = math.Ceil((day + 1))
	fmt.Printf("%.0f", day)
}
