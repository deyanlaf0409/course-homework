def find_repeated_numbers(nums):
    # 1. Write a function that prints all duplicate items from a given list
    # Input: [10, 20, 30, 30, 60, 40, 30, 60, 70, 80]
    # Expected Output: [30, 60]
    size = len(nums)
    repeated = []
    for i in range(size):
        k = i + 1
        for j in range(k, size):
            if nums[i] == nums[j] and nums[i] not in repeated:
                repeated.append(nums[i])
    return repeated

nums = [10, 20, 30, 30, 60, 40, 30, 60, 70, 80]
print(find_repeated_numbers(nums))


def fibonacci(fnum):
    # 2.Write a program to find nth fibonacci number with recursion?
    # A Fibonacci series is a series in which next number is a sum of previous two numbers.
    #
    # For example : 0, 1, 1, 2, 3, 5, 8
    # First Fibonacci number is 0, second is 1, third is 2 and etc.
    # Input: fib(2)
    # Output: 1
    # After implemetation of this task: Write a Python program to check if a given number is a Fibonacci number or not.
    # Input: 8
    # Output: True
   if fnum <= 1:
       return fnum
   else:
       return(fibonacci(fnum-1) + fibonacci(fnum-2))

fnum = 8
print(fibonacci(fnum))


def count_nums(my_list):
    # 3. Write a program to iterate a given list and count the occurrence of each element and create a dictionary to show the count of each element.
    # Input : [11, 45, 8, 11, 23, 45, 23, 45, 89]
    # Output : {11: 2, 45: 3, 8: 1, 23: 2, 89: 1}
    frequency = {}
    for item in my_list:
        if (item in frequency):
            frequency[item] += 1
        else:
            frequency[item] = 1

    for key, value in frequency.items():
        print("% d : % d" % (key, value))

my_list = [11, 45, 8, 11, 23, 45, 23, 45, 89]
print(count_nums(my_list))


import string
def average_word_length(sentence):
    # 4. Write a function. For a given sentence, return the average word length.
    # Note: Remember to remove punctuation first.

    # sentence1 = "Hi all, my name is Tom...I am originally from Australia."
    # sentence2 = "I need to work very hard to learn more about algorithms in Python!"

    # Output:
    # 4.2
    # 4.08

    sentence = sentence.translate(str.maketrans('', '', string.punctuation))

    words = sentence.split()

    total_length = 0
    for word in words:
        total_length += len(word)

    average_length = total_length / len(words)

    return average_length

sentence1 = "Hi all, my name is Tom...I am originally from Australia."
sentence2 = "I need to work very hard to learn more about algorithms in Python!"

print(average_word_length(sentence1))
print(average_word_length(sentence2))


def ismonotone(a):
    # 5. Write a program that check given an array of integers is monotonic or not.
    # A = [6, 5, 4, 4]
    # B = [1, 1, 1, 3, 3, 4, 3, 2, 4, 2]
    # C = [1, 1, 2, 3, 7]
    # Output:
    # True
    # False
    # True
    n = len(a)
    if n == 1:
        return True
    else:
        if all(a[i]>=a[i+1] for i in range(0, n-1) or a[i] <= a[i+1] for i in range(0, n-1)):
            return True
        else:
            return False

A = [6, 5, 4, 4]
B = [1, 1, 1, 3, 3, 4, 3, 2, 4, 2]
C = [1, 1, 2, 3, 7]
print(ismonotone(A))
print(ismonotone(B))
print(ismonotone(C))


def isarmstrong(number): # maybe name of function is: is_armstrong_number
    # 6. Write a program to check a number is Armstrong or not in python programming language
    # What is Armstrong Number?
    # It is a number which is equal to the sum of cube of its digits.
    # For eg: 153, 370 etc.
    # Lets see it practically by calculating it,
    #
    # Suppose I am taking 153 for an example
    #
    # First calculate the cube of its each digits
    #
    #   1^3 = (1*1*1) = 1
    #
    #   5^3 = (5*5*5) = 125
    #
    #   3^3= (3*3*3) = 27
    #
    # Now add the cube
    #
    #   1+125+27 = 153
    #
    # It means 153 is an Armstrong number.
    #
    temp = number
    sum = 0
    while temp != 0:
        digit = temp % 10
        sum += digit**len(str(number))
        temp = temp // 10

    return sum == number # good, but no use str()

number = 153
print(isarmstrong(number))


def find_hcf(a, b):
    # 7. Write a python program to find h.c.f. of two numbers
    #
    # For any two numbers that are inputs given by the user, we have to calculate and print the h.c.f. of that numbers.
    # Case1: If the user inputs the numbers 4 and 6.
    #
    #
    #             then the output should be ‘2’.
    #
    # Case2: If the user inputs the numbers 5 and 7.
    #
    #             then the output should be ‘1’.
    hcf = 1
    for i in range(1, min(a, b)):
        if a % i == 0 and b % i == 0:
            hcf = i
    print("Hcf of", a, "and", b, "is", hcf)


#a, b = input("Enter a and b:").split()
#find_hcf(int(a), int(b))


def find_lcm(x, y):
    # selecting the greater number
    # 8 . Write a Python program to find l.c.m. of two numbers
    # For any two numbers given by the user as an input, we have to calculate and print the l.c.m. of that numbers using python programming language.
    # Case1: If the user inputs the numbers 4 and 6.
    #
    #              then the output should be ‘12’.
    #
    # Case2: If the user inputs the numbers 5 and 7.
    #
    #             then the output should be ‘35’.
    if x > y:
        greater = x
    else:
        greater = y
    while(True):
        if((greater % x == 0) and (greater % y == 0)):
            lcm = greater
            break
        greater += 1
    return lcm

#x, y = input("Enter x and y:").split()
#print(find_lcm(int(x), int(y)))



def print_longest_word(words):
    # 9. Write a Python function that takes a list of words and return the longest word and the length of the longest one.
    # Input: ["Python", "Exercises", "Great"]
    # Output:
    # Longest word:  Exercises
    # Length of the longest word:  9
    max = 0
    for i in range(len(words)):
        if len(words[i]) > len(words[max]):
            max = i

    print("Longest word:", words[max])
    print("Length of the longest word:", len(words[max]))

words = ["Python", "Exercises", "Great"]
print_longest_word(words)


def find_strong_num(num):
    # 10. Write a Python Program to Check if a Number is a Strong Number?
    # A Strong number is a special number whose sum of the all digit factorial should be equal to the number itself.
    #
    # For example - The given number is 145, we have to pick each digit and find the factorial 1! = 1, 4! = 24, and 5! = 120.
    #
    # Now, we will do the sum of the factorials, we get 1+24+120 = 145, which is exactly the same as the given number.
    # So we can say that 145 is a strong number.
    sum = 0
    temp = num
    while (num):
        i = 1
        fact = 1
        rem = num % 10
        while (i <= rem):
            fact = fact * i
            i = i + 1
        sum = sum + fact
        num = num // 10
    return sum == temp

num = 145
print(find_strong_num(num))
