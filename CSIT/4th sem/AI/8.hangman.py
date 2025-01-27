import random

def get_word():
    words = ["python", "hangman", "program", "computer", "science", "algorithm"]
    return random.choice(words).lower()

def display(word, guessed_letters):
    return " ".join([letter if letter in guessed_letters else "_" for letter in word])

def hangman():
    print("Welcome to Hangman!")
    word = get_word()
    guessed_letters = set()
    attempts = 6 
    
    while attempts > 0:
        print(f"\nWord: {display(word, guessed_letters)}")
        print(f"Attempts remaining: {attempts}")
        print(f"Guessed letters: {' '.join(sorted(guessed_letters)) if guessed_letters else 'None'}")

        guess = input("Enter your guess (a single letter): ").lower()
        
        if len(guess) != 1 or not guess.isalpha():
            print("Invalid input. Please enter a single letter.")
            continue

        if guess in guessed_letters:
            print("You've already guessed that letter. Try again.")
            continue

        guessed_letters.add(guess)

        if guess in word:
            print("Correct!")
        else:
            print("Incorrect!")
            attempts -= 1

        if all(letter in guessed_letters for letter in word):
            print(f"\nCongratulations! You guessed the word: {word}")
            break
    else:
        print(f"\nYou lost! The word was: {word}")

hangman()
