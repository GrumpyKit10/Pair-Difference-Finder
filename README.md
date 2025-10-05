# Pair Difference Finder

CSCE 2110 – Data Structures
Example Program

## Overview

This program finds unique integer pairs in an array whose difference equals a given value. It demonstrates sorting, duplicate handling, and efficient lookups using an `unordered_set`.

## Features

* Handles duplicate values without repeating pairs.
* Supports negative difference input (internally uses absolute difference).
* Outputs all valid pairs in ascending order.

## Example

**Input:**

```cpp
array = {1, 5, 2, 2, 2, 5, 5, 4}
diff = -3
```

**Output:**

```
(4, 1)
(5, 2)
```

## How to Run

1. Clone this repository:

2. Compile the program:

   ```bash
   g++ main.cpp -o pair_diff
   ```
3. Run:

   ```bash
   ./pair_diff
   ```

## Author

Matthew Wilson
