package main

import (
	"fmt"
	"sort"
)

type xy struct{
	x int
	y int
}

func main() {
	s := make([]xy, 0)
	var inputx, inputy int
	var N int
	fmt.Scan(&N)
	for i:=0; i<N; i++ {
		fmt.Scan(&inputx, &inputy)
		s = append(s, xy{inputx, inputy})
	}
	//fmt.Print(s)
	sort.Slice(s, func(i, j int) bool{
		if s[i].x == s[j].x {
			return s[i].y < s[j].y
		}else {
			return s[i].x < s[j].x
		}
	})
	for i:=0; i<N; i++{
		fmt.Println(s[i].x, s[i].y)
	}
}

