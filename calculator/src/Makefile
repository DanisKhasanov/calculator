CC = gcc
CFLAGS = -Wall -Werror -Wextra -g -std=c11
OBJ = stack.c calculator.c parser.c
TESTFLAGS = -lcheck -coverage -lpthread -pthread  
LDFLAGS := -lcheck -lgcov -fprofile-arcs --coverage
TARGET := SmartCalc
ifeq ($(shell uname), Linux)
    LDFLAGS += -lrt -lm -lsubunit
    OPEN_CMD := xdg-open
else ifeq ($(shell uname), Darwin)
    OPEN_CMD := open
endif

all: clean Smart_Calc.a

rebuild: clean all

Smart_Calc.a:
	$(CC) $(CFLAGS) -c $(OBJ)
	ar -rv Smart_Calc.a *.o smart_calc.h
	ranlib Smart_Calc.a

valgrind_test: s21_matrix.a
	$(CC) $(CFLAGS) -o test smart_calc_test.c -L. $(TESTFLAGS)  Smart_Calc.a 
	valgrind --tool=memcheck --leak-check=yes ./test

test: Smart_Calc.a
	$(CC) $(CFLAGS) -o test smart_calc_test.c  -L. $(TESTFLAGS)  Smart_Calc.a 
	./test


install:  dvi
	cd SmartCalc/ && qmake && make && make clean 
	mv SmartCalc/SmartCalc.app build

xdg-open:
	./build/Contents/MacOS/SmartCalc

uninstall: 
	cd SmartCalc && rm -rf Makefile SmartCalc.app SmartCalc.pro.user .qmake.stash .qtc_clangd .tmp .qm *.o
	rm -rf build

gcov_report: clean test
	$(CC) $(CFLAGS) $(TESTFLAGS) -c *.c
	ar -rv Smart_Calc.a *.o smart_calc.h
	ranlib Smart_Calc.a
	$(CC) $(CFLAGS) -o test smart_calc_test.c -L. $(TESTFLAGS)  Smart_Calc.a 
	./test
	lcov -t "gcovreport" -o gcovreport.info -c -d .
	genhtml -o report gcovreport.info
	open report/index.html

dvi:
	xdg-open dvi.html

dist: 
	tar -cvf SmartCalcDist.tar.gz dvi.html Makefile *.c *.h  SmartCalc/*

dist_clean: 
	rm -rf SmartCalcDist.tar.gz SmartCalcDist

style_check:
	clang-format -style=Google -n *.c *.h  SmartCalc/*.cpp SmartCalc/*.h SmartCalc/*.ui

style:
	clang-format -style=Google -i *.c *.h  SmartCalc/*.cpp SmartCalc/*.h SmartCalc/*.ui

clean: 
	rm -rf *.o *.gcno *.a *.gcda *.gcov *.info report test test.d test.dSYM a.out.dSYM dvi
