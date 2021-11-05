def parse_argv(args):
    usage_str = f"Usage: " \
                f"Input from file: {args[0]} -f <input file> -o <output file>" \
                f"Random input: {args[0]} -r <number of elements> -o <output file>"

    try:
        ofile = args[args.index("-o") + 1]
        if '-f' in args:
            infile = args[args.index("-f") + 1]
            return {
                "ofile": ofile,
                "is_random": False,
                "infile": infile
            }
        elif '-r' in args:
            num = int(args[args.index("-r") + 1])
            return {
                "ofile": ofile,
                "is_random": True,
                "infile": None,
                "number_of_elements": num
            }
        else:
            raise Exception()
    except Exception:
        print(usage_str)
