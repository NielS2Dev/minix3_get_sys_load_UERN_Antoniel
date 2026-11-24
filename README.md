# get_sys_load() no MINIX 3

Chamada de sistema que retorna o load average (carga média) do sistema.

## Funcionando

![Execução do get_sys_load](https://i.ibb.co/pjSVWgwZ/Captura-de-tela-de-2026-11-23-22-49-05.png)

## Como funciona
1. Programa de usuário chama `_syscall`
2. O PM recebe a mensagem e executa `do_get_sys_load`
3. O valor da carga é devolvido ao programa

## Código
- `teste_load.c`: programa de teste
