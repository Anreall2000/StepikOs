// реализовать обмен, как функцию
swap: // метка
    pushq (%RDI)
    pushq (%RSI)
    popq (%RDI)
    popq (%RSI)
    retq //выход из функции, по адресу на стеке
