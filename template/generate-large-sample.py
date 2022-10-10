# this code is just for generate large sample
# it is used for profiling scan/read input in each lang
with open("large-sample.in", "w") as f:
    f.write("1\n")
    f.write("2000000\n")
    for i in range(20000000):
        f.write("1 ")
