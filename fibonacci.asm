section.data
last_one DT 1
last_two DT 1
result DT 0
msg db '$'



section.start
	global _start
_start:
	mov edx,1
	mov ecx,last_one
	mov ebx,1
	mov eax,4
	int 0x80
	mov eax,1
	int 0x80
	lea di, [msg + 1]
	mov ax, [résultat]
	mov bx, 10
	div bx
	dec di
	add dl, '0'
	mov [di], dl
	test ax, ax
	jnz
	ret
	mov dl,ax




