
; N in ebx, return in eax
fibonacci:

    cmp ebx, 0
    jg .not_0

    mov eax, 0
    jmp .end

    .not_0:
    cmp ebx, 1
    jne .else
    mov eax, 1
    jmp .end

    .else:

    push ebx
    sub ebx, 1
    call fibonacci

    pop ebx
    push ebx

    sub ebx, 2

    push ecx
    mov ecx, eax
    call fibonacci

    add eax, ecx

    pop ecx
    pop ebx

    .end:
    ret
