package main

import "fmt"

func main() {
	var num, countL, countR, maxL, maxR int
	trophy := make([]int, 0)
	fmt.Scan(&num)
	for i := 0; i < num; i++ {
		var tmp int
		fmt.Scan(&tmp)
		trophy = append(trophy, tmp)
	}
	maxL = trophy[0]
	maxR = trophy[num-1]
	countL = 1
	countR = 1
	for i := 0; i < num; i++ {
		if trophy[i] > maxL {
			countL++
			maxL = trophy[i]
		}
	}
	for i := num - 1; i >= 0; i-- {
		if trophy[i] > maxR {
			countR++
			maxR = trophy[i]
		}
	}
	fmt.Printf("%d\n%d\n", countL, countR)
}
