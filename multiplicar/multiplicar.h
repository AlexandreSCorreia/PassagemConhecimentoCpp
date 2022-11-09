//Transformando em biblioteca dinamica, por se tratar de biblioteca dinamica
//a aplicação que for utilizar ela vai precisar do arquivo.dll na raiz do projeto para
//que se utilizado essa dll
/**
 * #define DLLAPI __declspec(dllexport)
 * esse define existe para os usuarios dessa biblioteca
 * pois quem for utilizar a biblioteca não vai exportar ela, mas sim importar
 * então o define existe para isso, quando você for usar como cliente de uma dll
 * ele vai ter que chamar dll import inves de export, atraves dos if e defs que é feito isso
 * 
 * __declspec é só para windows, linux ja funciona isso por padrao
*/
#define DLLAPI __declspec(dllexport)
DLLAPI double multiplicar(double val1, double val2);