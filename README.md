# Matrix-Chain-Multiplication-C-Program-
<br>
                    Matrix Chain Multiplication (C Program)
<br>                    
This C program solves the Matrix Chain Multiplication problem using Dynamic
Programming. It finds the minimum number of scalar multiplications required and prints the optimal
parenthesization.
<br>
Features:
<br>
• Computes minimum multiplication cost
<br>
• Displays step-by-step calculations
<br>
• Uses dynamic programming tables (m and s)
<br>
• Prints optimal multiplication order
<br>
Algorithm Steps:
<br>
1. Initialize m[i][i] = 0
<br>
2. Consider chain lengths from 2 to n
<br>
3. Compute cost for all possible splits
<br>
4. Store minimum cost and split position
<br>
5. Print final result and parenthesization
<br>

Variables:      Variable Description
<br>
m[i][j]         Minimum cost from i to j
<br>
s[i][j]         Optimal split position
<br>
p[]             Matrix dimensions
<br>
cost            Multiplication cost
<br>

Example:
<br>
Input: n = 3
<br> 
Dimensions = [10, 20, 30, 40]
<br>
Output: Minimum multiplications = 18000
<br>
Optimal Parenthesization: ((A1A2)A3
<br>