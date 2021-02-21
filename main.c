#include <stdio.h>
#include <stdlib.h>

int main()
{
    int t1[30], t2[30], t3[8];
    int i,n,som, modul, moy, moy2, moy3, dessus, compt, comptinf=0, comptsup=0, tempsrap, tempslent,m,s, mn, sec, j=0, echange=0, minute, seconde, min2, sec2, val1=0,val2=0,val3=0,val4=0,val5=0,val6=0,val7=0,val8=0, valtot, valsup, p;
    printf("------------------------------------------------------------\n");
    printf("saisir le nombre de coureurs (entre 1 et 30) : ");
    scanf("%d", &n);
    printf("------------------------------------------------------------\n");

    for (i=0; i<n; i++)

    {
        printf("Saisir le temps du coureur %02d : ", i+1);
        scanf("%d",&t1[i]);
        t2[i] = i+1;

    }
    printf("------------------------------------------------------------\n");
    for (i=0; i<n ; i++)
    {
        som=t1[i]/60;
        modul=t1[i]%60;

        printf("coureur %02d : %d mn %d s\n",i+1, som, modul );

    }
    printf("-------------------------------------------------------------\n");

    for (i=0 ; i<n; i++)
    {
        som=som+t1[i];
    }

    moy=som/i;
    moy2=moy/60;
    moy3=moy%60;


    printf("La moyenne du parcours est de : %d mn %d s\n", moy2, moy3);
    printf("-------------------------------------------------------------\n");

    for (compt=0 ; compt<n; compt++)
    {
        if (t1[compt]<moy)
        {
            comptinf=comptinf+1;
        }

        if (t1[compt]>moy)
        {
            comptsup=comptsup+1;
        }

    }


    printf("Nombre de coureurs au dessus de la moyenne : %d\n", comptinf);
    printf("-------------------------------------------------------------\n");
    printf("Nombre de coureurs au dessous de la moyenne : %d\n", comptsup);
    printf("-------------------------------------------------------------\n");


    tempsrap=t1[0];
    tempslent=t1[0];

    for (i = 0; i<n; i++)
    {
        if(t1[i]<tempsrap)
        {
            tempsrap=t1[i];
        }
    }

    m = tempsrap/60;
    s = tempsrap%60;


    printf("temps le plus rapide : %d m %d s\n", m,s);
    printf("-------------------------------------------------------------\n");


    tempsrap=t1[0];
    tempslent=t1[0];

    for (i = 0; i<n; i++)
    {
        if(t1[i]>tempslent)
        {
            tempslent=t1[i];
        }
    }

    mn = tempslent/60;
    sec = tempslent%60;


    printf("temps le moins rapide : %d m %d s \n", mn, sec);
    printf("-------------------------------------------------------------\n");
    printf("les temps du plus petit au plus grand\n");


    for (i=0; i<n ; i++)
    {
        for (j = 1; j <n ; j++)
        {
            if(t1[j-1] > t1[j])
            {
                echange = t1[j-1];
                t1[j-1] = t1[j];
                t1[j] = echange;

            }
        }
    }

    for (i=0; i<n ; i++)
    {


        minute=t1[i]/60;
        seconde=t1[i]%60;
        printf("temps %d : %d mn %d s\n", i+1, minute, seconde);
    }
    printf("----------------------------------------------------------------\n");
    printf("Classement des coureurs\n");



    for(i= 0 ; i<n ; i++)
    {
        min2=t1[i]/60;
        sec2=t1[i]%60;
        printf("Coureurs %02d : %d mn %d s\n", t2[i], min2, sec2);
    }



    printf("-----------------------------------------------------------------\n");

    printf("100;125]");

    for (i=0; i<n; i++)
    {
        if (t1[i]>99 && t1[i]<=125)
        {
            printf("+ ");
        }
    }


    printf("\n125;150]");

    for (i=0; i<n; i++)
    {
        if (t1[i]>125 && t1[i]<=150)
        {
            printf("+ ");
        }
    }


    printf("\n150;175]");
    for (i=0; i<n; i++)
    {
        if (t1[i]>150 && t1[i]<=175)
        {
            printf("+ ");
        }
    }

    printf("\n175;200]");

    for (i=0; i<n; i++)
    {
        if (t1[i]>175 && t1[i]<=200)
        {
            printf("+ ");
        }
    }

    printf("\n200;225]");

    for (i=0; i<n; i++)
    {
        if (t1[i]>200 && t1[i]<=225)
        {
            printf("+ ");
        }
    }

    printf("\n225;250]");

    for (i=0; i<n; i++)
    {
        if (t1[i]>225 && t1[i]<=250)
        {
            printf("+ ");
        }
    }

    printf("\n250;275]");

    for (i=0; i<n; i++)
    {
        if (t1[i]>250 && t1[i]<=275)
        {
            printf("+ ");
        }
    }

    printf("\n275;300]");

    for (i=0; i<n; i++)
    {
        if (t1[i]>275 && t1[i]<=300)
        {
            printf("+");
        }
    }

    printf("\n-------------------------------------------------------------\n");
    for(i=0; i<n; i++)

    {
        if (t1[i]>99 && t1[i]<=125)
        {
            val1=val1+1;
        }

        else if(t1[i]>125 && t1[i]<=150)
        {
            val2=val2+1;
        }

        else if(t1[i]>150 && t1[i]<=175)
        {
            val3=val3+1;
        }

        else if(t1[i]>175 && t1[i]<=200)
        {
            val4=val4+1;
        }

        else if(t1[i]>200 && t1[i]<=225)
        {
            val5=val5+1;
        }

        else if(t1[i]>225 && t1[i]<=250)
        {
            val6=val6+1;
        }

        else if(t1[i]>250 && t1[i]<=275)
        {
            val7=val7+1;
        }

        else if(t1[i]>275 && t1[i]<=300)
        {
            val8=val8+1;
        }
    }



//classement des temps;



    if (val1>=val2 && val1>=val3 && val1>=val4 && val1>=val5 && val1>=val6 && val1>=val7 && val1>=val8)
    {
        valsup=val1;
    }
    else if (val2>=val1 && val2>=val3 && val2>=val4 && val2>=val5 && val2>=val6 && val2>=val7 && val2>=val8)
    {
        valsup=val2;
    }
    else if (val3>=val1 && val3>=val2 && val3>=val4 && val3>=val5 && val3>=val6 && val3>=val7 && val3>=val8)
    {
        valsup=val3;
    }
    else if (val4>=val1 && val4>=val2 && val4>=val3 && val4>=val5 && val4>=val6 && val4>=val7 && val4>=val8)
    {
        valsup=val4;
    }
    else if (val5>=val1 && val5>=val3 && val5>=val4 && val5>=val2 && val5>=val6 && val5>=val7 && val5>=val8)
    {
        valsup=val5;
    }
    else if (val6>=val1 && val6>=val3 && val6>=val4 && val6>=val5 && val6>=val2 && val6>=val7 && val6>=val8)
    {
        valsup=val6;
    }
    else if (val7>=val1 && val7>=val3 && val7>=val4 && val7>=val5 && val7>=val6 && val7>=val2 && val7>=val8)
    {
        valsup=val7;
    }
    else if (val8>=val1 && val8>=val3 && val8>=val4 && val8>=val5 && val8>=val6 && val8>=val7 && val8>=val2)
    {
        valsup=val8;
    }

    valtot=val1+val2+val3+val4+val5+val6+val7+val8;



    p=valsup;

    for(i=0; i<p; i++)
    {
        if(val1<valsup)
        {
            printf("         ");
        }
        else if(val1>=valsup)
        {
            printf("    +    ");
            val1=val1-1;
        }



        if(val2<valsup)
        {
            printf("        ");
        }
        else if(val2>=valsup)
        {
            printf("   +    ");
            val2=val2-1;
        }



        if(val3<valsup)
        {
            printf("        ");
        }
        else if(val3>=valsup)
        {
            printf("   +    ");
            val3=val3-1;
        }



        if(val4<valsup)
        {
            printf("        ");
        }
        else if(val4>=valsup)
        {
            printf("   +    ");
            val4=val4-1;
        }




        if(val5<valsup)
        {
            printf("        ");
        }
        else if(val5>=valsup)
        {
            printf("   +    ");
            val5=val5-1;
        }



        if(val6<valsup)
        {
            printf("       ");
        }
        else if(val6>=valsup)
        {
            printf("   +   ");
            val6=val6-1;
        }



        if(val7<valsup)
        {
            printf("        ");
        }
        else if(val7>=valsup)
        {
            printf("   +    ");
            val7=val7-1;
        }



        if(val8<valsup)
        {
            printf("        \n");
        }
        else if(val8>=valsup)
        {
            printf("   +   \n");
            val8=val8-1;
        }
        valsup=valsup-1;

    }



    printf("[100;125]125;150]150;175]175;200]200;225]225;250]250;275]275;300]");






    return 0;
}
