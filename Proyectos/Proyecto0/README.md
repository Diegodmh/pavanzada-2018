# Proyecto1
# Diego del Muro Herrera A01224974
# Problema de Triatlon

**Explanation** <br>
Triathlon is an athletic contest consisting of three consecutive sections that should be completed as fast as possible as a whole. The first section is swimming, the second section is riding bicycle and the third one is running.
The speed of each contestant in all three sections is known. The judge can choose the length of each section arbitrarily provided that no section has zero length. As a result sometimes she could choose their lengths in such a way that some particular contestant would win the competition.

**Input** <br>
The first line of the input contains integer number N (1 ≤ N ≤ 100), denoting the number of contestants. Then N lines follow, each line contains three integers Vi, Ui and Wi (1 ≤ Vi, Ui, Wi ≤ 10000), separated by spaces, denoting the speed of ith contestant in each section.

**Output** <br>
For every contestant write to the output one line, that contains word "Yes" if the judge could choose the lengths of the sections in such a way that this particular contestant would win (i.e. she is the only one who would come first), or word "No" if this is impossible.

**Sample** <br>

| Input	| Output
| ---------- |:------------:|
|9|
|10 2 6|           Yes|
|10 7 3|           Yes|
|5 6 7 |           Yes|
|3 2 7|            No|
|6 2 6 |           No|
|3 5 7|             No|
|8 4 6|             Yes|
|10 4 2|            No|
|1 8 7|             Yes|

**Solution**<br>

To get te arrival time we devide each stage by the speed and all the 3 times.

To solve this problem we must divide the problem in 3 cases.

First case<br>
The participant is the fastest in one stage.

To solve this first case we need to take the stage in which the participant is the fastest and make that stage larger and larger untill he finishes first.


Second case<br>
The participant isn't the fastest of neither of the stages. He ties with other participant(s) in being the fastest of a stage.

To solve this case we must identify the other tied participants of that stage, then we must compare other stages with the same participants and look for a stage in which the participant is the fastest. Once this is found wee need to make larger the distance of those 3 stages.

Third case<br>
The participan't isn't the fastest, nor ties as fastest in a stage.

We need to find the fastest stage of the participant, then we need to identify faster participants in that stage, once they are identified the stage's distanace is increased, if the difference increases we need to decrease the distance.

I still have problems in this case, I need no find and efficient way to solve it.




