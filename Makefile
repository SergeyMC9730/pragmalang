all:
	gcc example.c -o example
preprocessor:
	gcc example.c -E -o preprocessor.txt