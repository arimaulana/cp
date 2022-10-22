### Format Directory
- {platform}
    - {problem-set}
        - {problem-number}-{problem-name}
- {platform}
    - {chapter}
        - {problem-set}
            - {problem-number}-{problem-name}

i.e. it could be either
- leetcode/problems/189-rotate-array
- uva/ch01-cp/problem-1.3.3/p12577-hajj-e-akbar

### How to re-run the solution

1. Go to the problem directory, i.e. uva/{chapter}/{problemset}, leetcode/problems/{problem}
2. (optional) compile solution
    - c, `./compile.sh {problem}.cpp`
    - c++, `g++ solution.cpp -std=c++17 -pthread -O2`
    - go, `go build {problem}.go`
    - rust, `rustc -C opt-level=3 -o {problem} {problem}.rs`
    - java, `javac Solution.java`
3. run solution
    - c, `./a.out < {problem}.in > {problem}.output`
    - c++, `./a.out < problem.in > problem.output`
    - go, `./{problem} < {problem}.in > {problem}.output`
    - rust, `./{problem} < {problem}.in > {problem}.output`
    - java, `java -Xms896m -Xmx896m -Xss64m -XX:+UseSerialGC Solution < {problem}.in > {problem}.output`
    - python, `python3 {problem}.py < {problem}.in > {problem}.output`
    - typescript, `ts-node {problem}.ts < {problem}.in > {problem}.output`
4. run `diff -s {problem}.out {problem}.output`

if from step 4 u got the identical file, then the problem already cover the test case given ({problem}.in).
the more test case the more your code fulfilled the required constraint.

Tips:
- add below lines to your shell rc file, useful for compiling the solution
```
alias cp-java="java -Xms896m -Xmx896m -Xss64m -XX:+UseSerialGC"
alias cp-rust="rustc -C opt-level=3 -o solution"
alias cp-cpp="g++ -std=c++17 -pthread -O2 -o solution"
alias cp-c="gcc -pthread -lm -O2 -o solution"
```

### Target
- compete in codejam and included in 2nd round for codejam 2023
- fluently coding in 7 different language specifically for competitive programming (c/c++, go, rust, ts, java, python)

### Current Small Step
- at minimum 1 easy problem each day
- complete 100 days challenge of solving problem (if no any urgent needed that require me to focus on the situation)
- use different lang in each day, but still can use other lang if stuck on the problem like problem that require to use big int, its hard to implement in c, and more easy to use ts or java, or in the case that the algo was right but still got TLE due to lang usage (ts is chance to get TLE is higher than c/c++).
    - Go day (monday)
    - Ts day (tuesday) (can use js too)
    - Java day (wednesday)
    - Rust day (thursday) (right now skip it, just use another lang, use and learn rust if and only if condition already stable)
    - Py day (friday)
    - C++ day (saturday)
    - C day (sunday)

### Platform
- LC `LeetCode`
    - P `Problem`
    - WC `Weekly Contest`
    - BC `Biweekly Contest`
- KS `KickStart`
    - YYYY-N (Year-Round format, i.e. 2022-G)
- CJ `CodeJam`
    - YYYY-NQ (Y = Year, N = Round and Optional Q for Sub Round format, i.e. 2022-QR, 2022-1A, 2022-3)
- UVA `UVA`
    - P `Problem`
- KAT `Kattis`
    - P `Problem`

### Unsolved Task
- [ ] LC - P - 1766 - tree of coprimes
- [ ] LC - P - 108 - convert sorted array to binary search tree
- [ ] KS - 2022-G - happy subarray
    - [ ] test set 2, still got TLE
- [ ] LC - P - 189 - rotate array
    - [ ] linear time O(n) without additional space O(1)

### 100 Days Challenge
- [x] Day #011:
    - [x] LC - P - 205 - isomorphic strings
- [ ] Day #010:
    - [ ] LC - P - 1766 - tree of coprimes
- [x] Day #009:
    - [x] KS - 2022-G - happy subarray (test set 1)
    - [x] KS - 2022-G - walktober
- [ ] Day #008:
    - [ ] LC - P - 108 - convert sorted array to binary search tree
- [x] Day #007:
    - [x] LC - P - 1328 - break a palindrome (from day #5)
- [x] Day #006: Java Day
    - [x] LC - P - 9 - palindrome number
- [x] Day #005:
    - [ ] LC - P - 1328 - break a palindrome (still got WA)
- [x] Day #004: Go Day
    - [x] LC - P - 4 - median of two sorted arrays
- [x] Day #003:
    - [x] LC - P - 2177 - find three consecutive integers that sum to a given number
- [x] Day #002:
    - [x] LC - P - 26 - remove duplicate from sorted array
- [x] Day #001:
    - [x] LC - P - 189 - rotate array
