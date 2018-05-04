# Proyecto Final
# Diego del Muro Herrera A01224974
# Physics Class

**Explanation** <br>
The Physics teacher in Tanu's class is teaching concepts of a bouncing ball. The rubber ball that she is using has the property that if the ball is dropped from height H then, it bounces back to maximum height H/F. So after first bounce it rises up to maximum height H/F, after second bounce to maximum height H/F2, after third bounce to maximum height H/F3, and so on.

The class has N children, and the teacher wants to select two children such that when the taller child drops the ball from his height, ball reaches a maximum height equal to the height of the shorter child after some (possibly zero) number of bounces. Note that zero bounces mean heights of the two children will be same. Given the heights of the children in the class Height[i], can you tell how many ways are there for the teacher to select two children for the demonstration? Note that when heights are same, the pair is only counted once (See first example for further clarification).

**Input** <br>
irst line contains T, number of testcases. Then 2*T lines follow, 2 per testcase.
First line of each testcase consists of two space-separated intergers N and F. Second line of each testcase contains N space-separated integers representing the array Height.

**Output** <br>
For each testcase, print a single line containing the answer to the problem.

**Constraints** <br>

For 40 points: 1 ≤ T ≤ 100, 1 ≤ N ≤ 103, 2 ≤ F ≤ 109, 1 ≤ Height[i] ≤ 109<br>
For 60 points: 1 ≤ T ≤ 100, 1 ≤ N ≤ 104, 2 ≤ F ≤ 109, 1 ≤ Height[i] ≤ 109

**Example** <br>

Input:<br>

2<br>
3 2<br>
2 2 2<br>
3 2<br>
2 1 4<br>

Output:<br>

3<br>
3<br>

# Solution
First it is needed to read the number of test cases, this is the first value of the array, once the number of test cases is obtained we know how many iterations of the first for we will have. After getting the number of test cases we get the number of students and the value of F, these two values are the next two of the array, then another iteration is made to compare one student with the others, the calculation is made several times until it reaches 0. If a match is found the counter is added and the code starts to compare with the next student. This is made with all the students. A special counter is used when the height of the students is the same because it will make the same match when the other student is iterated. After one test case is completed the result is printed and the next test case is started with an offset in the array. 