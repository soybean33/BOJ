package main

import "fmt"

func main() {
	var N int
	var K int
	var P int
	var count int
	var number []int
	fmt.Scan(&N, &K)
	for i :=2; i<=N; i++{
		number = append(number, i)
	}
	//fmt.Println(number)
	for count < K {
		for i := 0; i <= N-1; i++ {
			if number[i] != 0 {
				P = number[i]
				//fmt.Println("P=", P)
				break
			}
		}
		for i := 0; i < N-1; i++ {
			if number[i]%P == 0 && number[i] != 0 {
				count++
				if count == K {
					fmt.Println(number[i])
					break
				}
				//fmt.Println("erase", number[i])
				number[i] = 0
			}
		}
	}
}
