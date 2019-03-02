all : treeLab treeLabSol

treeLab : treeLab.o BSTree.o
	gcc -o treeLab treeLab.o BSTree.o

treeLabSol : treeLab.o BSTreeSol.o
	gcc -o treeLabSol treeLab.o BSTreeSol.o

treeLab.o : treeLab.c BSTree.h
	gcc -Wall -Werror -c treeLab.c

BSTreeSol.o : BSTreeSol.c BSTree.h
	gcc -Wall -Werror -c BSTreeSol.c

BSTree.o : BSTree.c BSTree.h
	gcc -Wall -Werror -c BSTree.c

clean :
	rm treeLab{,Sol} *.o
