# no need empty line 
# no need empty line 
def is_prime(n): # maybe should to be num or number not n, if you want
  # Add docstring of what function does
  for i in range(2,n): # space betwwen 2 and n
    if (n%i) == 0: #need space between n and i
      return False
  return True


def find_prime_divisors(number, prime_list):
    """
    def find_prime_divisors(number, prime_list): # In docstring miss this!!!!! only descriptions

        Given one integer , find all prime divisors of a number.
        Definition: A prime number is a natural number greater than 1 that has no positive divisors other than 1 and itself.
        Example:
        Input : 60
        Output: [2, 3, 5]
        :param number:
        :param prime_list:
        :return: prime_list
    """
    y = 2
    i = 0
    while y <= number:
        if(number%y==0 and is_prime(y)): # spaces
            prime_list.append(y)
            i += 1

        y += 1
    return prime_list

x = 60
prime_list = []
print(find_prime_divisors(x, prime_list))




"""
def reverse_words_from_string(input_string):
       Given a string , reverse words.
       Example:
       Input : Today is our Python exercises with group one from strypes-04 course.
       Output: course. strypes-04 from one group with exercises Python our is Today
       :param string:
       :return: reversed string
    """

def reverse_words_from_string(input_string): # move docstring in function
    rev_input_string = input_string.split(" ")
    rev_input_string.reverse()
    result = " ".join(rev_input_string)

    return result # maybe return directly line 54 like: return " ".join(rev_input_string)


input_string = "Today is our Python exercises with group one from strypes-04 course."
print(reverse_words_from_string(input_string))















