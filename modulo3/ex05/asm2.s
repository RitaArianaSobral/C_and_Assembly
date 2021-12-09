.section .data
    .global ptrvec
    .global num

.section .text
    .global vec_avg
vec_avg:

    movswl num(%rip), %ecx
    pushq %rcx
    call vec_sum
   	popq %rcx
   	movl $0, %edx
	movswl num(%rip), %ecx
	cmpl $0, %ecx
	je divisor_zero
	
	cdq
	idivl %ecx
	jmp  end
	
	divisor_zero:
	movl $0, %eax
	
end:
    ret
