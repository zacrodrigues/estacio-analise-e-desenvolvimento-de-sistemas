#include <stdio.h>

int main(){
  
  // Declarando variáveis
  // As variáveis devem ter nomes significativos que facilitem o entendimento e
  // a manutenção do programa
  int idade;
  int quantidade;
  float altura;
  char letra;
  char nome[20];

  // Não pode iniciar variáveis com um número
  // Pode iniciar com _ seguido de letras ou adicionar _ no meio do nome
  // Também pode adicionar números no meio do nome
  int _teste;
  int teste_2;
  int t2;

  // A linguagem C é case sensitive
  // As variáveis abaixo são tratadas de formas diferentes
  int carro;
  int Carro;
  int CARRO;
  int carrO;

  // Não pode usar palavras reservadas
  // Palavras que já existem na linguagem C que servem para alguma coisa
  int int
  int return;

  // Os tipos de dados define os valores que uma variável pode herdar
  // O int significa que o valor a ser armazenado deve ser um valor inteiro

  // O float irá armazenar números decimais: 2.89, menos casas decimais e menos
  // precisão

  // O double armazena números decimais, só que números maiores com mais
  // precisão

  // char indica que irá armazenar uma letra. Apenas um caractere

  // char nome[8] indica que irá armazenar palavras, exemplo John Doe
  // O número dentro dos colchetes define que a variável irá receber 8
  // caracteres

  // Para cada variável é alocado um pedaço de memória ram
  // É muito importante sempre inicilizar uma variável
  // A declarar uma variável, ela poderá ser alocada em um pedaço de memória já
  // utilizado por outro programa
  // Isso fará com que ela herda o valor já alocado nesse espaço
  // Ao inicializar uma variável, você previne que ela recebe um valor
  // inesperado
  int numero = 25;
  float metros = 1.75;
  double peso = 70.5;
  char vogal = 'a';
  char sobrenome[4] = 'Doe';

  // Também pode incializar a variável bem depois de ter declarado ela
  // Exemplo da variável idade que foi declarada no início do código
  idade = 28;

  // Quando uma variável já foi inicializada em sua declaração, o código abaixo
  // estará somente atualizando o seu valor
  numero = 30;
}