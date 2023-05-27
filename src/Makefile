cc =gcc -Wall -Werror -Wextra -std=c11
GCOVFLAGS = -fprofile-arcs -ftest-coverage
LFLAGS = -lcheck

all: s21_math.a 

s21_math.a: s21_math.c
	$(cc) -c s21_math.c -o s21_math.o
	ar rc libs21_math.a s21_math.o
	ranlib libs21_math.a
	cp libs21_math.a s21_math.a

test: s21_math.a
	$(cc) -L. -ls21_math ./test/*.c  -lcheck -o s21_test
	./s21_test

gcov_report: s21_math.a
	$(cc) $(GCOVFLAGS) $(LFLAGS) ./test/*.c s21_math.a -o s21_test -lcheck
	./s21_test
	gcov ./test/*.c
	lcov -t "test" -o test.info -c -d .
	genhtml -o report/ test.info
	open ./report/index.html
	rm -rf *.o *.gcno *.gcda 

check: test s21_math.a
	cp ../materials/linters/.clang-format .clang-format
	clang-format -n *.c *.h
	clang-format -n ./test/*.c ./test/*.h
	CK_FORK=no leaks --atExit -- ./s21_test

valgrind:
	valgrind ./s21_test --leak-check=full

clean:
	rm -rf *.o *.gcno *.gcda *.a *.info report .clang-format s21_test

###