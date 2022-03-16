
# _printf

Creation of the printf standard library function for a Holberton School
group project. The purpose of _printf is to work exactly like the printf function from *stdio.h*

# What is _printf

_printf is a C language implemementation of the standard library printf funcion, which does formated printing to the standar output.

# prototype

int _printf(const char *formar, ...)

*format is the string of an infinite number of arguments being passed as input and returns the characters printed.
... is the infinite number of possible arguments.
Program looks for "%" which indicates that an additional value is going to be passed
as an input. The letter following is going to be read as a conversion specifier as to what type of data 
is going to be printed.

# compile
![carbon(2)](https://user-images.githubusercontent.com/63136472/158617809-5a044705-52d9-4455-b0f2-3ce2fdc5eee4.png)


# testing
_printf was tested compiling all the C files and functions. Program was able to print char characters and strings.And produced the following output.


# output 
![carbon(1)](https://user-images.githubusercontent.com/63136472/158617645-723ea68a-36ea-486f-afd8-38bd9aed02ab.png)


#bugs
Program does not print decimals or integers at the moment.
Program does not cover edge cases.

#about
_printf was implemented by Fernando Aponte & Chris Lind as part of a Holberton School group project.
