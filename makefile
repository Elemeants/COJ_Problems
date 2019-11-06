FILE = ${PROBLEM}/${PROBLEM}

build:
	@echo Compilando problema ${PROBLEM}
	@g++ ./${FILE}.cpp -o ./${FILE}.exe --std=c++11
	@echo Compilacion terminada

run: build
	@echo Ejecutando problema ${PROBLEM}
	@./${FILE}.exe