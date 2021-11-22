.section .data
    .global A
    .global B
    .global C
    .global D

.section .text
    .global compute

compute:
    movl $0, %edx

    movl A(%rip), %eax
    movl B(%rip), %ecx
    imull %ecx, %eax

    movl C(%rip), %ecx
    addl %ecx,%eax

    movl D(%rip), %ecx
    movl $0, %edx
    idivl %ecx

    ret


