#INCLUDE <STDIO.H>
#INCLUDE <STDLIB.H>

INT MAIN(INT ARGC,CHAR * ARGV[])  {
   FILE * FP = NULL;
   CHAR CH = '\0';
   INT WRD=1,CHARCTR=1;

   IF (ARGC == 1)
     FP = STDIN;
   ELSE IF (ARGC == 2)   {
      IF ((FP = FOPEN(ARGV[1], "R")) == NULL) {
         FPRINTF(STDERR, "CAN'T OPEN %S\N", ARGV[1]);
         EXIT(EXIT_FAILURE);
      }
   }
   ELSE  {
      FPRINTF(STDERR, "USAGE: %S [FILENAME]\N", ARGV[0]);
      EXIT(EXIT_FAILURE);
   }

   CH=GETC(FP);

   WHILE(CH!=EOF)    {
     IF(CH==' '||CH=='\N') {
        WRD++;
     }
     ELSE {
       CHARCTR++;
     }

     CH=GETC(FP);
   }

   PRINTF("\N THE NUMBER OF WORDS IN THE FILE ARE : %D\N",WRD);
   PRINTF(" THE NUMBER OF CHARACTERS IN THE FILE IS : %D\N\N",CHARCTR);

   FCLOSE(FP);

   RETURN 0;
}

