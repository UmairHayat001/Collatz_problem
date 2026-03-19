# Collatz_problem
# 🔢 Collatz Conjecture (3n + 1 Problem) in C++

This project implements the **Collatz Conjecture (3n + 1 problem)** using two approaches:

* 🧮 Iterative (Brute Force)
* ⚡ Optimized (Memoization using Hash Map)

---

## 📌 Problem Statement

For any integer `n`:

* If `n` is **even** → `n = n / 2`
* If `n` is **odd** → `n = 3n + 1`

Repeat the process until `n = 1`.

The goal is to:

> Find the **maximum cycle length** for all numbers between two integers `i` and `j` (inclusive).

---

## 🚀 Features

* ✅ Brute-force implementation
* ⚡ Optimized solution using `unordered_map`
* 📈 Performance comparison ready
* 🧠 Efficient reuse of computed results (Dynamic Programming)

---

## 🛠️ Implementation

### 1. Iterative Approach

* Computes sequence for each number independently
* Time complexity: **O(n × k)**

### 2. Optimized Approach (Memoization)

* Stores previously computed results
* Avoids redundant calculations
* Time complexity: **~O(n log n)**

---

## 📂 Project Structure

```
.
├── main.cpp
└── README.md
```

---

## ▶️ How to Run

### Compile:

```bash
g++ -O2 main.cpp -o collatz
```

### Run:

```bash
./collatz
```

---

## 🧪 Example

### Input Range:

```
900 1000
```

### Output:

```
174
174
```

---

## ⚠️ Notes

* Use `long long` to avoid overflow for large values
* Optimized version is significantly faster for large ranges
* Memoization drastically reduces recomputation

---

## 🧠 Key Insight

Collatz sequences often **merge**, e.g.:

```
13 → 40 → 20 → 10 → 5
10 → 5
```

➡️ Memoization leverages this overlap for efficiency

---

## 📈 Future Improvements

* Precompute results up to 1e6
* Parallel computation (multithreading)
* Input from file / batch processing
* Benchmark visualization

---

## 👨‍💻 Author

Umair Hayat

---

## 📜 License

This project is open-source and free to use.
