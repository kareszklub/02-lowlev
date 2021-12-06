
	mov eax, 10

	cmp eax, 10

	jg .greater
	jl .smaller
	je .equal

	.greater:
	mov ebx, str1
	call print_string
	jmp end

	.smaller:
	mov ebx, str2
	call print_string
	jmp end

	.equal:
	mov ebx, str3
	call print_string
	jmp end
