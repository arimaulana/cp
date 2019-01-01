How to re-run the solution

1. Go to the problem directory, i.e. uva/{chapter}/{problemset}
2. ./compile.sh {problem}.cpp
3. ./a.out < {problem}.in > {problem}.output
4. diff -s {problem}.out {problem}.output

if from step 4 u got the identical file, then the problem already cover the test case given ({problem}.in).
the more test case the more your code fulfilled the required constraint.
