# HackerRank 3rd Semester Portfolio: Problem Solving (C++)

This repository serves as a practical portfolio demonstrating solution implementations and algorithmic performance analysis for competitive programming challenges on **HackerRank**. The exercises focus on foundational data structures, array operations, dynamic indexing, and optimized search strategies using **C++**.

---

## 👤 Profile & Portfolio Verification

- **HackerRank Profile:** https://www.hackerrank.com/profile/balerankita
- **Earned Badge:** 3-Star Problem Solving Badge 
- **Current Total Score:** 205 Points

---

## 🏆 Badge Evidence

![HackerRank 3-Star Badge](https://via.placeholder.com/600x200?text=Insert+Your+HackerRank+Profile+Screenshot+Here)

*Note: Replace the image link above with your actual screenshot or upload the image directly to your GitHub repository and link it here (e.g., `![3-Star Badge](./screenshots/3-star-badge.png)`).*

---

## 📁 Repository Structure

```text
├── 01-Diagonal-Difference/
│   └── solution.cpp
├── 02-Dynamic-Array/
│   └── solution.cpp
├── 03-Time-Conversion/
│   └── solution.cpp
├── 04-Compare-the-Triplets/
│   └── solution.cpp
├── 05-Sparse-Arrays/
│   └── solution.cpp
└── README.md



## 💡 Algorithmic Reflection

Solving these challenges on HackerRank highlights the vital balance between raw execution speed (Time Complexity) and memory overhead (Space Complexity). In basic problems, brute-force solutions with nested loops often run in $O(N^2)$ time. However, as constraints scale toward $10^5$ or $10^6$ elements, such approaches result in **Time Limit Exceeded (TLE)** errors.

Optimizing algorithms requires picking the appropriate data structures and math shortcuts. For instance, in **Diagonal Difference**, computing both main diagonals within a single loop reduces computational overhead to a strict linear time bound of $O(N)$ without allocating secondary matrices. Similarly, using bitwise operations (XOR) and modulo indexing in **Dynamic Array** yields seamless $O(1)$ dynamic bucket lookup operations. In pattern-matching challenges like **Sparse Arrays**, moving from direct string array searching ($O(Q \cdot N)$) to hash-table frequency maps (`std::unordered_map`) reduces query times to average $O(1)$ lookups.

Mastering these core efficiency trade-offs builds a strong engineering foundation for designing high-performance, real-world software applications.
