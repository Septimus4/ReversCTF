; Tells NASM we're in 32bit mode (remember this is x86 assembly!)
; Stuff in [brackets] is hints and instructions directly for NASM, not actual assembly!
[bits 32]

; Tells NASM we want to export the asmStart symbol
[global asmStart]

; Defines the asmAdd label. This code gets called by the C function
asmStart:
    ; Write assembly code here!
    mov     EAX, 42
    ret ; Returns from the function