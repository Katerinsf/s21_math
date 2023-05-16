FLAGS = -Wall -Werror -Wextra -std=c11
FUNC = s21_ceil.c s21_fabs.c s21_abs.c s21_floor.c s21_fmod.c s21_pow.c s21_exp.c \
s21_log.c s21_sqrt.c s21_sin.c s21_cos.c s21_tan.c s21_atan.c s21_asin.c s21_acos.c
FUNC_LIB = s21_ceil.o s21_fabs.o s21_abs.o s21_floor.o s21_fmod.o s21_pow.o s21_exp.o \
s21_log.o s21_sqrt.o s21_sin.o s21_cos.o s21_tan.o s21_atan.o s21_asin.o s21_acos.o

all:  test gcov_report

s21_math.o:
	gcc $(FLAGS) -c $(FUNC) s21_math.h

s21_math.a: s21_math.o
	ar rc s21_math.a $(FUNC_LIB)
	ranlib s21_math.a

test: clean s21_math.a 
	gcc $(FLAGS) -fprofile-arcs -ftest-coverage -o test $(FUNC) s21_test.c -lcheck -lm -lpthread
	./test

gcov_report: s21_math.a
	gcov s21_test.c
	lcov --capture --directory . --output-file coverage.info
	genhtml coverage.info --output-directory out

clean:
	rm -rf *.o out *.info *.gcda *.gcno *.gcov *.gch *.out *.a test

rebuild: clean all