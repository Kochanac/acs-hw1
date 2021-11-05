import random
from random import randint


def random_input(classes):
    return random.choice(classes)(randint(-1000, 1000) / 10, randint(-1000, 1000) / 10)
