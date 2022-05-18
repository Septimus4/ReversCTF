[bits 32]

[global asmAdd]

asmAdd:
    ;; FUNCTION PROLOGUE
    push ebp ;; We push the OLD stack base
    mov ebp, esp ;; We set the stack base to esp's new value

    ; Write assembly code here!
    mov     edx, [ebp+8] ;;(1st argument)
    mov     eax, [ebp+12] ;;(2nd argument)
    add     eax, edx
    ;; FUNCTION EPILOGUE
    mov esp, ebp ;; We set ESP back to what it was
    pop ebp ;; ... and pop EBP, retrieving its old value
    ret
