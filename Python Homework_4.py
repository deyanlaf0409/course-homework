def get_sqrt(number):
    import math
    # This function is not working, can you fix it?

    return math.sqrt(number)

number = 4
print(get_sqrt(number))



def get_even_numbers(array):
    # Finish the function by adding code that would print out only the even numbers.
    for i in range(0, len(array)):
        if array[i] % 2 == 0:
            print(array[i])
    return

array = [1, 2, 3, 4, 5, 6, 7, 8, 9]
get_even_numbers(array)


def set_entry_checker():
    # Ask for user's data: First name, age and VIP status.
    # If user's age is under 18, do not allow user to proceed
    # If user's age is between 18 - 25, allow them to stay up to 11pm
    # If group 18_25 has more than 10 users, do not allow user to enter.
    # If user is aged over 25, welcome them without any additional conditions.
    # As an output print out the users count from each group, and also print the VIPs
    # Example input: (Georgi 28, VIP) OR (Alex 25)

    under_18 = 0
    between_18_25 = 0
    over_25 = 0
    vips = []


    while True:
        user_data = input("Enter user data (First Name Age VIP): ")
        if user_data.lower() == "exit":
            break


        name, age, vip_status = user_data.split()
        age = int(age)
        vip_status = vip_status.upper() == "VIP"


        if age < 18:
            print("Sorry kid, too young.")
            under_18 += 1
        elif age < 25:
            print("You can only stay up to 11pm.")
            if between_18_25 < 10:
               between_18_25 += 1
            else:
                print("Club is full")
        else:
            print("Enjoy your stay!")
            over_25 += 1


        if vip_status:
            vips.append(name)


    print(f"Under 18: {under_18}")
    print(f"Between 18 and 25: {between_18_25}")
    print(f"Over 25: {over_25}")
    print("VIPs:" + str(vips))

set_entry_checker()



import csv
def get_top_three_students():
    # 1. Read the students_data.csv
    # 2. Collect the students data
    # 3. Return the top 3 students, ranked by current result.
    """
student,exam,points
Student 1,1,59
Student 2,1,96
Student 3,1,57
Student 4,1,51
this is in the csv file
    """
    students = []
    with open('studentdata.csv', 'r') as csvfile:
        reader = csv.reader(csvfile)
        for row in reader:
            students.append(row)

    # sort the students by their current result, in descending order
    students.sort(key=lambda x: x[2], reverse=True) #x[2] bcs points is on position [2]

    # return the top 3 students
    return students[:4] #4 bcs first print ['student', 'exam', 'points']

print(get_top_three_students())




import re
def get_is_password_valid(password):
    # Ask for user's password.
    # Check user's password against the following conditions:
    # At least 6 symbols, and maximum of 32 symbols.
    # At least 1 upper case letter.
    # At least 1 symbol.
    # hint: use the re library.
    if not 6 <= len(password) <= 32:
        return False

    if not re.search(r'[A-Z]', password):
        return False

    if not re.search(r'[^A-Za-z0-9]', password):
        return False

    return True

print(get_is_password_valid("Helloworld2002#"))

#Happy Holidays :)
