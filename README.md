# Decision Making Statements
## Aim: 
To study and implement C++ decision making statements or loops.

## Theory:
Decision-making statements in C++ are fundamental for controlling the flow of a program based on specific conditions. These statements allow programs to respond dynamically to different inputs and scenarios. The main decision-making constructs in C++ include if, else if, else, switch, and the conditional (ternary) operator. These decision-making constructs enable developers to create dynamic and responsive programs that can adapt to varying inputs and scenarios, forming the backbone of logic control in software applications
**1. if Statement**
<br/>The if statement executes a block of code only if the given condition evaluates to true. If the condition is false, the block is skipped.
<br/>*Syntax -*<br/>
```cpp
if (condition) {
   // Code to execute if the condition is true
}
```

**2. else if Statement**
<br/>The else if statement allows checking multiple conditions. It comes after an if and is used when the initial if condition is false but you want to check another condition.
<br/>*Syntax -*
```cpp
if (condition1) {
   // Code if condition1 is true
} 
else if (condition2) {
   // Code if condition1 is false and condition2 is true
}
```

**3. else Statement**
<br/>The else statement specifies a block of code to execute if all preceding if and else if conditions are false.
<br/>*Syntax -*
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

**4. switch Statement**
<br/>The switch statement is used when you want to compare a variable against several possible values. It's more efficient and readable than using multiple else if conditions when dealing with a fixed set of discrete values.
<br/>*Syntax -*
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

**5. Conditional (Ternary) Operator**
<br/>The conditional operator (?:) is a shorthand for simple if-else conditions. It takes three operands: a condition, a value if the condition is true, and a value if the condition is false.
<br/>*Syntax -*
```cpp
condition ? value_if_true : value_if_false;
```
