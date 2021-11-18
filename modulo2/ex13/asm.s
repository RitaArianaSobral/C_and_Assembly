.section .data
    .global base
    .global height
    .equ CONST, 2

.section .text
    .global getArea

getArea:
    movl base(%rip), %eax
    movl height(%rip), %ecx
    mull %ecx
    movl $CONST, %ecx
    divl %ecx
    ret

