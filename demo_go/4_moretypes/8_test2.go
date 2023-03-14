package main

import (
	"fmt"
	"io"
)

type rot13Reader struct {
	r io.Reader
}

// func (rot *rot13Reader) Read(b []byte) (int, error) {

// }

func main() {
	// s := strings.NewReader("Lbh penpxrq gur pbqr!")
	fmt.Println("11")
	// r := rot13Reader{s}
	// io.Copy(os.Stdout, &r)
}
