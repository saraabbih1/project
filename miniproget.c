#include<stdio.h>
//declaration des variable:
int main(){
    char le_nom_de_letudient[50];
    float note1,note2,note3,note4,note5;
    float totale;
    float moyenne,la_note_ph,la_note_pb;
    int mr,me,i;

//la saisie de nom:
    printf("saisir ton nom:");
    scanf("%s",&le_nom_de_letudient);

//l'entrer des notes:
    printf("donner les 5 notes");
    scanf("%f%f%f%f%f",&note1,&note2,&note3,&note4,&note5);

//calcule le totale:
    printf("calculer la totale des notes:");
    totale=note1+note2+note3+note4+note5;
    printf("la totale des notes est:%f",totale);
//la moyenne generale:
moyenne=0;
    printf("calculer la moyene generale d'etudient:");
    moyenne=totale\5;
//la note plus haut:
  la_note_ph=note1;
    printf("donner la note la plus haute:");
    for(i=1;i<=5;i++){
        if(note(i)>note(i+1)){
            la_note_ph=note(i);
        }
        printf("la note la plus haute est:",la_note_ph);
    }

//la notes la plus bass:

    la_note_pb=note1;
    printf("donner la note la plus basse:%f",la_note_ph);
    for(i=1;i<=5;i++){
        if(note(i)<note(i+1)){
            la_note_pb=note(i);
        }
        printf("la note la plus basse est:%f",la_note_pb);
    }

      //l'affichage du montion:
printf("affichez la montion de l'etudient:");

  if(moyenne<20){
    printf("la montion obtenue est F");
  else if(moyenne>20 && moyenne<40);
    printf("la montion obtenue est D");
  else(moyenne>40 && moyenne<60) {
    printf("la montion obtenue est C");
    else if(moyenne>60 && moyenne<80){
        printf("la montion obtenue est B");
        else{
            printf("la montion obtenue est A");
        }
    }
 }
  }
    
// la reussies ou bien echoue:

 printf("le nombre de matier reussies et echoue");
  mr=0;
  me=0;
 if(notei>50){
     mr=0+1;
 }
   else{
    me=0+1;
 }
 
  printf("Nombre de matières réussies est:%d",mr);
  printf("Nombre de matières echoue est:%d",me);

  //message bonus
   for (i= 1 ; i<=5;i++){
     if(notei=100)
     printf("bonus");
   }
     return 0;
 }