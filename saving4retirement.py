# Solving Kattis Saving For Retirement
# By Chance Parsons AKA Half-Qilin

import sys

# Debug
#from io import StringIO
#data = u"""\
#20 25 5 20 10
#"""
#sys.stdin = StringIO(data)
# End Debug

rawInput = sys.stdin.read()
inputs = rawInput.split()
v1 = (int(inputs[1]) - int(inputs[0])) * int(inputs[2])
v2 = 0
yrs = 0
while v2 <= v1:
    v2 += int(inputs[4])
    yrs += 1
print(int(inputs[3]) + yrs)
