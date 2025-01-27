def display(pegs):
    print("\nCurrent State:")
    for peg in pegs:
        print(f"{peg}: {pegs[peg]}")
    print()

def move(pegs, from_peg, to_peg):
    if not pegs[from_peg]:
        print(f"Peg {from_peg} is empty.")
        return False
    if pegs[to_peg] and pegs[from_peg][-1] > pegs[to_peg][-1]:
        print(f"Cannot move disk {pegs[from_peg][-1]} to peg {to_peg}.")
        return False
    pegs[to_peg].append(pegs[from_peg].pop())
    return True

def is_solved(pegs, ndisk, destinte):
    return len(pegs[destinte]) == ndisk

def TOH(ndisk):
    pegs = {'A': list(range(ndisk, 0, -1)), 'B': [], 'C': []}
    print("Move the disks from peg A to peg C.")
    
    while not is_solved(pegs, ndisk, 'C'):
        display(pegs)
        command = input("Enter command: ").strip().lower()
        
        if command == "quit":
            break

        parts = command.split()
        if len(parts) == 3 and parts[0] == "move":
            from_peg, to_peg = parts[1].upper(), parts[2].upper()
            if from_peg in pegs and to_peg in pegs:
                if move(pegs, from_peg, to_peg):
                    print(f"Moved disk from {from_peg} to {to_peg}.")
                else:
                    print("Move failed.")
            else:
                print("Invalid pegs. Use A, B, or C.")
        else:
            print("Invalid command.")

    if is_solved(pegs, ndisk, 'C'):
        print("Congratulations! You solved the puzzle.")

if __name__ == "__main__":
    ndisk = int(input("Enter the number of disks: "))
    TOH(ndisk)
