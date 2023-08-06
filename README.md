# ft_printf
## Standard C printf functions
Reproduction of the printf function.
This function outputs the datas to the file descriptor STDOUT and return the total length of 'nb'.

### How to compile library:
* `make` - to compile C files - create object files and library libft.a<br/>
* `make clean` - to remove object files<br/>
* `make fclean` - clean and remove libft.a file<br/>
* `make re` - recompile the library<br/>

### Libft functions:

| Function      | Description                                                                           |
| ------------- | --------------------------------------------------------------------------------------| 
| ft_putchar_fd | Outputs the char 'c' to the file descriptor 'fd'. |
| ft_putstr_fd  | Outputs the string 's' to the file descriptor 'fd'. |
| ft_strlen | Find length of string. |

#### Ft_printf functions

| Function      | Description                                                                           |
| ------------- | --------------------------------------------------------------------------------------| 
| ft_printf | Outputs the datas to the file descriptor STDOUT and return the total length of 'nb'. |
| ft_print_pointer | utputs the pointer of the variable 'n' to the file descriptor STDOUT and return the total length of 'nb'. |
| ft_print_unsigned_int_fd | Outputs the number 'nb' to the file descriptor STDOUT and return the total length of 'nb'. |
| ft_printnbr_base | Outputs the number 'n' to the file descriptor 'fd' with Hexadécimal base and return the total length of 'n'. |
| ft_printnbr | Outputs the number 'n' and return the total length of 'n'. |
| ft_printstr | Outputs the string 's' to the file descriptor STDOUT and return the total length of 's'. |