
from fraction import fraction
from complex import complex
from polar import polar
from argv_parse import parse_argv
from random_in import random_input
from heapsort import heapsort

from sys import argv

if __name__ == '__main__':
    classes = [complex, fraction, polar]

    args = parse_argv(argv)
    ofile = open(args["ofile"], 'w')

    arr = list()
    if not args["is_random"]:
        file = open(args["infile"], 'r')
        while file:
            try:
                r = file.readline()
                if r == '':
                    break
                class_number = int(r)
                cls = classes[class_number - 1]
                class_args = [float(x) for x in file.readline().split()]
                arr.append(cls(*class_args))
            except Exception as e:
                print(e.__repr__(), file=ofile)
                break
    else:
        for _ in range(args["number_of_elements"]):
            arr.append(random_input(classes))

    print(f"Array contains {len(arr)} elements.", file=ofile)
    for i, el in enumerate(arr):
        print(f"{i}: " + str(el), end=' ', file=ofile)
    print(file=ofile)

    print("Sorted array:", file=ofile)

    arr = heapsort(arr, key=lambda x: x.rational_repr())

    print(f"Array contains {len(arr)} elements.", file=ofile)
    for i, el in enumerate(arr):
        print(f"{i}: " + str(el), end=' ', file=ofile)
    print(file=ofile)
