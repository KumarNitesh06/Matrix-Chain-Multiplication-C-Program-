# 📘 Matrix Chain Multiplication (C Program)

---

## 📌 Description
This C program solves the **Matrix Chain Multiplication** problem using **Dynamic Programming**.  
It calculates the **minimum number of scalar multiplications** required and prints the **optimal parenthesization**.

---

##  Features
- ✅ Computes minimum multiplication cost  
- ✅ Displays step-by-step calculations  
- ✅ Uses dynamic programming tables (`m` and `s`)  
- ✅ Prints optimal multiplication order  

---

## Algorithm Used
> Dynamic Programming approach to optimize matrix multiplication order.

---

## Algorithm Steps
1. Initialize `m[i][i] = 0`  
2. Consider chain lengths from 2 to n  
3. Compute cost for all possible splits  
4. Store minimum cost and split position  
5. Print final result and parenthesization  

---

##  Variables

| Variable | Description |
|----------|------------|
| `m[i][j]` | Minimum cost from i to j |
| `s[i][j]` | Optimal split position |
| `p[]` | Matrix dimensions |
| `cost` | Multiplication cost |

---
