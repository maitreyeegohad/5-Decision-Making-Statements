# Decision Making Statements
## Aim: 
To study and implement C++ decision making statements or loops.

## Theory:
Decision-making statements in C++ are fundamental for controlling the flow of a program based on specific conditions. These statements allow programs to respond dynamically to different inputs and scenarios. The main decision-making constructs in C++ include if, else if, else, switch, and the conditional (ternary) operator. These decision-making constructs enable developers to create dynamic and responsive programs that can adapt to varying inputs and scenarios, forming the backbone of logic control in software applications
### 1. if Statement
- The if statement is the simplest form of decision-making in C++, allowing the program to execute a block of code only if a specified condition evaluates to true.
- If the condition is false, the block of code is skipped.
- It is typically used for basic conditional checks, such as comparing two values or checking the validity of a variable.
- This statement helps control the flow of the program by making choices based on dynamic conditions.<br/>*Syntax -*<br/>
```cpp
if (condition) {
   // Code to execute if the condition is true
}
```

### 2. else if Statement
- The if-else statement extends the basic if statement by providing an alternative block of code to execute when the condition is false.
- If the if condition is true, the code inside the if block runs; otherwise, the code inside the else block is executed.
- This construct is useful for binary decision-making, where an action is taken based on whether a condition is met or not.
- <br/>*Syntax -*
```cpp
if (condition1) {
   // Code if condition1 is true
} 
else if (condition2) {
   // Code if condition1 is false and condition2 is true
}
```

### 3. else Statement
- The else if ladder allows multiple conditions to be evaluated sequentially.
- If the first if condition is false, subsequent else if conditions are checked in order.
- When a condition evaluates to true, the corresponding block of code is executed, and the rest of the ladder is skipped.
- This structure is suitable for scenarios where multiple mutually exclusive conditions need to be checked, such as categorizing values into different ranges.<br/>*Syntax -*
<br/>
```cpp
if (condition1) {
    // Code if condition1 is true
}
else if (condition2) {
    // Code if condition1 is false and condition2 is true
}
else {
    // Code if all conditions are false
}
```

### 4. switch Statement
- The switch statement is a more efficient alternative to the else if ladder when dealing with multiple discrete values of a variable.
- It evaluates the variable and executes the block of code corresponding to the matching case label.
- If no match is found, an optional default block can be executed.
- The switch statement is ideal for cases where a variable can take on one of many fixed values, like menu selection or character processing.<br/>*Syntax -*
<br/>
```cpp
switch (variable) {
    case value1:
        // Code to execute if variable == value1
        break;
    case value2:
        // Code to execute if variable == value2
        break;
    default:
        // Code to execute if none of the above cases match
}
```

### 5. Conditional (Ternary) Operator
- The ternary operator is a compact form of the if-else statement that allows for a quick conditional assignment or expression evaluation.
- It takes three operands: a condition, a value if the condition is true, and a value if the condition is false.
- This operator is often used for simple, one-line decisions that affect a single variable, making the code shorter and more readable.
- <br/>*Syntax -*
```cpp
condition ? value_if_true : value_if_false;
```
