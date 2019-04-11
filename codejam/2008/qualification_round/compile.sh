#!/bin/bash

filename=$1

g++ $filename -lm -lcrypt -O2 -std=c++11 -pipe -DONLINE_JUDGE
