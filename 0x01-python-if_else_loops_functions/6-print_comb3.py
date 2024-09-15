#!/usr/bin/python3
for m in range(9):
    for n in range(m + 1, 10):
        if m != 8:
            print("{}{}".format(m, n), end=", ")
        else:
            print("{}{}".format(n, n))
