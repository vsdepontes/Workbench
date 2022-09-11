from lib.linked_list_stack import Stack

stack = Stack()
while True:
    print("Operations:\n"
          "1 - Push a number\n"
          "2 - Pop a number\n"
          "3 - Peek last value\n"
          "4 - Current size\n"
          "5 - Exit\n")
    choice = int(input("Enter the choice: "))
    print()
    if choice == 1:
        value = int(input("Enter the value: "))
        print()
        stack.push(value)
    elif choice == 2:
        stack.pop()
    elif choice == 3:
        print(stack.peek())
        print()
    elif choice == 4:
        print(stack.get_size())
        print()
    elif choice == 5:
        break
    else:
        print("Invalid choice!\n")

