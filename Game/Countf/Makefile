count.exe: count.c funCount.o funCountFromFile.o
	gcc -o count.exe count.c funCount.o funCountFromFile.o

funCountFromFile.o: funCountFromFile.c
	gcc -c funCountFromFile.c

funCount.o: funCount.c
	gcc -c funCount.c

clean:
	del *.o

