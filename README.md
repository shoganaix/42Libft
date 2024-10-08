# Index
* [What is LIBFT?](#libft)
* [Function List](#functions)
* [Bonus](#bonus)
* [My Makefile](#makefile)
* [Usage](#usage)
* [Final Grade](#grade)

## LIBFT 
> Libft is the first project in **_School 42_**.

The goal is to create your very own `C` library with some of the `libc` functions including some additional useful ones.
Within this repository, you will encounter a series of C functions ranging from elementary to intricately connected to list-related content.


## Functions

Libc functions | Additional functions 
:----------- | :-----------:
 isalpha     |    ft_substr      |  
 isdigit     |    ft_strjoin     |  
 isalnum     |    ft_strtrim     |  
 isascii     |    ft_split       |  
 isprint     |    ft_itoa        |  
 strlen      |    ft_strmapi     |  
 memset      |    ft_striteri    |  
 bzero       |    ft_putchar_fd  |  
 memcpy      |    ft_putstr_fd   |  
 memmove     |    ft_putendl_fd  |
 strlcpy     |    ft_putnbr_fd   |
 strlcat     | 
 toupper     | 
 tolower     | 
 strchr      | 
 strrchr     | 
 strncmp     | 
 memchr      | 
 memcmp      | 
 strnstr     | 
 atoi        | 
 calloc      | 
 strdup      | 


## Bonus 
Bonus Functions
:-----------:
ft_lstnew
ft_lstadd_front
ft_lstsize
ft_lstlast
ft_lstadd_back
ft_lstdelone
ft_lstclear
ft_lstiter
ft_lstmap


## Makefile 

### Makefiles have a very special way to indicate **VARIABLES**:

`CC`          : Tells `make` which C compiler to use

`CFLAGS`      : Specifies command line flags to pass to compiler. The flags used here are: 
                    -Wall: Enables all recommended warnings.
                    -Wextra: Enables additional warnings that are not included with -Wall.
                    -Werror: Treats all warnings as errors, stopping the compilation if warnings are present.
                    -I: Includes the necessary headers during compilation.
                    
 `LIB`        : Command used to create the static library libft.a. The **ar rcs** option creates or updates the library and generates an index if needed.
 
 `RM`         : Command used to remove files. The **rm -f** option ensures no errors are thrown if the file does not exist.

 `SRC`        : List of the *.c* source files that will be compiled and added to the library.

 `OBJ`        : List of object *.o* files generated from the *.c* source files. The transformation **$(SRC:%.c=%.o)** is used to generate corresponding .o files from .c files

 `NAME`       : The name of the library file that will be created: *libft.a*.

### Makefiles also follow certain **RULES**:

`all:`        :  Default rule, which compiles the object files

`$(NAME):`    :  takes the object files ($(OBJ)) and creates the static library libft.a

`$%.o: %.c:`  :  Compiles each .c source file into an .o object file

`bonus:`      :  Includes bonus files in the library

`clean:`      :  Removes the object files

`fclean:`     :  Removes both the object files and the libft.a

`re:`         :  Cleans everything and recompiles

`rebonus:`    :  Cleans everything and recompiles, including the bonus

`.PHONY:`     :  Declares rules

## Usage

#### Instructions
_To run this program follow the instructions bellow:_

1. Clone repo
   ```sh
   git clone https://github.com/shoganaix/42Libft
   ```
2. Compile

- run `make` or `make all` to compile `libft.a`
- run `make bonus` to compile our bonus files
- run `make clean` to delete tmp files after compile (only `libft.a` will be remain)
- run `make fclean` to delete all files after compile
- run `make re` to recompile all files

> _Just run `make`, and then make bonus to compile all! Careful with relinks_

#### More Information

To use `libft` in you project:
- just `#include <libft.h>`
- compile you files with `-I /libft/includes` 
- compile `libft`
- link you binary with `-L /libft -lft`


_For more documentation, please refer to the [wiki](https://github.com/shoganaix/42Libft/wiki/Documentation)_

## Grade
> This project got a **125**/100 in **_42_** school

<p align="center">
  <img src="https://github.com/shoganaix/42Libft/assets/123943292/136efe4b-97ca-4235-b11a-c5b4d359e3bc" width="149" alt="276990350-eebf29e7-3ffc-4307-9029-8dbb2d366f39" />
</p>

<p align="center">
  <sub>With Bonus</sub>
</p>
