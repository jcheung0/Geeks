package main

import (
	"fmt"
	"math"
)

func isPrime(value int) bool {
	for i := 2; i <= int(math.Floor(float64(value)/2)); i++ {
		if value%i == 0 {
			return false
		}
	}

	return value > 1
}

func main() {

	fmt.Println(isPrime(10))
	fmt.Println("hello world!")
}
