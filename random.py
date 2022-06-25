import random
num = random.randint(0, 100)
guess = int(input("Please guess a number between 1 to 100 :- "))
count = 1
while(True):
    count +=1
    if count > 5:
        print("Better Luck next Time")
        break
    if guess == num:
        print("Congratulations You WON!!!!!!!!!!!!!!!!!!")
        break
    elif guess > num:
        print("Please Guess small number :- ") 
    else:
        print("Please Guess large number :- ")