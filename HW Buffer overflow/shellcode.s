	global shellcode
	
	section .text
shellcode:
    jmp afterString
string:
    db "Farid Rajabi Nia, your grade on this assignment is an A"
afterString:    
    xor rax, rax
    mov al, 1
    mov rdi, rax
    lea rsi, [rel string]
    xor rdx, rdx
    mov dl, 55
    syscall
    mov al, 60
    xor rdi, rdi
    syscall
