.section .data
    .global op1
    .global op2
op3:
    .long
op4:
    .long

.global op3 
.global op4

.section .text
    .global sum_v3

sum_v3:
    movl op4(%rip), %eax
    addl op3(%rip), %eax
    subl op2(%rip), %eax
    addl op1(%rip), %eax
    
    ret
