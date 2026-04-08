const n1 = 5;
const n2 = -1;

if (n1 > n2 && n2 > 0) {
  console.log(
    "A primeira variável é maior que a segunda e a segunda variável é um número positivo"
  );
}

if (n1 > n2 && n2 < 0) {
  console.log(
    "A primeira variável é maior que a segunda e a segunda variável não é um número positivo"
  );
}

if (n1 < n2 || n2 > 0) {
  console.log(
    "A primeira variável é menor que a segunda ou a segunda variável é um número positivo"
  );
}
