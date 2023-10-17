# Nome do executavel

PROG = main

# Ferramentas do toolchain

CC = gcc
LD = gcc
CP = objcopy
RM = rm -rf

# Diretorios arquivos objeto e de lista de dependencias serao salvos

OBJDIR = build
DEPDIR = .deps

# Diretorios a serem incluidos

INCDIR = -I./

# Arquivos a serem compilados

SRCS = main.c \
       operacao.c

# Flags do compilador e linker

CFLAGS = -Wall $(INCDIR)
DEPFLAGS = -MMD -MP -MF $(DEPDIR)/$*.d
LDFLAGS =

# Gera lista de arquivos objeto e cria diretorio onde serao salvos

OBJS = $(patsubst %, $(OBJDIR)/%.o, $(basename $(SRCS)))
$(shell mkdir -p $(dir $(OBJS)) > /dev/null)

# Gera lista de arquivos de lista dependencia e cria diretorio onde serao salvos

DEPS = $(patsubst %, $(DEPDIR)/%.d, $(basename $(SRCS)))
$(shell mkdir -p $(dir $(DEPS)) > /dev/null)

all: $(PROG)

$(PROG): $(OBJS)
	$(LD) $(LDFLAGS) $^ -o $@

$(OBJDIR)/%.o: %.c $(DEPDIR)/%.d
	$(CC) -c $(CFLAGS) $(DEPFLAGS) $< -o $@

# Cria um novo target para cada arquivo de dependencia possivel

$(DEPS):

# Inclui conteudo dos arquivos de dependencia

-include $(DEPS)

.PHONY: clean
clean:
	$(RM) $(OBJS) $(DEPS) $(PROG)