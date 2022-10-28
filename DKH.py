# Solving Kattis Death Knight Hero
# By Chance Parsons AKA Half-Qilin

import sys

# Debug
'''
from io import StringIO
data = u"""\
3
DCOOO
DODOCD
COD
"""
sys.stdin = StringIO(data)
'''
# End Debug

rawInput = sys.stdin.read()
inputs = rawInput.splitlines()
inputs.pop(0)
i = 0
for j in inputs:
    if j.find("CD") == -1:
        i += 1
print(i)
