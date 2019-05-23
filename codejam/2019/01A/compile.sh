#!/bin/bash

filename=$1

g++ $filename -std=c++14 -pthread -O3
