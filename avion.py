# Solving Kattis Avion
# By Chance Parsons AKA Half-Qilin

import sys

# Debug
'''from io import StringIO
data = u"""\
47-FBI
BOND-007
RF-FBI18
MARICA-13
13A-FBILL
"""
sys.stdin = StringIO(data)'''
# End Debug

rawInput = sys.stdin.read()
cia = ""
pos = 1
cont = False
inputs = rawInput.splitlines()
for i in inputs:
    if i.find("FBI") != -1:
        cia = str(cia + str(pos) + " ")
        cont = True
    pos += 1

if not cont:
    print("HE GOT AWAY!")
else:
    print(cia)
