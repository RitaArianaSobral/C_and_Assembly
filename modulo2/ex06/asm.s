.section .data
   # .global s
    .global byte1
    .global byte2

.section .text
  #  .global swapBytes
    .global concatBytes
 # swapBytes:
 #   movw s(%rip),%cx
 #   movb %cl, %ah
 #   movb %ch, %al
 #   ret

concatBytes:
    movb byte1(%rip), %al
    movb byte2(%rip), %ah
    ret
