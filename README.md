# Decision Making Statements
## Aim: 
To study and implement C++ decision making statements or loops.

## Theory:
Decision-making statements in C++ are fundamental for controlling the flow of a program based on specific conditions. These statements allow programs to respond dynamically to different inputs and scenarios. The main decision-making constructs in C++ include if, else if, else, switch, and the conditional (ternary) operator. These decision-making constructs enable developers to create dynamic and responsive programs that can adapt to varying inputs and scenarios, forming the backbone of logic control in software applications
**1. if Statement**
<br/>The if statement executes a block of code only if the given condition evaluates to true. If the condition is false, the block is skipped.
<br/>*Syntax -*
<br/>if (condition) {
<br/>    // Code to execute if the condition is true
<br/>}

**2. else if Statement**
<br/>The else if statement allows checking multiple conditions. It comes after an if and is used when the initial if condition is false but you want to check another condition.
<br/>*Syntax -*
<br/>if (condition1) {
<br/>    // Code if condition1 is true
<br/>} else if (condition2) {
<br/>    // Code if condition1 is false and condition2 is true
<br/>}

**3. else Statement**
<br/>The else statement specifies a block of code to execute if all preceding if and else if conditions are false.
<br/>*Syntax -*
<br/>if (condition1) {
<br/>    // Code if condition1 is true
<br/>} else if (condition2) {
<br/>    // Code if condition1 is false and condition2 is true
<br/>} else {
<br/>    // Code if all conditions are false
<br/>}

**4. switch Statement**
<br/>The switch statement is used when you want to compare a variable against several possible values. It's more efficient and readable than using multiple else if conditions when dealing with a fixed set of discrete values.
<br/>*Syntax -*
<br/>switch (variable) {
<br/>    case value1:
<br/>        // Code to execute if variable == value1
<br/>        break;
<br/>    case value2:
<br/>        // Code to execute if variable == value2
<br/>        break;
<br/>    default:
<br/>        // Code to execute if none of the above cases match
<br/>}

**5. Conditional (Ternary) Operator**
<br/>The conditional operator (?:) is a shorthand for simple if-else conditions. It takes three operands: a condition, a value if the condition is true, and a value if the condition is false.
<br/>*Syntax -*
<br/>condition ? value_if_true : value_if_false;
