#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void main(){
    printf("Enter 1 to call for Odd and 0 to call for Even\n");
    int call;
    scanf("%d",&call);//input 0 for even and 1 for odd
    srand(time(0));
    int compcall;
    compcall=rand()%6+1;
    printf("Enter the Number for toss\n");
    int toss;
    scanf("%d",&toss);   
    printf("You have entered %d and Computer has entered %d\n",toss,compcall);
    int d=(toss+compcall)%2;
    if(d==call){
        printf("You have Won the Toss, what have you decided?(Enter 1 for Batting and 0 for Bowling)\n");
        int decision; //input 0 for bowling, 1 for batting
        scanf("%d",&decision);
        if(decision==0){
            printf("The Player has won the toss and has decided to Bowl first!\n");
            int i=6,compruns=0,runs=0,cbat;
            while(i!=0){
                 cbat=rand()%6+1;
                int bowl;
                scanf("%d",&bowl);
                printf("You entered %d and computer entered %d\n",bowl,cbat);
                if(cbat!=bowl){
                    compruns+=cbat;
                }else{
                    break;
                }
                i--;
            }printf("The Computer has Scored %d runs and you have to chase a target of %d runs\n",compruns,compruns+1);
            int j=6;
            while(j!=0){
                int cbowl=rand()%6+1;
                int bat;
                scanf("%d",&bat);
                printf("You entered %d and computer entered %d\n",bat,cbowl);
                if(bat!=cbowl){
                    runs+=bat;
                }else if(runs>compruns){
                    break;
                }
                else{
                    break;
                }
            j--;}
            printf("You have scored %d runs\n",runs);
            if(runs>compruns){
                printf("Congratulations! You have won the game!\n");
            }else if(compruns>runs){
                printf("Oops! Better Luck Next Time :C\n");
            }else if(compruns==runs){
                printf("The game has ended in a draw!\n");
            }
        }else{
            printf("The Player has won the toss and has decided to Bat first!\n");
            int i=6,compruns=0,runs=0;
            while(i!=0){
                int cbowl=rand()%6+1;
                int bat;
                scanf("%d",&bat);
                printf("You entered %d and computer entered %d\n",bat,cbowl);
                if(cbowl!=bat){
                    runs+=bat;
                }else{
                    break;
                }
                i--;
            }printf("You have scored %d runs and computer has to chase a target of %d runs\n",runs,runs+1);
            int j=6;
            while(j!=0){
                int cbat=rand()%6+1;
                int bowl;scanf("%d",&bowl);
                printf("You entered %d and computer entered %d\n",bowl,cbat);
                if(cbat!=bowl){
                    compruns+=cbat;
                }else if(compruns>runs){
                    break;
                }
                else{
                    break;
                }
                j--;
            }printf("The computer has scored %d runs\n",compruns);
            if(runs>compruns){
                printf("Congratulations! You have won the game!\n");
            }else if(compruns>runs){
                printf("Oops! Better Luck Next Time :C\n");
            }else if(compruns==runs){
                printf("The game has ended in a draw!\n");
            }
        }
    }else{
        srand(time(0));
        int cdecision=rand()%1+0;
        if(cdecision==0){
            printf("The Computer has won the toss and has decided to Bowl first!\n");
            int i=6,compruns=0,runs=0;
            while(i!=0){
                int cbowl=rand()%6+1;
                int bat;
                scanf("%d",&bat);
                printf("You entered %d and computer entered %d\n",bat,cbowl);
                if(cbowl!=bat){
                    runs+=bat;
                }
                else{
                    break;
                }
                i--;
            }printf("You have scored %d runs and computer has to chase a target of %d runs\n",runs,runs+1);
            int j=6;
            while(j!=0){
                int cbat=rand()%6+1;
                int bowl;scanf("%d",&bowl);
                printf("You entered %d and computer entered %d\n",bowl,cbat);
                if(cbat!=bowl){
                    compruns+=cbat;
                }else if(compruns>runs){
                    break;
                }
                else{
                    break;
                }
                j--;
            }printf("The computer has scored %d runs\n",compruns);
            if(runs>compruns){
                printf("Congratulations! You have won the game!\n");
            }else if(compruns>runs){
                printf("Oops! Better Luck Next Time :C\n");
            }else if(compruns==runs){
                printf("The game has ended in a draw!\n");
            }
        }else{
            printf("The Computer has won the toss and has decided to Bat first!\n");
            int i=6,compruns=0,runs=0;
            while(i!=0){
                int cbat=rand()%6+1;
                int bowl;
                scanf("%d",&bowl);
                printf("You entered %d and computer entered %d\n",bowl,cbat);
                if(cbat!=bowl){
                    compruns+=cbat;
                }else{
                    break;
                }
                i--;
            }printf("The Computer has Scored %d runs and you have to chase a target of %d runs\n",compruns,compruns+1);
            int j=6;
            while(j!=0){
                int cbowl=rand()%6+1;
                int bat;
                scanf("%d",&bat);
                printf("You entered %d and computer entered %d\n",bat,cbowl);
                if(bat!=cbowl){
                    runs+=bat;
                }else if(runs>compruns){
                    break;
                }
                else{
                    break;
                }
            j--;}
            printf("You have scored %d runs\n",runs);
            if(runs>compruns){
                printf("Congratulations! You have won the game!\n");
            }else if(compruns>runs){
                printf("Oops! Better Luck Next Time  :C\n");
            }else if(compruns==runs){
                printf("The game has ended in a draw !\n");
            }
        }
    }
}
