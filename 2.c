#include  <stdio.h>
#include  <ctype.h>

int main(){


    char  soz[100]  =  "Bugungi Mavzuyimiz \nFayl ga Yozish va o'qish";
    FILE  *f  =  fopen ("matn.txt", "w");
    fprintf(f,  soz);
    fclose  (f);


//!===========================================================================

    char  qosh[100]  =  "\nHech kim Avvalgi  \nDasrga  tayyorlanib  kelmagan";
    FILE  *f2  =  fopen ("matn.txt", "a");
    fprintf(f,  qosh);
    fclose  (f2);



    FILE  *f3  = fopen ("matn.txt", "r");
    char  text[200];
    //! bittalab  harni  o'qib olish ko'rinishi  
    fscanf(f3, "%c",  text);
    puts(text);
    fscanf(f3, "%c",  text);
    puts(text);
    fscanf(f3, "%c",  text);
    puts(text);
    fscanf(f3, "%c",  text);
    puts(text);
    fclose(f3);



     FILE  *f3  = fopen ("matn.txt", "r");
    char  text[200];
   // ! Bitta soz  ko'rinishida  o'qish  
    fscanf(f3, "%s",  text);
    puts(text);
    fscanf(f3, "%s",  text);
    puts(text);
    fscanf(f3, "%s",  text);
    puts(text);
    fscanf(f3, "%s",  text);
    puts(text);
    fclose(f3);


 FILE  *f3  = fopen ("matn.txt", "r");
    char  text[200];
   // !  barcha  malumoni     o'qish  
    fscanf(f3, "%[^\0]s",  text);
    puts(text);
    fclose(f3);


    //  !  fayl  ichidan  whileda   belgilarni  1  talab  o'qib olish

    FILE  *oqish  = fopen ("matn.txt", "r");
    if (oqish  ==  NULL){
        printf("Fayl  Mavjud  Emas!!!");
        return 0;
    }
    char  s;
    while (!feof(oqish)){
        printf("%c", s);
        fscanf(oqish,  "%c",  &s);
    }
    fclose(oqish);



//! Fayldagi sozlarni   whiledan  foydalanib qo'ib olish  barchasini   
    FILE  *oqish1  = fopen ("matn.txt", "r");
    if (oqish1  ==  NULL){
        printf("Fayl  Mavjud  Emas!!!");
        return 0;
    }
    char  soz [100]  ="";
    while (!feof(oqish1)){
        fscanf(oqish1, "%s",  soz);
        printf("%s\n",   soz );
    }
    fclose(oqish1);



    FILE  *k  = fopen ("matn.txt", "r");
    if (k  ==  NULL){
        printf("Fayl  Mavjud  Emas!!!");
        return 0;
    }   



    char  matn [100] = "";
    //  !  bir  qatoq  malumotni  o'qish fayl  ichidan 
    // fgets(matn,  100, k);
    // printf("%s", matn);

    //! fayl  ichidan  1  qatoq malumot  qo'shish oxirgi qatorgacha  o'qish  
    while (!feof(k)){
        fgets(matn,  100,  k);
        // puts(matn);
        printf("%s", matn); 
    }
    fclose(k);

//! ================================================================


    FILE  *bittalab  = fopen ("matn.txt", "r");
    if (bittalab  ==  NULL){
        printf("Fayl  Mavjud  Emas!!!");
        return 0;
    }
    char  s;
    while (!  feof(bittalab)){
        s  =  fgetc(bittalab);
        printf("%c", s);
    }
    fclose(bittalab);


    

    FILE  *bittalab  = fopen ("matn.txt", "r");
    if (bittalab  ==  NULL){
        printf("Fayl  Mavjud  Emas!!!");
        return 0;
    }
    char  s;
    while (!  feof(bittalab)){
        s  =  fgetc(bittalab);
        if  (isdigit(s)){
            printf("%c",  s);
        }
    }
    fclose(bittalab);

    return  0;
}