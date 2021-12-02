.section .data
	.global ptr1

.section .text
	.global zero_count

zero_count:
    movq ptr1(%rip), %rdx
	movl $0, %eax
    jmp loop 
loop:
		movb (%rdx),%cl
		cmpb $0,%cl
		je end
		cmpb $48,%cl
		je equals
		incq %rdx
		jmp loop

equals:		
    incl %eax
	incq %rdx
    jmp loop

end:
    ret
    