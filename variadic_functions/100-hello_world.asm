section .data
    message db "Hello, World", 10  ; Message to be printed with newline
    msg_len equ $ - message        ; Calculate the length of the message automatically

section .text
    global _start

_start:
    ; Print "Hello, World\n" to the screen
    ; syscall: sys_write (1)
    mov rax, 1        ; sys_write -> syscall number
    mov rdi, 1        ; stdout (file descriptor)
    mov rsi, message  ; Address of the message
    mov rdx, msg_len  ; Length of the message
    syscall           ; Make the system call

    ; Exit the program
    ; syscall: sys_exit (60)
    mov rax, 60       ; sys_exit -> syscall number
    xor rdi, rdi      ; Exit code 0 (successful)
    syscall           ; Make the system call


