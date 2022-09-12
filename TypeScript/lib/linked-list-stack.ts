class EmptyStackError extends Error {
    constructor() {
        super("The stack is empty!");
    }
}


class Node {
    value: unknown;
    next: Node;

    constructor(value: unknown, nextNode: Node) {
        this.value = value;
        this.next = nextNode;
    }
}


export class Stack {
    private head: Node = null;
    private size: number = 0;

    push(value: unknown) {
        const newHead = new Node(value, this.head);
        this.head = newHead;
        this.size += 1;
    }

    pop() {
        if (this.getSize() === 0)
            throw new EmptyStackError();
        this.head = this.head.next;
        this.size -= 1;
    }

    getSize() {
        return this.size;
    }

    peek() {
        if (this.getSize() === 0)
            return null;
        return this.head.value;
    }
}