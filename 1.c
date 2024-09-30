#include  <stdio.h>

int main(){


    //!  fayl  ochish va  faylga  malumot  yozish 

    // FILE *file_ptr ;
    // file_ptr =  fopen("xn2.txt", "w");
    // fprintf(file_ptr,  "Salom  Foundation  XN2");
    // fclose(file_ptr);


    //!  2  - ko'rinishi  
    // char soz[100] =  "Bugun  havo harorati  yaxshi ekan.";
    // FILE *file_ptr ;
    // file_ptr =  fopen("xn2.txt", "w");
    // fprintf(file_ptr,  soz);
    // fclose(file_ptr);




    // !  Yaratilgan  Faylga  oxiridan  malumot  qo'shish  


    // FILE  *qosh =  fopen("xn2.txt", "a");
    // fprintf(qosh,  "\nBugun  hech  \nkim  darsga  \ntayyor  emas");
    // fclose(qosh)  ;   





    // FILE  *f  =  fopen("turli.txt", "w");
    // int  son  = 134;
    // float  fson= 1345.2345;
    // double  dson  = 23456765.2345;
    // char belgi  = 'D';
    // char  serya [30]  = "salom  hammaga";
    // int  sonlar[3]  =  {1,2,3};
    // fprintf(f,  "Int son  ==>  %d\nFloat son  ==>  %.2f\nDounble  son  ==>  %lf\n",  son,  fson,  dson);
    // fprintf(f, "Char  Belgi ==>  %c\nChar  serya  ==>  %s\nInt  Serya ==>  %d\n",  belgi, serya, sonlar[2]);
    // fclose(f);


    int n ,  son; printf("N:  ");
    scanf("%d", &n);
    FILE  *f_raqam  =  fopen("raqam.txt",  "w");
    for  (int i = 0;  i  < n;  i  ++){
        printf("%d  -   Qiymatni  Kiriting:  " , i  + 1);
        scanf("%d", &son);
        if  (son  %  2  == 0){
            fprintf(f_raqam,  "%d  ",  son);
        }
    }
    fclose(f_raqam);



  


















    return  0;
}