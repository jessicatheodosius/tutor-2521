objects = q2 myprog q5 q6 q6sol q7 q7sol

all: $(objects)

q2: q2.c
	clang -Wall -Werror -o q2 q2.c

myprog:q4.c
	clang -Wall -Werror -o myprog q4.c

q5: q5.c
	clang -Wall -Werror -o q5 q5.c

q6: q6.c
	clang -Wall -Werror -o q6 q6.c

q6sol: q6sol.c
	clang -Wall -Werror -o q6sol q6sol.c

q7: q7.c
	clang -Wall -Werror -o q7 q7.c

q7sol: q7sol.c
	clang -Wall -Werror -o q7sol q7sol.c

clean:
	rm $(objects)
