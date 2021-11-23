.section .data
    .global num1
    .global num2

.section .text
    .global sum
    .global subtraction
    .global multiplication
    .global division
    .global modulus
    .global power2
    .global power3

sum:
    movl num1(%rip),%eax
    movl num2(%rip),%ecx
    addl %ecx, %eax
    ret

subtraction:
    movl num1(%rip),%eax
    movl num2(%rip),%ecx
    sub %ecx,%eax
    ret

multiplication:
    movl num1(%rip),%eax
    movl num2(%rip),%ecx
    imul %ecx,%eax
    ret

division:
    movl num1(%rip),%eax
    cdq
    movl num2(%rip),%ecx
    idivl %ecx
    ret

modulus:
    movl num1(%rip), %eax
    cmp $0, %eax

    jl jump_is_less
    jmp end

jump_is_less:
    movl $-1, %ecx
    imul %ecx, %eax
    jmp end

end:
    ret

power2:
    movl num1(%rip), %eax
    movl num1(%rip), %ecx
    imul %ecx, %eax
    ret


power3:
    movl num1(%rip), %eax 
    movl num1(%rip), %ecx
    imul %ecx, %eax
    imul %ecx, %eax
    ret


