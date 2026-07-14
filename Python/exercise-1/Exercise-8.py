def Guessing_Game():
    while 1:
        guess = int(input("Guess a number : "))
        correct_num = 6
        if 1 <= guess <= 9:
            if guess < correct_num:
                print("your guess is almost there")
            elif guess > correct_num:
                print("your guess is higher")
            else:
                print("Your Guess Is Correct!")
                break


Guessing_Game()
