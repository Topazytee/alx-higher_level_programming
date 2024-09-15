#!/usr/bin/python3
for n in range(ord('z'), ord('a') - 1, -2):
    print("{:c}{:c}".format(n, n - 33), end="")
