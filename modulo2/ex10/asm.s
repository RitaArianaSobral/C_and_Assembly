.section .data
    .global op1
    .global op2

.section .text
    .global isMultiple

isMultiple:
    movslq op1(%rip), %rax
    movslq op2(%rip), %rcx
    addq %rcx, %rax 
    adcq %rcx, %rax

    ret
