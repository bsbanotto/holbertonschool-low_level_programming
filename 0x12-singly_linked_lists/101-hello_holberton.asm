section .data
  msg db "Hello, Holberton!",10

section .text
  global _start

_start:
  mov rax, 1        ; write(
  mov rdi, 1        ;   STDOUT_FILENO,
  mov rsi, msg      ;   "Hello, Holberton!\n",
  mov rdx, 18       ;   sizeof("Hello, Holberton!\n")
  syscall           ; );

  mov rax, 60       ; exit(
  mov rdi, 0        ;   EXIT_SUCCESS
  syscall           ; );
