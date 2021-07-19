package main

import "fmt"

func main(){
	arr := make([]int, 0)	// temperature array
	var N, K, sum int
	fmt.Scan(&N, &K)	// input N, K
	for i:=0; i<N; i++{	// input temperature to array
		var tmp int
		fmt.Scan(&tmp)
		arr = append(arr, tmp)
	}
	//fmt.Println(arr)	// check array
	for i:=0; i<K; i++{	// add initial 0 ~ K - 1 temperature
		sum += arr[i]
	}
	var max int = sum
	for i:=0; i<N-K; i++{
		sum -= arr[i]	// sub i temperature
		sum += arr[i+K]	// add i + K temperature
		//fmt.Println(arr[i], arr[i+K], sum)	// check sub temperature, add temperature and sum
		if sum > max{	// calculate max value
			max = sum
		}
	}
	fmt.Println(max)	// print max value
}