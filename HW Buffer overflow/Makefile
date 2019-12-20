CC = gcc -m64 
CFLAGS = -Wall -g
AS  = nasm
ASFLAGS = -f elf64 -g

.SUFFIXES: .o .c
.SUFFIXES: .o .s

main: grade shellcode attack shell shel

grade: grade.o
	gcc -g -fno-stack-protector -m64 -fomit-frame-pointer grade.c -o grade

shell: shellcode.o
	$(AS) $(ASFLAGS) shellcode.s
shel: shellcode_test.o
	gcc -c -m64  shellcode_test.c

OFILES  = shellcode.o shellcode_test.o
shellcode: $(OFILES)
	$(CC) $(CFLAGS) $(OFILES) -no-pie -o shellcode_test 

attack: attack_shellcode.o
	gcc attack_shellcode.o -o attack_shellcode

clean:
	/bin/rm -f *.o shellcode
	/bin/rm -f *.o grade
	/bin/rm -f *.o attack
	/bin/rm -f *.o shell
	/bin/rm -f *.o shel

attack_shellcode.o: attack_shellcode.c buffer_addr.h



