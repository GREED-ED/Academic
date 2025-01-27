print("\t\tChatbox")
print("___________________________________")

while True:
    a = input("Enter your question, please: ")
    
    if a.lower() == "hi":
        print("Hello!")
    elif a.lower() == "how are you?":
        print("I am fine. What about you?")
    elif a.lower() == "what is your name?":
        print("I am a simple chatbox created in Python.")
    elif a.lower() == "i am fine too":
        print("Thats good to hear.")
    elif a.lower() == "is it raining?":
        print("Yes it is.")
    elif a.lower() == "bye" or a.lower() == "goodbye":
        print("Goodbye! Have a great day!")
        break
    else:
        print("Sorry, I don't understand that.")

    print() 