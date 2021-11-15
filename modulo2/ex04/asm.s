.section .data
    .global op1
    .global op2
    .global op3
    .global op4

.section .text
    .global sum_v3 # int sum_v2(void)
sum_v2:
    movl op1(%rip), %eax # place op1 in eax
    movl op2(%rip), %esi # place op2 in esi
    movl $CONST, %ecx # place CONST in ecx
    movl $CONST, %edx # place CONST in edx
    subl %eax, %ecx
    subl %esi, %edx
    subl %edx, %ecx
    movl %ecx, %eax

    ret