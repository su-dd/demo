package main

import (
	"fmt"
	"math"
)

type ErrNegativeSqrt float64

func (e ErrNegativeSqrt) Error() string {
	if float64(e) < 0 {
		return fmt.Sprint("cannot Sqrt negative number:", float64(e))
	}
	return ""
}

func Sqrt(x ErrNegativeSqrt) (float64, string) {

	if x.Error() != "" {
		return 0, x.Error()
	}

	z := 0.0
	y := float64(x / 2)

	for math.Abs(z-y) > 0.01 {
		z = y
		y -= (z*z - float64(x)) / (2 * z)
		fmt.Printf("值： %v, 修改量： %v \n", y, math.Abs(z-y))
	}

	return z, ""
}

func main() {
	fmt.Println(Sqrt(2))
	fmt.Println(Sqrt(-2))
}
