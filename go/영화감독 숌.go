package main

import (
	"fmt"
	"math"
)

func main() {
	var N, id int
	var num int = 665
	fmt.Scan(&N)
	for {
		if id == N {
			break
		}
		num++
		for i := 0; i <= 9; i++ {
			if (num/int(math.Pow(10, float64(i))))%1000 == 666 {
				id++
				break
			}
		}
	}
	fmt.Print(num)
}
