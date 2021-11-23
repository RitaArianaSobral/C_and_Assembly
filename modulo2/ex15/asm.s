.section .data
    .global A
    .global B
    .global C
    .global D

.section .text
    .global compute

compute:
    movl A(%rip), %eax
    movl B(%rip), %ecx
    imull %ecx, %eax

    movl C(%rip), %ecx
    addl %ecx,%eax

    movl D(%rip), %ecx

    je jump_if_equals

    movl $0, %edx
    cdq
    idivl %ecx
    jmp end
jump_if_equals:
    movl $0, %eax
    jmp end
end:
    ret


