# Nome do compilador
CC = gcc

# Diretório dos arquivos-fonte
SRC_DIR = src/decifra

# Bibliotecas
LIBS += -lm

# Nome do executável
TARGET = decifra.out

# Arquivos .c que serão compilados
SRCS = $(wildcard $(SRC_DIR)/*.c)

# Regra padrão para compilar o projeto
all: $(TARGET)

# Como gerar o executável
$(TARGET): $(SRCS)
	$(CC) $(SRCS) $(LIBS) -o $(TARGET)

# Limpar os arquivos objetos e o executável
clean:
	rm -f $(TARGET)

# Adicionar uma regra para rodar o programa
run: $(TARGET)
	./$(TARGET)

# Arquivos objetos gerados a partir dos .c
#OBJS = $(SRCS:.c=.o)

# Como gerar o executável
#$(TARGET): $(OBJS)
#	$(CC) $(OBJS) $(LIBS) -o $(TARGET)

# Regra para compilar cada arquivo .c em .o
#%.o: %.c
#	$(CC) -c $< -o $@
