#include<stdio.h>
#include<conio.h>

char a[9]= {'1','2','3','4','5','6','7','8','9'};
char s,p ;
int i,k,count1=0, count2=0 ;
void cheak ( char,char ) ;

void gameName()
{

    printf("\t Tic Tac Toe Game \n\n\n");

}

void show ()

{

    printf (" \t |---|---|---| \n");
    printf (" \t | %c | %c | %c | \n",a[0],a[1],a[2]);
    printf (" \t |---|---|---| \n");
    printf (" \t | %c | %c | %c | \n",a[3],a[4],a[5]);
    printf (" \t |---|---|---| \n");
    printf (" \t | %c | %c | %c | \n",a[6],a[7],a[8]);
    printf (" \t |---|---|---| \n");

}


void playerSymbol ()

{

    printf ("\n\n Player 1 Symbol : A");
    printf ("\n Player 2 Symbol : C \n");


}


void play ()

{

    printf("\n Enter Position & Symbol \n");

}

void inputp1 ()

{

    printf ("\n Player 1 ");
    printf ("\n Position :");
    scanf (" %c",&p) ;

    while ( p!='1' && p!='2' && p!='3' && p!='4' && p!='5' && p!='6' && p!='7' && p!='8' && p!='9' )

    {
        printf ("\n Invalid input..Try again ") ;
        printf ("\n Position : ") ;
        fflush ( stdin ) ;
        scanf (" %c",&p) ;
    }



    printf (" Symbol :");
    fflush ( stdin );
    scanf(" %s",&s);

    while ( s != 'A' )
    {
        printf ("\n Invalid input..Try again ") ;
        printf ("\n Symbol : ") ;
        fflush ( stdin ) ;
        scanf (" %s",&s) ;
    }


    printf ("\n\n");
    cheak (p,s) ;
    count1++ ;

}


void inputp2 ()

{

    printf ("\n Player 2 ");
    printf ("\n Position :");
    fflush ( stdin );
    scanf (" %c",&p);

    while ( p!='1' && p!='2' && p!='3' && p!='4' && p!='5' && p!='6' && p!='7' && p!='8' && p!='9' )

    {
        printf ("\n Invalid input..Try again ") ;
        printf ("\n Position : ") ;
        fflush ( stdin ) ;
        scanf (" %c",&p) ;
    }

    printf (" Symbol :");
    fflush ( stdin );
    scanf(" %s",&s);

    while ( s != 'C' )
    {
        printf ("\n Invalid input..Try again ") ;
        printf ("\n Symbol : ") ;
        fflush ( stdin ) ;
        scanf (" %s",&s) ;
    }

    printf ("\n\n");
    cheak (p,s) ;
    count2 ++ ;

}


void cheak ( char p,char s )

{

    for ( i=0 ; i<9 ; i++ )

    {

        if ( a[i]== p )
        {
            a[i]= s ;
        }
    }


}


int end ()

{

    if ( (a[0]=='A' && a[1]=='A' && a[2]=='A') ||

            ( a[0]=='A' && a[4]=='A' && a[8]=='A') ||

            ( a[1]=='A' && a[4]=='A' && a[7]=='A') ||

            ( a[2]=='A' && a[5]=='A' && a[9]=='A') ||

            ( a[2]=='A' && a[4]=='A' && a[6]=='A' ) ||

            ( a[0]=='A' && a[3]=='A' && a[6]=='A') ||

            (  a[3]=='A' && a[4]=='A' && a[5]=='A') ||

            ( a[6]=='A' && a[7]=='A' && a[8]=='A' ))

        return 100 ;

    else if ( ( a[0]=='C' && a[1]=='C' && a[2]=='C') ||

              (  a[0]=='C' && a[4]=='C' && a[8]=='C') ||

              ( a[1]=='C' && a[4]=='C' && a[7]=='C') ||

              (  a[2]=='C' && a[5]=='C' && a[8]=='C') ||

              (   a[2]=='C' && a[4]=='C' && a[6]=='C') ||

              (   a[0]=='C' && a[3]=='C' && a[6]=='C') ||

              (  a[3]=='C' && a[4]=='C' && a[5]=='C') ||

              (   a[6]=='C' && a[7]=='C' && a[8]=='C')  )

        return 200 ;

    else

        return 300 ;

}




void main ()

{
    char ch ;

lebel2 :


    gameName ();
    show();
    playerSymbol();
    play ();

lebel4 :

    inputp1 ();
    show () ;
    k=end();

    if ( count1 < 6 )
    {

        if ( k==100 )
        {
            printf ("Player 1 win ");
            count1 =0 ;
            count2 =0 ;
            goto lebel1 ;
        }

        else if ( k == 300 && ( count1 + count2 == 9 ))
        {
            printf ("\n Game over. Both are equal ") ;
            goto lebel1 ;

        }

    }


    inputp2 () ;
    show () ;
    k=end () ;


    if ( count2 < 5 )
    {

        if ( k==200 )

        {
            printf ("Player 2 win ");
            count1 =0 ;
            count2 =0 ;
            goto lebel1 ;

        }

    }


    goto lebel4 ;


lebel3 :

lebel1 :

    printf ("\n\n Do you want to play again..") ;
    printf ("\n Enter Y for Yes & N for No. \n Enter : ") ;
    fflush ( stdin ) ;
    scanf("%s",&ch) ;
    clrscr () ;
    if ( ch== 'Y' || ch== 'y' )
    {

        a[0]= '1' ;
        a[1]= '2' ;
        a[2]= '3' ;
        a[3]= '4' ;
        a[4]= '5' ;
        a[5]= '6' ;
        a[6]= '7' ;
        a[8]= '9' ;

        goto lebel2 ;

    }

    else if ( ch == 'n' || ch == 'N' )
    {
        printf ("\n Game finished.") ;

    }

    else

        printf ("\n Invalid input... Please  try again ") ;
    goto lebel3 ;


    getch ();

}