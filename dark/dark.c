#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <stdbool.h>
#include <locale.h>
#include <unistd.h>


void type(const char *p, int slow){

    if(NULL == p){
        return;
    }
    if(slow == 0){
       while(*p){
          printf("%c\x5f", *p++);
          Sleep(30);
          printf("\b \b");
          Sleep(30);
    }
    }else if(slow == 1){
       while(*p){
          printf("%c\x5f", *p++);
          Sleep(80);
          printf("\b \b");
          Sleep(80);
       }
    }


}
int main (){
    setlocale(LC_ALL, "Portuguese"); //lingua
    /*printf("Consegue vê-lo?\t");
    sleep(5);
    printf("\tConsegue ouvi-lo?");
    sleep(5);
    printf("\tConsegue lembra-lo?");
    sleep(5);
    printf("\tConsegue reconhece-lo");
    sleep(5);
    printf("\n\n\nClaro que você lembra... ");
    sleep(2);
    printf("Já que o reconhecemos como ");
    sleep(4);
    printf("M");
    sleep(1);
    printf("O");
    sleep(1);
    for(int i = 0; i < 2000; i++){
        printf("[]");
        Sleep(1);
    }
    */
    system("cls");
    getch();
    type("Seu rosto está deitado sobre uma superfície úmida.\n",0);
    type("Lentamente você se levanta, já que seu corpo lhe impede de interpretar essa ação básica.\n",0);
    type("Olhando ao redor\n\n",0);
    type("Quero dizer, você nem sabe se \"olhar\" é a palavra certa que deve-se procurar. \n\n",0);
    type("Percebe-se que não existe cor,",0);
    sleep(1);
    type("ou luz, ",0);
    sleep(2);
    type("ou qualquer coisa que lhe traz segurança. ",0);
    sleep(3);
    type("Uma profunda escuridão te consumiu.",1);
    sleep(4);
    type("\nE mesmo assim, não tem tanta certeza se seus olhos estão refletindo a realidade...",0);
    type("\n\n\nVocê decide andar, mesmo que sua consiência diga ao contrário....",0);
    getch();
    return 0;
}
