package main

import "fmt"

// 返回一个“返回int的函数”
func fibonacci() func() int {
	a := 0
	b := 0
	return func() int {
		if (a == 0) && (b == 0) {
			b = 1
			return a
		}
		c := a + b
		a = b
		b = c
		return a
	}
}

func main() {
	f := fibonacci()
	for i := 0; i < 10; i++ {
		fmt.Println(f())
	}
}
