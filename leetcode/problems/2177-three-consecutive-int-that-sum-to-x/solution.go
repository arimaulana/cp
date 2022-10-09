package main

import (
	"fmt"
	"bufio"
	"os"
)

var (
	reader *bufio.Reader = bufio.NewReader(os.Stdin)
	writer *bufio.Writer = bufio.NewWriter(os.Stdout)
)

func scanf(f string, a ...interface{}) (int, error) { return fmt.Fscanf(reader, f, a...) }
func printf(f string, a ...interface{}) (int, error) { return fmt.Fprintf(writer, f, a...) }

func sumOfThree(num int64) []int64 {
	if (num % 3 != 0) {
		return []int64{}	
	}

	return []int64{(num / 3) - 1, num / 3, (num / 3) + 1}
}

func main() {
	defer writer.Flush()

	var T int

	if _, err := scanf("%d\n", &T); err != nil {
		printf("error on read T: %v\n", err)	
		return
	}

	for tc := 1; tc <= T; tc++ {

		var x int64
		if _, err := scanf("%d\n", &x); err != nil {
			printf("error read num: %v\n", err)
			return
		}

		nums := sumOfThree(x)

		printf("Case #%d:\n", tc)
		for i, n := 0, len(nums); i < n; i++ {
			if i + 1 == n {
				printf("%d", nums[i])
			} else {
				printf("%d ", nums[i])
			}
		}
		printf("\n")
		
	}

}
