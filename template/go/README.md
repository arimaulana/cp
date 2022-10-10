Profiling Step
1. compile the code `go build -o main`
2. generate input file, `python3 generate-large-sample.py`
3. run the compiled program againts the input file generated, `./main -cpuprofile=out.prof < large_sample`
4. open profile tool, `go tool pprof main out.prof`

Detail about profiling is on
- [Improving golang input read](https://codeforces.com/blog/entry/94245)

