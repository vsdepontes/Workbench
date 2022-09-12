import { Stack } from "./lib/linked-list-stack"
import * as readLine from "readline-sync";


const stack = new Stack();
while (true) {
    console.log("Operations:\n" +
        "1 - Push a number\n" +
        "2 - Pop a number\n" +
        "3 - Peek last value\n" +
        "4 - Current size\n" +
        "5 - Exit\n"
    );
    const choice = readLine.question("Enter the choice: ");
    console.log();
    if (choice === "1") {
        const value = readLine.question("Enter the value: ")
        console.log();
        stack.push(value);
    } else if (choice === "2") {
        stack.pop();
    } else if (choice === "3") {
        console.log(stack.peek());
        console.log();
    } else if (choice === "4") {
        console.log(stack.getSize());
        console.log();
    } else if (choice === "5") {
        break;
    } else {
        console.log("Invalid choice!\n");
    }
}

