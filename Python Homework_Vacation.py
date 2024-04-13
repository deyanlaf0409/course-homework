import re
def text_match(text):
    """
        Write a Python program that matches a string that has an 'a' followed by anything, ending in 'b'
        Example:
        Input : "aabbbbd"
        Output: Not matched!
        param: text
        return: Not matched or matched
    """
    pattern = r"^a.*b$"
    if re.match(pattern, text):
        return "Matched"
    else:
        return "Not matched"


text = "aabbbbd"
print(text_match(text))


def text_match_second(txt, new_txt):
    """
        Write a Python program to concatenate the consecutive numbers in a given string.
        Example:
        Input : "Enter at 1 20 Kearny Street. The security desk can direct you to floor 1 6. Please have your identification ready."
        Output: "Enter at 120 Kearny Street. The security desk can direct you to floor 16. Please have your identification ready."
        param: txt, new_txt
        return: new_txt
    """
    pattern = r"(?<=\d)\s(?=\d)"
    # (?<=\d) means positive look-behind for a digit (\d)
    # \s means match a space character
    # (?=\d) means positive look-ahead for a digit
    replacement = ""
    new_txt = re.sub(pattern, replacement, txt)
    return new_txt

txt = "Enter at 1 20 Kearny Street. The security desk can direct you to floor 1 6. Please have your identification ready."
new_txt = ""
print(text_match_second(txt, new_txt))



def factorial_number(n):
    """
            Write a Python function to calculate the factorial of a number (a non-negative integer).
            The function accepts the number as an argument.
            Example:
            Input : 6
            Output: 720
            :param number:
            :return: n factorial
    """
    if n <= 0:
        return "works only with positive number"

    result = 1
    while n-1 > 0:
        result *= n * (n-1)
        n -= 2
    return result

n = 6
print(factorial_number(n))

#Uploading the rest of the homework soon...

def print_duplicates(list):
    # 1. Write a function that prints all duplicate items from a given list
    # Input: [10, 20, 30, 30, 60, 40, 30, 60, 70, 80]
    # Expected Output: -
    #
    # [20, 30, 60]

    counts = {}

    for element in list:
        if element in counts:
            counts[element] += 1
        else:
            counts[element] = 1

    for element in counts:
        if counts[element] > 1:
            print(element)

list = [10, 20, 30, 30, 60, 40, 30, 60, 70, 80]
print_duplicates(list)


def sum_range(start, end):
    # 2.Write a program to create function to calculate the sum of numbers from random number to random number (0-100)
    total = 0

    for i in range(start, end + 1):
        total += i

    return total

start = 2
end = 6
if start > end:
    temp = start
    start = end
    end = temp

print(sum_range(start, end))


def count_occurrences(list):
    # 3.Write a program to iterate a given list and count the occurrence of each element and create a dictionary to show the count of each element.
    # Input : [11, 45, 8, 11, 23, 45, 23, 45, 89]
    # Output : {11: 2, 45: 3, 8: 1, 23: 2, 89: 1}

    counts = {}
    #Just like the previous one
    for element in list:
        if element in counts:
            counts[element] += 1
        else:
            counts[element] = 1

    return counts

list = [11, 45, 8, 11, 23, 45, 23, 45, 89]
counts = count_occurrences(list)
print(counts)



import string
def average_word_length(sentence):
    # 4. Write a function. For a given sentence, return the average word length.
    # Note: Remember to remove punctuation first.
    # sentence1 = "Hi all, my name is Tom...I am originally from Australia."
    # sentence2 = "I need to work very hard to learn more about algorithms in Python!"
    # Output:
    # 4.2
    # 4.08

    sentence = sentence.translate(str.maketrans('', '', string.punctuation)) # ¯\_(ツ)_/¯

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
