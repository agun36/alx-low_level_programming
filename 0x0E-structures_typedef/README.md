# 0x0E. C - Structures, typedef

## Learning Objectives
- At the end of this project, you are expected to be able to explain to anyone, without the help of Google:

## General
What are structures, when, why and how to use them
- How to use typedef
- Copyright - Plagiarism
- You are tasked to come up with solutions for the tasks below yourself to meet with the above learning objectives.
- You will not be able to meet the objectives of this or any following project by copying and pasting someone else’s work.
- You are not allowed to publish any content of this project.
- Any form of plagiarism is strictly forbidden and will result in removal from the program.
## Requirements
## General
- Allowed editors: vi, vim, emacs
- All your files will be compiled on Ubuntu 20.04 LTS using gcc, using the options -Wall -Werror -Wextra -pedantic -std=gnu89
- All your files should end with a new line
- A README.md file, at the root of the folder of the project is mandatory
- Your code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl
- You are not allowed to use global variables
- No more than 5 functions per file
- The only C standard library functions allowed are printf, malloc, free and exit.
- In the following examples, the main.c files are shown as examples. You can use them to test your functions, but you don’t have to push them to your repo (if you do we won’t take them into account). We will use our own main.c files at compilation. Our main.c files might be different from the one shown in the examples
- Don’t forget to push your header file
- All your header files should be include guarded
# Task 0
### Define a new type struct dog with the following elements:
- name, type = char *
- age, type = float
- owner, type = char *
# Task 1
### Write a function that initialize a variable of type struct dog
- Prototype: void init_dog(struct dog *d, char *name, float age, char *owner);
# Task 2
### Write a function that prints a struct dog

- Prototype: void print_dog(struct dog *d);
- Format: see example bellow
- You are allowed to use the standard library
- If an element of d is NULL, print (nil) instead of this element. (if name is NULL, print Name: (nil))
- If d is NULL print nothing.
# Task 3
### Define a new type dog_t as a new name for the type struct dog.
# Task 4
### Write a function that creates a new dog.

- Prototype: dog_t *new_dog(char *name, float age, char *owner);
- You have to store a copy of name and owner
- Return NULL if the function fails
# Task 5
### Write a function that frees dogs.
- Prototype: void free_dog(dog_t *d);
