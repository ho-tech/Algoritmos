CC=nasm
hola: hola.o
	ld -o hola hola.o
	echo "Compilado"
hola.o: hola.asm
	$(CC) -felf64 hola.asm -o hola.o
hola.asm:
	echo "Compilando"

clean:
	rm * *.o
