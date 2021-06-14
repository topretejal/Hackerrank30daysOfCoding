#!/bin/python

import math
import os
import random
import re
import sys



if __name__ == '__main__':
    N = int(raw_input().strip())
    ll=[]
    for N_itr in xrange(N):
        first_multiple_input = raw_input().rstrip().split()

        firstName = first_multiple_input[0]

        emailID = first_multiple_input[1]
        if(re.search('@gmail.com',emailID)):
            ll.append(firstName)
    ll.sort()
    for i in ll:
        print(i)
