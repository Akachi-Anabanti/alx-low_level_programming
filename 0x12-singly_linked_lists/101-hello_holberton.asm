global main
extern printf

section .data
	msg db "Hello, Holberton!\n", 0

section .text

main:
	push rbp
	mov rbp, rsp

	mov rdi, msg
	xor eax, eax
	call printf

	mov rsp, rbp
	pop rbp
	xor eax, eax
	ret
