[bits 32]

[global asmEntry]

asmEntry:
strcpy:
        push    ebp
        mov     ebp, esp
        sub     esp, 16
        mov     DWORD  [ebp-4], 0 ;; init incrementeur
        jmp     .boucle
.cpy:
        mov     edx, DWORD [ebp-4]
        mov     eax, DWORD [ebp+12]
        add     eax, edx ;; iterate on buffer
        mov     ecx, DWORD [ebp-4]
        mov     edx, DWORD [ebp+8]
        add     edx, ecx ;; iterate on string
        movzx   eax, BYTE [eax]
        mov     BYTE [edx], al ;; affect value to buffer
        add     DWORD [ebp-4], 1 ;; incremente incrementeur
.boucle:
        mov     edx, DWORD [ebp-4]
        mov     eax, DWORD [ebp+12]
        add     eax, edx
        movzx   eax, BYTE [eax]
        test    al, al ;; test if end string
        jne     .cpy
        leave
        ret
    ret