package main

import (
	"bufio"
	"flag"
	"fmt"
	"log"
	"os"
	"runtime/pprof"
	"strconv"
	"strings"
)

var cpuprofile = flag.String("cpuprofile", "", "write cpu profile to file")

func main() {
	flag.Parse()

	if *cpuprofile != "" {
		f, err := os.Create(*cpuprofile)
		if err != nil {
			log.Fatal(err)
		}
		pprof.StartCPUProfile(f)
		defer pprof.StopCPUProfile()
	}

	in := bufio.NewReader(os.Stdin)
	T := readInt(in)

	for tc := 1; tc <= T; tc++ {
		n := readInt(in)
		_ = readListInt(in)
		fmt.Printf("Case #%d:\n", tc)
		fmt.Println("N: ", n)
	}
}

func readInt(in *bufio.Reader) int {
	nStr, _ := in.ReadString('\n')
	nStr = strings.ReplaceAll(nStr, "\r", "")
	nStr = strings.ReplaceAll(nStr, "\n", "")
	n, _ := strconv.Atoi(nStr)
	return n
}

func readLineNums(in *bufio.Reader) []string {
	line, _ := in.ReadString('\n')
	line = strings.ReplaceAll(line, "\r", "")
	line = strings.ReplaceAll(line, "\n", "")
	nums := strings.Split(line, " ")

	return nums
}

func readListInt(in *bufio.Reader) []int {
	numbs := readLineNums(in)
	arr := make([]int, len(numbs))
	
	for i, n := range numbs {
		val, _ := strconv.Atoi(n)
		arr[i] = val
	}

	return arr
}

func readListInt64(in *bufio.Reader) []int64 {
	nums := readLineNums(in)
	arr := make([]int64, len(nums))

	for i, n := range nums {
		val, _ := strconv.ParseInt(n, 10, 64)
		arr[i] = val
	}

	return arr
}
