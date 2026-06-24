# Simple CRUD

Um projeto prático de uma aplicação CRUD (Create, Read, Update, Delete) executada via terminal. Este projeto foi desenvolvido focado na estruturação lógica e no gerenciamento de build via `Makefile`.

Atualmente, o sistema opera **sem integração com banco de dados**. Os dados são gerenciados dinamicamente em memória durante a execução do programa (ou persistidos em arquivos locais temporários), sendo ideal para demonstrar os conceitos fundamentais de manipulação de estruturas de dados.


O sistema permite as seguintes operações básicas de gerenciamento:

* **[C]reate:** Adicionar novos registros.
* **[R]ead:** Listar todos os registros ou buscar um registro específico.
* **[U]pdate:** Atualizar as informações de um registro existente.
* **[D]elete:** Remover um registro do sistema.

## Pré-requisitos

Para compilar e executar este projeto localmente, você precisará ter instalado em sua máquina:

* Ferramenta de automação de build: `make`
* Compilador para a linguagem [Nome da Linguagem, ex: C/C++] (ex: clang++ ou g++)

## Como compilar e executar

Este projeto utiliza um `Makefile` para automatizar o processo de compilação. Siga os passos abaixo no seu terminal:

1. Clone este repositório:
   ```bash
   git clone https://github.com/Fanty1107/Simple_Crud_CC.git
2. Compilar:
   ```bash
   make
   ./SimpleList {username}
