// возвдение в степень
pow:
    movq $1, %RAX
    loop:
        cmpq $0, %RSI
        je out // равна ли 0 предудщая разность, если да, переходим на out
        mulq %RDI
        dec %RSI
        jmp loop
    out:
        ret