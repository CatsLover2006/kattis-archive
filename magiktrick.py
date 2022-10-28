# Solving Kattis Magic Trick
# By Chance Parsons AKA Half-Qilin

import sys

# Debug
# from io import StringIO
# data = u"""\
# robust
# """
# sys.stdin = StringIO(data)
# End Debug

rawInput = sys.stdin.read()
string = rawInput.strip()
chars = []
for i in string:
    chars.append(i)
i = 0
b = True
while i < len(chars):
    j = i
    while j < len(chars) - 1:
        j += 1
        if chars[j] == chars[i]:
            print(0)
            b = False
            break
    if chars[j] == chars[i]:
        break
    i += 1
if b:
    print(1)
