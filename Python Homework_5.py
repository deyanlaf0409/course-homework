def get_min_of_three(x, y, z):
    # finish the function by adding code that would return the minimum of x, y and z
    # Use another function to find the minimum of y and z
    # Do not use the builtin min()
    def get_min_of_two(a, b): # missng docstirng for this function
        if a > b:
            return b
        else:
            return a
    return get_min_of_two(x, get_min_of_two(y, z))

# good solution
print(get_min_of_three(45, 23, 34))



def reverse_string(string):
    # Add code that would return reversed string
    # Do not use slice notation or reverse()

    reversed_string = ""
    i = len(string) - 1
    while i >= 0:
        reversed_string += string[i]
        i -= 1
    return reversed_string

# Well done, Deyan! :)
string = "Reverse this"
print(reverse_string(string))



def is_in_range(n, lower_bound, upper_bound):
    #3.Write a function that would return if given int is within a certain range
    return lower_bound <= n <= upper_bound
# Well done! But what is the output if lower_bound > upper_bound?
print(is_in_range(5,1,5))



def print_squares_list():
    # 4. Write a Python function to create and print a list where the values are square of numbers
    squares = [i**2 for i in range(1, 31)] # you can directly use sqrt from math library, best solution with list comprehension
    return squares # print, no return 
print(print_squares_list())



import dataclasses as dc

@dc.dataclass
class Level:
    level: int
    items: list

def get_levels(_list: list, level: int = 0):
    # **5. Write a function that accepts multidimensional list and prints out list elements nested by
    # their dimension:
    # Example: [[1, 2, [3, 4, [6]]], [[], [], [3, 4, 5]]]
    items = [item for item in _list if not isinstance(item, list)]
    levels = []

    if items:
        levels.append(Level(level, items))

    for lower_list in (get_levels(item, level + 1) for item in _list if isinstance(item, list)):
        levels.extend(lower_list)
    return levels

def print_list(_list: list):
    levels = get_levels(_list)
    min_level = min(level.level for level in levels)

    for level in levels:
        print("  " * (level.level - min_level), ", ".join(map(str, level.items)), sep="")

print("mylst:")
mylst = [[1, 2, [3, 4, [6]]], [[], [], [3, 4, 5,]]]
print_list(mylst)


from functools import wraps
from datetime import datetime

# 1. Write a decorator that would be used on a function that return a number. If today is wednesday,
# friday, or sunday, the function should return the number decreased byt 1.5.

def modify_return_value(func):
    @wraps(func)
    def wrapper(*args, **kwargs):

        day_of_week = datetime.now().weekday()#this line gets current day of the week as an integer # Yes, it's good

        if day_of_week == 2 or day_of_week == 4 or day_of_week == 6:
            return func(*args, **kwargs) - 1.5 # func(*args, **kwargs) can be variable like num = func(*args, **kwargs) and can directly use.
        else:
            return func(*args, **kwargs)
    return wrapper

@modify_return_value
def get_number():
    # missing docstring
    return 10 # better return number and number to be global variable or constant

print(get_number())



from functools import wraps

def login(func):
    # 2. Write decorator login_required that would be used to check if a user is logged, and if not,
    # it should print out "Login required", and if user is logged, the decorated function should print
    # "Welcome"
    # For user you can use {'name': 'User name', 'logged': True / False}
    @wraps(func)
    def wrapper(*args, **kwargs):
        user = kwargs.get('user', None) # Why this?
        if not user or not user['logged'] or not user["name"]:
            print('Login required')
        else:
            print('Welcome')
            return func(*args, **kwargs)# no need return, only print
    return wrapper

@login
def user_data(user):
    # missing docstrings
    print(user["name"])

user_data(user = {'name': "Nick", 'logged': True})



def mary_spring(func):
    # 3. Write a decorator that prints out "Mary Spring" whenever the decorated function is called.
    def wrapper(*args, **kwargs):
        print("Mary Spring")
        return func(*args, **kwargs) # no return, only call the function
    return wrapper

@mary_spring
def my_function():
    # missing docstring
    print("Eve Autumn")

my_function()



from contextlib import contextmanager
# Generator & decorator ***
# Define looking_glass context manager that should print out text reversed
# version while Context manager is acctive

# with looking_glass():
#     print('Pesho, Gosho, Mincho')
# Output: ohcniM ,ohsoG ,ohseP
@contextmanager
def looking_glass():
    original_text = "Pesho, Gosho, Mincho"
    try:
        reversed_text = original_text[::-1]
        print(reversed_text) # this is for check?
        yield
    finally:
        print(original_text)

with looking_glass():
    print("Pesho, Gosho, Mincho")

# Well done!

import random
from functools import wraps

def repeat_decorator(func):
    # 1 . Write a decorator that would be used on a function that print a  random number from 1 to 100
    # and decorators should be repeated n times function.

    # Input : print_random_int --> While repeat_decorator(times=5)
    # Output: 15, 20, 18, 13, 92
    @wraps(func)
    def wrapper(times): # ok, but in our case repet decorators should to get times:) one extra function before repeat_decorators.
        for i in range(times):
            func()
    return wrapper

@repeat_decorator
def print_random_int():
    print(random.randint(1, 100))

print_random_int(5)


