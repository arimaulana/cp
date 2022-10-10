package main

import (
	"bufio"
	"os"
	"fmt"
	"log"
	"strconv"
	"strings"
)

var (
	in = bufio.NewReader(os.Stdin)
)

func findMedianSortedArrays(nums1 []int, nums2 []int) float64 {
	nums := make([]int, len(nums1) + len(nums2))

	n1 := len(nums1)
	n2 := len(nums2)
	i := 0
	i1 := 0
	i2 := 0
	for ; i1 < n1 || i2 < n2; {
		if i1 < n1 && i2 < n2 {
			if nums1[i1] < nums2[i2] {
				nums[i] = nums1[i1]
				i++
				i1++
			} else {
				nums[i] = nums2[i2]
				i++
				i2++
			}
		} else if i1 < n1 {
			nums[i] = nums1[i1]
			i++
			i1++
		} else if i2 < n2 {
			nums[i] = nums2[i2]
			i++
			i2++
		}
	}

	if i % 2 != 0 {
		return float64(nums[(i - 1) / 2])
	}
	return float64((nums[(i - 1) / 2] + nums[(i - 1) / 2 + 1])) / float64(2);
}

func main() {
	T := readInt(in)

	for tc := 1; tc <= T; tc++ {

		nums1 := readLineInt(in)
		nums2 := readLineInt(in)

		m := findMedianSortedArrays(nums1, nums2)
		fmt.Printf("Case #%d:\n", tc)
		fmt.Printf("%.5f\n", m)
	}
}

func readLine(in *bufio.Reader) []string {
	line, _ := in.ReadString('\n')
	line = strings.ReplaceAll(line, "\r", "")
	line = strings.ReplaceAll(line, "\n", "")

	datas := strings.Split(line, " ")
	return datas
}

func readInt(in *bufio.Reader) int {
	num := readLine(in)
	if num[0] == "" {
		log.Fatal("no data")
	}
	n, _ := strconv.Atoi(num[0])
	return n
}

func readLineInt(in *bufio.Reader) []int {
	nums := readLine(in)
	if nums[0] == "" {
		return make([]int, 0)
	}
	arr := make([]int, len(nums))

	for i, n := range nums {
		val, _ := strconv.Atoi(n)
		arr[i] = val
	}

	return arr;
}
