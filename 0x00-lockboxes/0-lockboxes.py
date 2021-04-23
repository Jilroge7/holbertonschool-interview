#!/usr/bin/python3
"""
method that determines if all the boxes can be opened
"""


def canUnlockAll(boxes):
    """
    boxes is a lists of lists--
    a key with the same number as a box opens that box--
    all keys are assumed positive and there may be keys with no boxes--
    the first box[0] is unlocked--
    returns True if all boxes can be opened, other wise False--
    """
    unlocked = [0]
    keys = boxes[0]
    for key in keys:
        if key not in unlocked:
            try:
                keys.extend(boxes[key])
                unlocked.append(key)
            except:
                continue
    if len(unlocked) == len(boxes):
        return True
    return False
