# C++ Practice Problems — Pre-DSA Roadmap

---

## 1. Basic Input / Output Problems
> Good for syntax and thinking flow.

| # | Problem |
|---|---------|
| 1 | Print `"Hello World"` |
| 2 | Take two numbers and print sum |
| 3 | Swap two numbers |
| 4 | Find square / cube of a number |
| 5 | Convert Celsius to Fahrenheit |
| 6 | Calculate simple interest |

**Example:**
```cpp
int a, b;
cin >> a >> b;
cout << a + b;
```

---

## 2. Conditional Statement Problems
> Builds logic using `if-else`.

| # | Problem |
|---|---------|
| 1 | Check even or odd |
| 2 | Largest of 3 numbers |
| 3 | Leap year check |
| 4 | Positive / negative / zero |
| 5 | Grade calculator |
| 6 | Vowel or consonant |

**Example:**
```cpp
if(n % 2 == 0)
    cout << "Even";
else
    cout << "Odd";
```

---

## 3. Loop-Based Questions
> Very important before DSA.

| # | Problem |
|---|---------|
| 1 | Print 1 to N |
| 2 | Sum of first N numbers |
| 3 | Multiplication table |
| 4 | Reverse a number |
| 5 | Count digits |
| 6 | Palindrome number |
| 7 | Armstrong number |
| 8 | Factorial |
| 9 | Fibonacci series |
| 10 | Prime number check |

**Example:**
```cpp
int fact = 1;
for(int i = 1; i <= n; i++)
    fact *= i;
```

---

## 4. Pattern Printing
> Improves nested loop understanding.

**Star Triangle**
```
*
**
***
****
```

**Pyramid**
```
   *
  ***
 *****
```

**Number Pattern**
```
1
12
123
1234
```

> These are extremely useful before arrays and matrices.

---

## 5. Functions
> Learn breaking code into reusable blocks.

| # | Problem |
|---|---------|
| 1 | Function to find max |
| 2 | Function for factorial |
| 3 | Prime check using function |
| 4 | Calculator using functions |

**Example:**
```cpp
int add(int a, int b){
    return a + b;
}
```

---

## 6. Arrays Basics
> First major DSA step.

| # | Problem |
|---|---------|
| 1 | Find largest / smallest element |
| 2 | Sum of array |
| 3 | Reverse array |
| 4 | Linear search |
| 5 | Count even / odd |
| 6 | Second largest number |

**Example:**
```cpp
int mx = arr[0];
for(int i = 1; i < n; i++){
    if(arr[i] > mx)
        mx = arr[i];
}
```

---

## 7. String Basics
> Important for interviews.

| # | Problem |
|---|---------|
| 1 | Reverse string |
| 2 | Palindrome string |
| 3 | Count vowels |
| 4 | Frequency of characters |
| 5 | Remove spaces |

**Example:**
```cpp
reverse(s.begin(), s.end());
```

---

## 8. Basic Math Logic Problems
> These improve problem-solving speed.

| # | Problem |
|---|---------|
| 1 | GCD / HCF |
| 2 | LCM |
| 3 | Power calculation |
| 4 | Binary to decimal |
| 5 | Decimal to binary |

---

> **Tip:** Complete sections 1–5 before touching Arrays. Master loops + patterns first — they're the foundation of DSA thinking.