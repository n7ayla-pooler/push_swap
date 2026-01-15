
This project has been created as part of the 42 curriculum by abdnahal.
 
# push_swap

A sorting algorithm project that efficiently sorts a stack of integers using a limited set of operations.

## Description

Push_swap is a 42 school project that implements an efficient sorting algorithm using two stacks (stack_a and stack_b) with only specific allowed operations. The goal is to sort the integers in stack_a in ascending order while minimizing the number of operations used.

## Features

- Sorts integers using stack-based operations
- Handles stacks of varying sizes with optimized algorithms
- Supports lists up to 150 elements with range 16 chunks
- Supports lists above 150 elements with range 26 chunks
- Input validation (duplicate detection, integer overflow checking)
- Bonus checker program to validate operation sequences

## Allowed Operations

### Stack Operations
- **sa** - Swap the first two elements of stack a
- **sb** - Swap the first two elements of stack b
- **ss** - Swap both stacks simultaneously
- **pa** - Push the first element from stack b to stack a
- **pb** - Push the first element from stack a to stack b
- **ra** - Rotate stack a upward (first element goes to the end)
- **rb** - Rotate stack b upward
- **rr** - Rotate both stacks upward
- **rra** - Reverse rotate stack a downward (last element goes to the front)
- **rrb** - Reverse rotate stack b downward
- **rrr** - Reverse rotate both stacks downward

## Installation & Compilation

### Build the project

```bash
make              # Compile push_swap
make bonus        # Compile checker bonus program
make clean        # Remove object files
make fclean       # Remove all compiled files
make re           # Recompile everything
```

## Usage

### Running push_swap

```bash
./push_swap 3 2 1 0
./push_swap "3 2 1 0"
```

The program will output the sequence of operations needed to sort the stack.

### Using the checker (bonus)

```bash
./push_swap 3 2 1 0 | ./checker 3 2 1 0
```

The checker validates if the operations produced by push_swap correctly sort the stack. It outputs:
- **OK** - If the stack is sorted and stack b is empty
- **KO** - If the stack is not sorted or stack b is not empty

## Algorithm Strategy

The sorting algorithm uses different approaches based on the stack size:

### Small stacks (2-5 elements)
- **2 elements**: Simple swap if needed
- **3 elements**: Optimized 3-element sort with minimal operations
- **4 elements**: Sort small portions and merge
- **5 elements**: Similar approach to 4 elements with additional handling

### Medium to Large stacks (6+ elements)
- **6-150 elements**: Divide into chunks (range 16)
  1. Push elements within range to stack_b
  2. Retrieve sorted elements from stack_b back to stack_a
  
- **150+ elements**: Larger chunks (range 26) for better optimization
  1. Use same divide-and-conquer approach with larger ranges
  2. Optimized rotation strategies based on stack position


## Data Structure

The project uses a linked list to represent the stacks:

```c
typedef struct s_list {
    long    num;      // The numeric value
    int     index;    // Relative position (0 = smallest, n = largest)
    struct s_list *next;
}   t_list;
```

## Error Handling

The program validates input and handles errors:
- **Duplicate numbers**: Error message and exit
- **Integer overflow**: Numbers outside INT_MIN to INT_MAX are rejected
- **Invalid input**: Non-numeric arguments trigger an error
- **Empty input**: Returns without sorting

## Performance

The algorithm aims for:
- **Up to 150 elements**: < 1500 operations
- **Up to 500 elements**: < 5500 operations

Actual performance depends on input distribution and initial order.

## Resources

- ``yboussif`` : helped me with the algorithm and the optimisation of my code
- ``ChatGpt`` : Helped with making this README
- ``ylahssin `` : helped with the testing of the program
- ``Spotify`` : Helped me concentrate with the good music (not sponsored ofc)