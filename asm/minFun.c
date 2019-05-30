min:
	movq %RDI, %RAX // rax = rsi
	cmpq %RDI, %RSI // rsi - rdi > 0 => rsi > rdi
	ja rdi_git // above 0
	movq %RSI, %RAX // else
rdi_git:
	ret