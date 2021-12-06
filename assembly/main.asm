
[bits 16]
[org 0x7c00]

section .text

; -- CODE --

	mov ebx, 5
	call fibonacci
	
	mov ebx, str_end
	call print_string

end:
	hlt
	jmp end

%include "print_string.asm"
%include "fibonacci.asm"

; -- DATA --
str_end:
db `end`, 0
str_newline:
db `\r\n`, 0

; -- PADDING --

times 512 - 2 - ($ - $$) db 0

dw 0xaa55
