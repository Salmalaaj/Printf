# ft_printf - Custom Implementation of printf

## Overview

**ft_printf** is a project aimed at recreating the standard `printf` function in C. This project provides a deeper understanding of variadic functions and strengthens overall C programming skills. The custom `ft_printf` function supports a variety of conversion specifiers and mimics the behavior of the original `printf` function in the C standard library.

## Project Structure

### 1. **Mandatory Features**
The `ft_printf` function has been implemented with the following conversion specifiers:

- `%c`: Prints a single character.
- `%s`: Prints a string.
- `%p`: Prints a pointer address in hexadecimal format.
- `%d`: Prints a decimal (base 10) number.
- `%i`: Prints an integer in base 10.
- `%u`: Prints an unsigned decimal (base 10) number.
- `%x`: Prints a number in hexadecimal (base 16) lowercase format.
- `%X`: Prints a number in hexadecimal (base 16) uppercase format.
- `%%`: Prints a percent sign.

### 2. **Compilation**

The project includes a `Makefile` with the following rules:

- `all`: Compiles the library (`libftprintf.a`).
- `clean`: Removes object files.
- `fclean`: Removes object files and the library.
- `re`: Recompiles the library from scratch.

To compile the library, simply run:

```bash
make
```
## 3. **Usage**

To use `ft_printf` in your own C projects:

1. Include the `libftprintf.a` library in your project.
2. Include the `ft_printf.h` header in your source files.
3. Compile your project with the `libftprintf.a` library.

### Example:

```c
#include "ft_printf.h"

int main(void)
{
    ft_printf("Hello, %s!\n", "world");
    ft_printf("Character: %c, Decimal: %d, Hex: %x\n", 'A', 123, 0x7B);
    return (0);
}
```

##  Testing

It is highly recommended to create test cases to ensure that `ft_printf` behaves as expected compared to the standard `printf`. This will also aid in debugging and during peer evaluations.

##  Conclusion

The `ft_printf` project is a valuable exercise in understanding variadic functions and deepening knowledge of C programming. Upon completion, this function can be added to your `libft` for use in future projects. Contributions and feedback are always welcome!

