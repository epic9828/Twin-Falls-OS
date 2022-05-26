[bits 32]
VID_MEM equ 0xb8000
W_ON_B equ 0x1f

print_pm:
  pusha
  mov edx, VID_MEM

print_pm_loop:
  mov al, [ebx]
  mov ah, W_ON_B
  cmp al, 0
  je pm_done
  mov [edx],ax
  add ebx, 1
  add edx, 2
  jmp print_pm_loop
pm_done:
  popa 
  ret
  