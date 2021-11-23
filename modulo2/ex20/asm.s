.section .data
    .global i
    .equ constA, 1
    .equ constB, 1

.section .text
    .global summation

summation:
    movl i(%rip), %r8d
    movl $constA, %eax
    movl $constB, %ecx # mov para os devidos registos

    imul %r8d, %r8d # valor ^2
    imul %eax # valor ^2
     
    imul %r8d, %eax

    # idiv %

    # cmpq

end:
    ret
