	.file	"max_num.c"
	.text
	.section	.rodata
.LC0:
	.string	"enter the first value:"
.LC1:
	.string	"%d"
.LC2:
	.string	"enter the second value:"
.LC3:
	.string	"enter the third value:"
.LC4:
	.string	"enter the fourth value:"
.LC5:
	.string	"%d  : is the maximum number\n "
	.text
	.globl	main
	.type	main, @function
main:
.LFB0:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$32, %rsp
	movq	%fs:40, %rax
	movq	%rax, -8(%rbp)
	xorl	%eax, %eax
	leaq	.LC0(%rip), %rdi
	movl	$0, %eax
	call	printf@PLT
	leaq	-24(%rbp), %rax
	movq	%rax, %rsi
	leaq	.LC1(%rip), %rdi
	movl	$0, %eax
	call	__isoc99_scanf@PLT
	leaq	.LC2(%rip), %rdi
	movl	$0, %eax
	call	printf@PLT
	leaq	-20(%rbp), %rax
	movq	%rax, %rsi
	leaq	.LC1(%rip), %rdi
	movl	$0, %eax
	call	__isoc99_scanf@PLT
	leaq	.LC3(%rip), %rdi
	movl	$0, %eax
	call	printf@PLT
	leaq	-16(%rbp), %rax
	movq	%rax, %rsi
	leaq	.LC1(%rip), %rdi
	movl	$0, %eax
	call	__isoc99_scanf@PLT
	leaq	.LC4(%rip), %rdi
	movl	$0, %eax
	call	printf@PLT
	leaq	-12(%rbp), %rax
	movq	%rax, %rsi
	leaq	.LC1(%rip), %rdi
	movl	$0, %eax
	call	__isoc99_scanf@PLT
	movl	-24(%rbp), %edx
	movl	-20(%rbp), %eax
	cmpl	%eax, %edx
	jle	.L2
	movl	-24(%rbp), %edx
	movl	-16(%rbp), %eax
	cmpl	%eax, %edx
	jle	.L2
	movl	-24(%rbp), %edx
	movl	-12(%rbp), %eax
	cmpl	%eax, %edx
	jle	.L2
	movl	-24(%rbp), %eax
	movl	%eax, %esi
	leaq	.LC5(%rip), %rdi
	movl	$0, %eax
	call	printf@PLT
.L2:
	movl	-20(%rbp), %edx
	movl	-24(%rbp), %eax
	cmpl	%eax, %edx
	jle	.L3
	movl	-20(%rbp), %edx
	movl	-16(%rbp), %eax
	cmpl	%eax, %edx
	jle	.L3
	movl	-20(%rbp), %edx
	movl	-12(%rbp), %eax
	cmpl	%eax, %edx
	jle	.L3
	movl	-20(%rbp), %eax
	movl	%eax, %esi
	leaq	.LC5(%rip), %rdi
	movl	$0, %eax
	call	printf@PLT
.L3:
	movl	-16(%rbp), %edx
	movl	-20(%rbp), %eax
	cmpl	%eax, %edx
	jle	.L4
	movl	-16(%rbp), %edx
	movl	-24(%rbp), %eax
	cmpl	%eax, %edx
	jle	.L4
	movl	-16(%rbp), %edx
	movl	-12(%rbp), %eax
	cmpl	%eax, %edx
	jle	.L4
	movl	-16(%rbp), %eax
	movl	%eax, %esi
	leaq	.LC5(%rip), %rdi
	movl	$0, %eax
	call	printf@PLT
.L4:
	movl	-12(%rbp), %edx
	movl	-20(%rbp), %eax
	cmpl	%eax, %edx
	jle	.L7
	movl	-12(%rbp), %edx
	movl	-16(%rbp), %eax
	cmpl	%eax, %edx
	jle	.L7
	movl	-12(%rbp), %edx
	movl	-24(%rbp), %eax
	cmpl	%eax, %edx
	jle	.L7
	movl	-12(%rbp), %eax
	movl	%eax, %esi
	leaq	.LC5(%rip), %rdi
	movl	$0, %eax
	call	printf@PLT
.L7:
	nop
	movq	-8(%rbp), %rax
	xorq	%fs:40, %rax
	je	.L6
	call	__stack_chk_fail@PLT
.L6:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE0:
	.size	main, .-main
	.ident	"GCC: (Ubuntu 7.5.0-3ubuntu1~18.04) 7.5.0"
	.section	.note.GNU-stack,"",@progbits
