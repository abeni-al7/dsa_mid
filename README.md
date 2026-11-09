# DSA Mid

C++ practice code for a data-structures and algorithms midterm: basic sorting algorithms and a singly linked list.

## Contents

| File | What it implements |
| --- | --- |
| `sorting.cpp` | Bubble sort, insertion sort and selection sort on an `int` array, with a `main` that sorts a sample array (selection sort enabled, the others commented out). |
| `linked_list.cpp` | A singly linked list `Node` with insert at beginning, insert at end, delete by key and print. Functions only, no `main`. |
| `sort` | A compiled Linux binary committed alongside the sources. |

## Built with

- C++ and the standard library

## Run it

```sh
g++ sorting.cpp -o sort && ./sort
```

`linked_list.cpp` has no `main`, and the `Node` struct definition is missing its closing semicolon, so it needs both fixes before it will compile as a program.
