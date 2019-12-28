# stack-machine

Very simple stack machine implementation made in standard C++.

This implementation has 7 simple instructions:

* **PUSH**
* **POP**
* **ADD**
* **SUB**
* **MUL**
* **DIV**
* **EXIT**

### PUSH
This instruction will push a value on the stack, so it does expects an integer value right after the **PUSH** instruction.

Examples:  
```
PUSH 45
```
```
PUSH
45
```

### POP
As the name says, this instruction will pop the value on the top of the stack, printing it right after. If there is nothing to be removed, it will print a `Nada a ser removido!` (Nothing to be removed) message.

Example:
```
POP
```

### ADD
Adds the last two numbers in the stack, pushing the result onto the stack.

Example:
```
ADD
```

### SUB
Substracts the last value of the second last value and pushes the result onto the stack.

Example:
```
SUB
```

### MUL
Multiplies the last two numbers in the stack, pushing the result onto the stack.

Example:
```
MUL
```

### DIV
Will divide the second last number by the last number in the stack. The result will be pushed onto the stack.

Example:
```
DIV
```

### EXIT
Will immediately finish the program.

Example:
```
EXIT
```

Disclaimer:
* Although it's been made with Visual Studio as a Console Application, it doesn't have any platform specific dependency.
* It works only with 32-bit integers.
* If a unknown command is given, the `O comando <COMMAND> nao existe.` (The command 'COMMAND' doesn't exists) message will be printed.
