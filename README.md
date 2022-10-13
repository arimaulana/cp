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

### Target
- compete in codejam and included in 2nd round for codejam 2023
- fluently coding in 7 different language specifically for competitive programming (c/c++, go, rust, ts, java, python)

### Current Small Step
- at minimum 1 easy problem each day
- complete 100 days challenge of solving problem (if no any urgent needed that require me to focus on the situation)
- use different lang in each day, but still can use other lang if stuck on the problem like problem that require to use big int, its hard to implement in c, and more easy to use ts or java, or in the case that the algo was right but still got TLE due to lang usage (ts is chance to get TLE is higher than c/c++).
    - Go day (monday)
    - Ts day (tuesday)
    - Java day (wednesday)
    - Rust day (thursday)
    - Py day (friday)
    - C++ day (saturday)
    - C day (sunday)

### Unsolved Task
- [ ] 189 - rotate array
    - [ ] linear time O(n) without additional space O(1)
- [ ] 1328 - break a palindrome

### 100 Days Challenge - Start at Friday, 7 Oct '22
- [ ] Day #7: Rust Day
    - [ ] pick problem first
- [x] Day #6: Java Day
    - [x] 9 - palindrome number
- [x] Day #5: Ts Day
    - [ ] 1328 - break a palindrome (still got WA)
- [x] Day #4: Go Day
    - [x] 4 - median of two sorted arrays
- [x] Day #3: C Day
    - [x] 2177 - find three consecutive integers that sum to a given number
- [x] Day #2: C++ Day
    - [x] 26 - remove duplicate from sorted array
- [x] Day #1: Py Day
    - [x] 189 - rotate array
