class Node:
    def __init__(self, value):
        self.value = value
        self.next = None


class Stack:
    def __init__(self):
        self.head = Node(None)
        self.size = 0

    def push(self, value):
        new_node = Node(value)
        new_node.next = self.head
        self.head = new_node
        self.size += 1

    def pop(self):
        if self.get_size() == 0:
            raise EmptyStackException()
        self.head = self.head.next
        self.size -= 1

    def peek(self):
        return self.head.value

    def get_size(self):
        return self.size


class EmptyStackException(Exception):
    """Raised when the stack is empty and an attempt to remove a node is made"""

    def __init__(self):
        super().__init__("The stack is empty!")
