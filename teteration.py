# Solving Kattis Tetration
# By Chance Parsons AKA Half-Qilin

import sys

# Debug
'''from io import StringIO
data = u"""\
1.5
"""
sys.stdin = StringIO(data)'''
# End Debug

rawInput = sys.stdin.read()
print(float(rawInput.strip()) ** (1 / float(rawInput.strip())))
