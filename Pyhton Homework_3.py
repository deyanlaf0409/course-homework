
def reversed_integer(number):
    """
         Given an integer, return the integer with reversed digits.
         Note: The integer could be either positive or negative.
         Example:
         Input : -258
         Output: -852
         :param number:
         :return: reversed number
     """
    res = str(number)
    for i in res: # Anywhere you don't use i and cycle, maybe remove for cycle and stay only if else statement?
        if res[0] == '-':
            result = list(res)
            result.remove('-')
            result.append('-')
            result = list(reversed(result))
            real_result = "".join(result)
        else:
            result = list(reversed(res))
            real_result = "".join(result)

    return int(real_result)


x = -258
print(reversed_integer(x))



def is_perfect_number(num):
    """
        Write a Python function to check whether a number is perfect or not.
        According to Wikipedia : In number theory, a perfect number is a positive integer that is equal to the sum of
        its proper positive divisors, that is, the sum of its positive divisors excluding the number itself
        (also known as its aliquot sum). Equivalently, a perfect number is a number that is half the sum of all
        of its positive divisors (including itself).
        Example : The first perfect number is 6, because 1, 2, and 3 are its proper positive divisors, and 1 + 2 + 3 = 6
        Equivalently, the number 6 is equal to half the sum of all its positive divisors: ( 1 + 2 + 3 + 6 ) / 2 = 6.
        The next perfect number is 28 = 1 + 2 + 4 + 7 + 14. This is followed by the perfect numbers 496 and 8128
        Input : 6
        Output: True
        :param number:
        :return: is perfect or not?
    """
    numbers = []
    for i in range(1,num):
        if num % i == 0:
            numbers.append(i)

    if num == sum(numbers) and num == (num + sum(numbers))/2 : # or not and, also this if else statement can be only on one line with return num == sum(numbers) or num == (num + sum(numbers))/2
        return True
    else:
        return False


x = 8128
print(is_perfect_number(x))





def find_first_unique_character(string):
    """
    Write a Python function which find index of first unique character from string.
    Given a string, find the first non-repeating character in it and return its index.
    If it doesn't exist, return -1. # Note: all the input strings are already lowercase.
    Input: abcdcaf
    Output: 1 (we return 1 because b is the first non-repeating char at index 1 in the string "abcdcaf")
    :param string:
    :return: first unique character
    """
    #print(string)

    if string == '': # well done
        return -1

    for i in string:
        if string.count(i) == 1:
            return string.index(i)
            break

    return -1 # no need this return because you check on line 77 


string = "abcdcaf"
print(find_first_unique_character(string))





def find_count_match_words_from_list(words):
    """
    Write a Python function to count the number of words where the length > 2 and the first and last character
    are same from a given list of words(strings)
    Input: ['abc', '121', 'def', 'level'] -> 121, level
    Output: 2
    :param words:
    :return: number of match words
    """
    word_counter = 0

    for i in range(0,len(words)):
        #print(words[i])
        if len(words[i])>2:
            temp = words[i] # I do't understand this line, maybe without indexes and in for cycle should to be: for i in words
            if temp[0] == temp[len(temp) - 1]:
                word_counter += 1


    return word_counter


words = ['abc', '121', 'def', 'level', 'bb']
print(find_count_match_words_from_list(words))






