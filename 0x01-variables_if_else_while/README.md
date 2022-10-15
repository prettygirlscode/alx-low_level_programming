
<h1>C - variables, if, else and while</h1>

Working on this project helped me understand the application and usage of arithmetic operators, logical operators, relational operators and variable declarations.
I learned how to use the if and if...else statements, i also learned how to declare and print values of variable type `char`, `int` and `unsigned int`. 
Learining how to use the while and for loop was quite an interesting experience.

<h3>Arithmetic operators</h3>

In C, arithmetic operations are carried using arithmetic operators such as <strong>addition</strong>, <strong>subtration</strong>, <strong>multiplication</strong>, <strong>division</strong> and <strong>modulus</strong>, are performed using arithmetic operators.  
Arithmetic operators need two operands between one operator to perform all operations successfully. 

<h3>Logical operators</h3>

There are three logical operators in the C language:
<ol>
>  
> <li>&& The logical AND operator</li>
> <li>|| The logical OR operator</li>
> <li>! The logical NEGATION operator</li>
>
</ol>

The AND and OR operators, are binary operators; that is, they both take two operands (one to the left and one to the right of the operator).  
The logical AND operator (&&) is used to evaluate the truth or falsity of a pair of expressions. If either expression evaluates to 0 (that is, false) the
operator yields a value of 0. Otherwise, if — and only if — both operand expressions evaluate to nonzero values, the logical AND operator yields a value of 1 (that is, true). 

The logical OR operator (||) yields a value of 1 whenever one or both of the operand expressions evaluates to nonzero (logically true). The || operator yields 0 only if both operand expressions evaluate to 0 (false). The logical negation operator (!) is a unary operator; that is, it only takes one operand (the expression to its right). If the operand evaluates to any nonzero value, the ! operator yields 0 (logically false); only when the operand expression evaluates to 0, does the operator yield 1 (logically true).

<h3>Relational operators</h3>

The relational operators in C are;
<ol>
  <li>Equal to operator: ==</li>
  <li>Not equal to operator: !=</li>
  <li>Greater than: ></li>
  <li>Less than: <</li>
  <li>Greater than or equal to: >=</li>
  <li>Less than or equal to: <=</li>
 </ol>
 Relational operators are used for making comparisons between operands.
 
<h3>If, else and if else</h3>
 
The if, else, and if else statements in C programming are used to control the flow of decision making. The decision making process specifies the flow or order in which statement blocks are executed. The if statement can be used to evaluate conditions as well as to make the decision +whether the block of code controlled by the statement is going to be executed. 

The general form of the if statement is;
```
if (expression)                                       
{ 
    firststatement;
    secondstatement;                                                                                                                                                  }                                                                                                               

```
From the above, expression is the conditional criterion. If expression evaluates to a nonzero value(`True`), the statements inside the braces ({ and }), such as `firtstatement and `secondstatement`, are executed. If expression evaluates to a value of zero (`false`), the statements are skipped or ignored.
The braces ({ and }) form a block of statements that is under the control of the if statement. If there is only one statement inside the block, the braces can be omitted. The parentheses (( and )), however, must be always used to enclose the conditional expression.

You will often want the computer to execute an alternate set of statements when the conditional expression of the if statement evaluates to a value of zero (false). To do so, you can use another conditional statement in C—the if-else statement. The if-else statement has the following form:

```
if (expression) 
{  
  firststatement;
  secondstatement;
.
}
else 
{
  first_statement;
  second_statement;
.
}

```

If the first conditional expression evaluates to a value of zero which means logically false, the statements following `else` will be executed instead.





