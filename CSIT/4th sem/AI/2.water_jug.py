def print_status(jug1, jug2):
    print(f"Jug 1: {jug1} liters, Jug 2: {jug2} liters")

def water_jug_game():
    jug1_capacity = 4
    jug2_capacity = 3
    jug1 = 0
    jug2 = 0
    
    print("Water Jug Problem Game")
    print("Jug 1 capacity: 4 liters")
    print("Jug 2 capacity: 3 liters")
    print("Goal: Measure exactly 2 liters in one of the jugs.")
    print("Commands: fill1, fill2, empty1, empty2, pour1to2, pour2to1, status, quit")
    
    while True:
        command = input("Enter command: ").strip().lower()
        
        if command == "fill1":
            jug1 = jug1_capacity
        elif command == "fill2":
            jug2 = jug2_capacity
        elif command == "empty1":
            jug1 = 0
        elif command == "empty2":
            jug2 = 0
        elif command == "pour1to2":
            transfer = min(jug1, jug2_capacity - jug2)
            jug1 -= transfer
            jug2 += transfer
        elif command == "pour2to1":
            transfer = min(jug2, jug1_capacity - jug1)
            jug2 -= transfer
            jug1 += transfer
        elif command == "status":
            print_status(jug1, jug2)
        elif command == "quit":
            print("Exiting the game.")
            break
        else:
            print("INVALID! Please try again.")
        
        
        if jug1 == 2 or jug2 == 2:
            print("Congratulations! You've solved water jug problem.")
            break

        print() 

if __name__ == "__main__":
    water_jug_game()
