# Time Complexity

Time complexity is the amount of time taken by an algorithm to run, as a function of the size of its input. It helps analyze the performance of algorithms, especially as input size grows.

---

## Why is Time Complexity Important?

- Helps compare different algorithms.
- Predicts scalability and efficiency.
- Guides performance optimization.

---

## Types of Time Complexity

| Notation      | Description               | Example            |
|---------------|---------------------------|--------------------|
| O(1)          | Constant time              | Accessing array element |
| O(log n)      | Logarithmic time           | Binary search      |
| O(n)          | Linear time                | Traversing array   |
| O(n log n)    | Linearithmic time          | Merge sort, Quick sort (avg) |
| O(n²)         | Quadratic time             | Bubble sort, Insertion sort |
| O(2ⁿ)         | Exponential time           | Recursive Fibonacci |
| O(n!)         | Factorial time             | Solving traveling salesman |

---

## Asymptotic Notations

Asymptotic notation describes the behavior of a function as the input size grows. It focuses on the most significant terms and ignores constants.

### 1. **Big-O Notation (O)** – Worst Case

- Describes the upper bound.
- Guarantees that the algorithm will never be slower than O(f(n)).
- Used for worst-case performance.

**Example:**
f(n) ≤ c * g(n) for all n ≥ n₀


### 2. **Omega Notation (Ω)** – Best Case

- Describes the lower bound.
- Guarantees the algorithm will take at least Ω(f(n)) time.

**Example:**
f(n) ≥ c * g(n) for all n ≥ n₀


### 3. **Theta Notation (Θ)** – Average/Exact Case

- Describes a tight bound.
- The function grows at the same rate as g(n).

**Example:**
c₁ * g(n) ≤ f(n) ≤ c₂ * g(n) for all n ≥ n₀