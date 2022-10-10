package main

import (
	"flag"
	//"bufio"
	"os"
	"fmt"
	"log"
	"runtime/pprof"
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

	var T int
	fmt.Scan(&T)

	for tc := 1; tc <= T; tc++ {
		var n int
		fmt.Scan(&n)
		arr := make([]int, n)
		
		for j := 0; j < n; j++ {
			fmt.Scan(&arr[j])
		}

		fmt.Printf("Case #%d:\n", tc);
	}
}
