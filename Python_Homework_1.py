def print_student_sentence(name, age, today):
    print("Born to say ", name)
    print("Forced to say ", age)
    print(today)
    return


print_student_sentence(name="hiii :3", age="Hello", today="1.12.2022")


def store_transactions(transaction_id, transaction):
    if (transaction_id % 2) == 0:
        transaction = transaction_id
        return transaction
    else:
        print("Number is not even")
        return


transaction_id = 6
transaction = 0
transaction = store_transactions(transaction_id, transaction)
print(transaction)


def get_chars_count(string):
    result = {}
    for i in string:
        if i in result:
            result[i] += 1
        else:
            result[i] = 1
    return result

print (get_chars_count('hello'))


def get_abbreviation(string1):
    if len(string1) > 5:
        first_chars = string1[0:3]
        print(first_chars)
        return first_chars
    else:
        first_chars = string1[0:len(string1)]
        print(first_chars)
        return first_chars

get_abbreviation("Hey now, you're an all star Get your game on,go play")



def get_titled_string(sentence):
    new_sentence = sentence.lower() + sentence.upper()
    return new_sentence

result = get_titled_string("Never Gonna Give You Up ")
print(result)