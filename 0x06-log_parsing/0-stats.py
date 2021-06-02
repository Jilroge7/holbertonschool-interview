#!/usr/bin/python3
"""
Python script takes URL from stdin and compute exact metrics
"""
import sys
import re
import traceback


if __name__ == "__main__":

    codes = [200, 301, 400, 401, 403, 404, 405, 500]
    file_list = []
    stat_dict = {}
    line_num = 0
    total = 0
    stat_regex = '\s+\d+\s+'
    file_regex = '\s+\d+\s+(.*)'

    for line in sys.stdin:
        if line == "":
            continue
        line_num += 1
        total += sys.argv[5]
        if line_num % 10 == 0:
            line_num = 0
            print("File size: {}".format(total))

        for i in codes:
            if i not in codes[i] or type(i) != int:
                continue

    
    
    print("{}: {}".format(sys.argv[4]))
