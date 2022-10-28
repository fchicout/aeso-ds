#include <stdio.h>

typedef struct
{
    char prefixo[10];
    char nome[50];
    char nome_do_meio[80];
    char sobrenome[15];
    char sufixo[10];
    char apelido[30];
    char registrar_como[100];
} _Nome;

typedef struct
{
    char nome_empresa[120];
    char cargo[70];
    char departamento[120];
} _Empresa;

typedef struct
{
    char mail[120];
    char descricao[40];
    _Email *proxEmail;
} _Email;

typedef struct
{
    char fone[120];
    char descricao[40];
    _Telefone *proxTelefone;
} _Telefone;

typedef struct
{
    char linha1[200];
    char linha2[200];
    char cidade[90];
    char estado[40];
    char cep[10];
    char caixa_postal[10];
    char marcador[10];
    _Endereco *proxEndereco;
} _Endereco;

typedef struct
{
    _Nome nome;
    _Empresa empresa;
    _Email *emails;
    _Telefone *telefones;
    _Endereco *enderecos;
    char aniversario[10];
    char evento[10];
    char website[40];
    char relacao[50];
    char chat[40];
    char chamada_pela_internet[70];
    char observações[200];
    _Contato *proxContato;
} _Contato;

_Contato* contatos_criaLista()
{
	return NULL;
}

void contatos_insere(_Contato *startRef, _Nome nome, 
                     _Empresa empresa, _Email *startRefListaEmail, 
                     _Telefone *telefones, _Endereco *enderecos, 
                     char aniversario[], char evento[],
                     char website[], char relacao[], char chat[], 
                     char chamada_pela_internet[], char observações[]);
void contatos_remove(_Contato *startRef, _Nome nome);
_Contato contatos_busca(_Contato *startRef, _Nome nome);
int contatos_eh_fim(_Contato *startRef);

_Email* email_criaLista()
{
	return NULL;
}
void email_insere(_Contato *startRefContato, _Email startRefEmail, 
                    char mail[], char descricao[]);
void email_remove(_Contato *startRefContato, _Email startRefEmail, char mail[]);
_Email* email_busca(_Contato *startRefContato, _Email startRefEmail, char mail[]);
int email_eh_fim(_Contato *startRefContato, _Email startRefEmail);

_Telefone* telefone_criaLista()
{
	return NULL;
}
void telefone_insere(_Contato *startRefContato, _Telefone startRefTelefone, 
                        char fone[], char descricao[]);
void telefone_remove(_Contato *startRefContato, _Telefone startRefTelefone, 
                        char fone[]);
_Telefone* telefone_busca(_Contato *startRefContato, _Telefone startRefTelefone, 
                            char fone[]);
int telefone_eh_fim(_Contato *startRefContato, _Telefone startRefTelefone);

_Endereco* endereco_criaLista()
{
	return NULL;
}
void endereco_insere(_Contato *startRefContato, _Endereco startRefEndereco, 
                        char linha1[], char linha2[], char cidade[],
                        char estado[], char cep[], char caixa_postal[],
                        char marcador[]);
void endereco_remove(_Contato *startRefContato, _Endereco startRefEndereco,
                        char linha1[]);
_Endereco* endereco_busca(_Contato *startRefContato, _Endereco startRefEndereco,
                            char linha1[]);
int endereco_eh_fim();

int main(int argc, char const *argv[])
{

    return 0;
}
