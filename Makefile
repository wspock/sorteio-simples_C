CC=gcc
CFLAGS=-Wall

all: sorteio

sorteio: sorteio.c
	$(CC) $(CFLAGS) -o sorteio sorteio.c

clean:
	rm -f sorteio

help:
	@echo "Uso: make [comando]"
	@echo ""
	@echo "Comandos disponíveis:"
	@echo "  all       - Compila o programa sorteio"
	@echo "  clean     - Remove o arquivo executável"
	@echo "  help      - Mostra esta mensagem de ajuda"
