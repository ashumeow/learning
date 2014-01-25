#!/usr/bin/python3

import random
from time import sleep

def get_direction():
    mu = 1/10
    factor = 1/4

    r = random.random()
    retFactor = 1-factor
    if r < mu:
        return retFactor
    elif r > (1-mu):
        return 1/retFactor
    else:
        return 1

def print_star():
    print("$", end="")

def print_line(n):
    lineLength = round(n)
    for i in range(min(100,lineLength)):
        print_star()
    print("")

length = 20
while(length >= 1):
    print_line(length)
    length *= get_direction()
    sleep(0.015)


