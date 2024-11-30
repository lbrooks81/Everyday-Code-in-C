# Everyday-Code-in-C

This assignment required us to implement the following functions as well as identify their time complexities in Big O Notation.
All implementation

Constraints
• Do not modify the main.cpp file.
• Do not modify the source.h file.
• Do not modify function prototypes/headers.

Mean of Even Numbers

The meanOfEvenNumbers() method accepts an array of numbers and returns the mean (average) of
all its even numbers.

Word Builder
The wordBuilder() function uses an algorithm that collects every combination of two-character
strings built from an array of single characters. For example, given the array: ["a", "b", "c", "d"], you’d
return a new array containing the following string combinations:
[
'ab', 'ac', 'ad', 'ba', 'bc', 'bd',
'ca', 'cb', 'cd', 'da', 'db', 'dc'
]
The following link may help you:
https://www.geeksforgeeks.org/how-to-convert-a-single-character-to-string-in-cpp/
For this problem, you may want to consider using a vector: https://www.geeksforgeeks.org/vector-in-
cpp-stl/
(Note, you still need to return a string array.)
Keep in mind, repeat characters are not allowed. For example “aa” would not be allowed.

Word Builder – Three Character Strings
What would happen if you modified your algorithm to compute each combination of three-character
strings? That is, for an example array of ["a", "b", "c", "d"], your function would return the array:
[
'abc', 'abd', 'acb',
'acd', 'adb', 'adc',
'bac', 'bad', 'bca',
'bcd', 'bda', 'bdc',
'cab', 'cad', 'cba',
'cbd', 'cda', 'cdb',
'dab', 'dac', 'dba',
'dbc', 'dca', 'dcb'
]
This is precisely what you’ll do for the wordBuilderTC() function.
For this problem, you may want to consider using a vector. (Note, you still need to return a string
array.)
Keep in mind, repeat characters are not allowed. For example “aaa” or “aab” would not be allowed.
Count the Ones

Here’s an algorithm where the Big O is different from what it seems at first glance. The
countTheOnes() function accepts an array of arrays (or rather, a vector or vectors), where the inner
arrays contain 1’s and 0’s. The function then returns how many 1’s there are.
So, for this example input:
[
[0, 1, 1, 1, 0],
[0, 1, 0, 1, 0, 1],
[1, 0]
]
your function will return 7, since there are seven 1’s
