	.file	"getcallerpc-Linux-amd64.S"
	.type	getcallerpc,@function
	.global	getcallerpc
getcallerpc:
	movl	4(%ebp), %eax
	ret
