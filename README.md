# Ch6Test-StudentGradesSort
part of a series of answers to the ch 6 test from learncpp.com

Not robust, will clean code later

2) Write the following program: Create a struct that holds a student’s first name and grade (on a scale of 0-100). Ask the user how many students they want to enter. Dynamically allocate an array to hold all of the students. Then prompt the user for each name and grade. Once the user has entered all the names and grade pairs, sort the list by grade (highest first). Then print all the names and grades in sorted order.

For the following input:

Joe
82
Terry
73
Ralph
4
Alex
94
Mark
88

The output should look like this:

Alex got a grade of 94
Mark got a grade of 88
Joe got a grade of 82
Terry got a grade of 73
Ralph got a grade of 4

Hint: You can modify the selection sort algorithm from lesson 6.4 -- Sorting an array using selection sort to sort your dynamic array. If you put this inside its own function, the array should be passed by address (as a pointer).
