# leetcode-problems

This repository contains my C++ solutions for various LeetCode problems.  
I'm currently working through the "75 Hard" LeetCode selection.

## About

- All solutions are written in C++.
- Practicing my problem solving skills and also just enjoying learning new content.
- All problems published, have passed the leetcode tests.

## Structure
- File names and comments indicate the problem title, number.
- However, some previous solutions do not follow this structure (will go through and refactor soon)

## Progress
- Actively adding new solutions as I work through the 75 Hard challenge.
- Anyone is welcome to provide feedback to my solutions and help with optimizations.

## Usage

- Browse the repository and open any file to see the C++ implementation.
- Clone the repo if you'd want to compile and run solutions yourself:
    ```sh
    git clone https://github.com/ElliotFreebairn/leetcode-problems.git
    cd leetcode-problems
    ```
- Use your preferred C++ compiler to test solutions:
    ```sh
    g++ problem_name.cpp -o problem_name
    ./problem_name
    ```

## Creating a New Solution Easily

A shell script is provided to quickly create a new C++ solution file pre-filled with a standard template.
This makes it alot less tedious to manually create cpp files for each solution.

### Usage

1. Make the script executable (if it isn't already):
    ```sh
    chmod +x create_solution.sh
    ```
2. Run the script with your desired filename (without `.cpp` extension):
    ```sh
    ./create_solution.sh src/your_problem_name
    ```

This will create `src/your_problem_name.cpp` pre-filled with the my c++ template for leetcode solutions.

**Template preview:**
```cpp
#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>

using namespace std;
class Solution
{
public:

};

int main()
{

}
```
