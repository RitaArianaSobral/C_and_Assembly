.section .data
    .global op1
    .global op2
    .equ CONST, 15

.section .text
    .global sum_v2 # int sum_v2(void)
sum_v2:
    movl op1(%rip), %eax # place op1 in eax
    movl op2(%rip), %ebx # place op2 in ebx
    movl $CONST, %ecx # place CONST in ecx
    movl $CONST, %edx # place CONST in edx
    subl %eax, %ecx
    subl %ebx, %edx
    subl %edx, %ecx
    movl %ecx, %eax

    ret