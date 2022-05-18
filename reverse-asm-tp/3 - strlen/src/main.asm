[bits 32]

[global asmEntry]

asmEntry:
strlen:
        push    ebp
        mov     ebp, esp
        sub     esp, 16
        mov     DWORD [ebp-4], 0 ;; init incrementeur
        jmp     .boucle
.iplus:
        add     DWORD [ebp-4], 1 ;; incremente incrementeur
.boucle:
        mov     edx, DWORD [ebp-4]
        mov     eax, DWORD [ebp+8]
        add     eax, edx
        movzx   eax, BYTE [eax]
        test    al, al ;; test if end string
        jne     .iplus
        mov     eax, DWORD [ebp-4] ;; retourne incrementeur
        leave
        ret