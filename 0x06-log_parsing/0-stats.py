#!/usr/bin/python3
"""
Python script takes URL from stdin and compute exact metrics
"""
import sys
import traceback


if __name__ == "__main__":

    codes = ["200", "301", "400", "401", "403", "404", "405", "500"]
    file_list = []
    stat_dict = {}
    line_num = 0
    file_size = 0
    line_regex = '.+ .+ \d+'

    for stat in codes:
        stat_dict[stat] = 0
    try:
        for line in sys.stdin:
            if line == "":
                pass
            file_list = line.split(" ")
            flist_length = len(file_list)
            if flist_length < 9:
                pass
            line_num += 1
            file_size += int(file_list[-1])
            if line_num % 10 == 0:
                print("File size: {}".format(file_size))
                line_num = 0
            for key, value in stat_dict.items():
                if stat_dict[key] == file_list[7]:
                    value += 1
                    print("{}: {}".format(key, value))
    except(KeyboardInterrupt):
        for line in sys.stdin:
            if line_num % 10 == 0:
                print("File size: {}".format(file_size))
            line_num += 1
