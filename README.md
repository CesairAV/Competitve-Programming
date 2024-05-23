Problem

Alex is appointed as the class teacher of standard 10th. He wants to arrange the seating arrangement of the n students in some random manner. So he thoughts of giving random number to the people roll no wise such that roll no 1 takes first random number , then roll no. 2 takes a random number and so on.

He then thinks to make students seat together such that 
3(ai-aj)=(j-i), and (i<j)
Where ai represents the random number taken by its roll no. Calculate the maximum number of students Alex can make sit together.


INPUT:
The first line contains one integer t (1<t<1000) — the number of test cases.
The second line contains only one input n (1<n<100) — the number of students.
Then the following line contains n random integers (0<ai<10^5) taken by students roll no. wise.
OUPUT:
For each test case, output on a separate line containing only one integer ,i.e, the total number of pair of students who can be seated together according to the given formula.

Example:
2\n
4 \n
5 1 2 4\n
4\n
8 1 1 7\n
