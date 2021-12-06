
; string pointer in ebx
print_string:
	mov ah, 0x0E

	.loop:

	mov al, byte [ebx]
	int 0x10
	inc ebx
	cmp byte [ebx], 0

	jne .loop

	ret
