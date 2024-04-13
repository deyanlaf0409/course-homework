"""
def get_is_palindrome(string):

    Finish the function by adding code that returns a boolean with palindrome check.
    A string is palindrome if it is written the same forward and backward. Single char string is
    a palindrome string.
    Example:
    string = 'abcdcba'
    result: True
    :param string:
    :return: bool
    """
def get_is_palindrome(string):
    string_rev = string[::-1]
    if string == string_rev:
        return True
    else:
        return False

string = "level"
print(string)
print(get_is_palindrome(string))
"""
print("Enter a word: ")
word = input()
print("Enter your word backwards: ")
revWord = input()
if word == revWord:
    print("Your word is palindrome ")
else:
    print("Not palindrome")
    """



"""
def get_is_valid_subsequence(array, sequence):
    
    Given two non-empty arrays of integers, finish the function by adding code that determines if
    the second array is a subsequence of the first one.
    Subsequence is not mandatory adjacent in the array, but following the same order.
    Example:
    array = [5, 1, 22, 25, 6, -1, 8, 10]
    sequence = [1, 6, -1, 10]
    result: True
    :param array:
    :param sequence:
    :return: bool
    """
def get_is_valid_subsequence(array, sequence):
    a_index = 0
    s_index = 0
    while a_index < len(array) and s_index < len(sequence):
        if array[a_index] == sequence[s_index]:
            s_index += 1
        a_index += 1
    return s_index == len(sequence)


array = [5, 1, 22, 25, 6, -1, 8, 10]
sequence = [1, 6, -1, 10]
print(get_is_valid_subsequence(array, sequence))



"""
def get_number_sum(array, target_sum):
    
    Example:
    array = [3, 5, -4, 8, 11, 1, -1, 6]
    target_sum = 10
    result = [-1, 11]
    :param array: Non-empty array of integers
    :param target_sum: integer
    :return: new array holding 2 numbers which sum = target_sum. If no such numbers, return []
    """
def get_number_sum(array, target_sum):
    result = []
    for index1 in range(len(array)):
        for index2 in range(len(array)):
            if array[index1] + array[index2] == target_sum and index1 != index2:
                result.append(array[index1])
                result.append(array[index2])
                return result

array = [3, 5, -4, 8, 11, 1, -1, 6]
target_sum = 10
print(get_number_sum(array, target_sum))



"""
def store_calcs(number1, number2, calcs):

    Write a code that stores the sum, subtract, product and reminder
    of number1 and number2 within calcs_array
    :param number1:
    :param number2:
    :param calcs: calcs_array
    :return: calcs
    """

def store_calcs(number1, number2, calcs):
    calcs.append(number1 + number2)
    calcs.append(number1 - number2)
    calcs.append(number1 * number2)
    calcs.append(number1 / number2)
    return calcs

number1 = 4
number2 = 2
calcs_array = []
print(store_calcs(number1, number2, calcs_array))


"""
def pretty_print_dict(dictionary):
    
    :param dictionary:
    :return: NOne
    If we have the following dictionary
    {
        level1: {
            attr1: value,
            attr2: value,
            level2: {
                attr1: value,
                attr2: value,
                level3: {
                    attr1: value,
                }
            }
        }
    }
    The desired output is the dictionary data printed in a pretty manner - tabulated (4 tabs) per
    level
    """
import json
def pretty_print_dict(dictionary):
    dictionary = json.dumps(dictionary, indent=4, sort_keys=True)
    print(dictionary)

    return


dicto = {
        'level1': {
            'attr1': 1,
            'attr2': 2,
            'level2': {
                'attr1': 11,
                'attr2': 22,
                'level3': {
                    'attr1': 333,
                }
            }
        }
    }

pretty_print_dict(dicto)
