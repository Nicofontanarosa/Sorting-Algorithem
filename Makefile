all: compile run

compile:
	g++ src/** -o build/run
run:
	build/run.exe
