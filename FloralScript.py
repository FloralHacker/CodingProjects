# This is a basic script that interviews you for an internship programme based on a confirmation of your name and Student ID.

print('Welcome to the interview process of this programme. Please answer each question with capital letters where appropriate.')

# Defining Name and Student ID variables
Name = input('What is your full name? ').split()
ID = input('What is your Student ID? ')

if Name == "FloralHacker":
      print('Please press enter to continue.')
elif ID == "396":
      print('Congratulations! You have been accepted into the programme. Welcome aboard!')
else:
      print('Unfortunately, you do not meet the criteria for the programme. Have a nice day.')
