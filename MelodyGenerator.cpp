// g++ -o MelodyGenerator MelodyGenerator.cpp && ./MelodyGenerator


#include <iostream>
#include <string>
#include <stdlib.h>
#include <cstdio>
using namespace std;

#define NEWLINE '\n'
#define LINE "___________________________________"
#define TITLE "  Melody Generator"
#define AUTHOR "  by Kamilah Mitchell"
#define SIZE 12


FILE *Point; 
char csdFile[256] = "Playback.csd";
int system();

void heading();
int rep();
int osc();

int main()
{
	heading();
    osc();
    rep();
	return 0;
}

void heading()
{
    system("clear");
    cout << "\n \t \t \t " << LINE << " \n";
    cout << "\n \t \t \t \t " << TITLE << " \n";
    cout << "\n \t \t \t \t " << AUTHOR << "\n";
    cout << "\t \t \t " << LINE << "\n";
    cout << "\n \t \t \t " << LINE << " \n";
    cout << NEWLINE;
}

int osc()
{
    //user input
    
    char melody[SIZE];  
    float k[SIZE];
    float dur[SIZE];
    int x;
    int *number;

    number = &x;


    dur[0] = 1;
    dur[1] = 0.5;
    dur[2] = 0.3;
    dur[3] = 0.3;
    dur[4] = 1;
    dur[5] = 0.3;
    dur[6] = 0.3;
    dur[7] = 0.5;
    dur[8] = 0.5;
    dur[9] = 1;
    dur[10] = 0.3;
    dur[11] = 1;

    
    cout << "\nPlease enter 12 notes.\n";
    
    for(x=0; x < SIZE; x++)
    {
    	//printf("\n%d. ", x+1);
        cout << x+1;
        //scanf("\n%c", &melody[x]);
        cin >> melody[x];

        switch(melody[x])
        {
            case 'A':
            k[x]=440;
            break;
            
            case 'a':
            k[x]=440;
            break;
            
            case 'B':
            k[x]=493.88;
            break;
            
            case 'b':
            k[x]=493.88;
            break;
                
            case 'C':
            k[x]=523.25;
            break;
            
            case 'c':
            k[x]=523.25;
            break;
                
            case 'D':
            k[x]=587.33;
            break;
                
            case 'd':
            k[x]=587.33;
            break;
                
            case 'E':
            k[x]=659.25;
            break;
            
            case 'e':
            k[x]=659.25;
            break;
                
            case 'F':
            k[x]=698.46;
            break;
            
            case 'f':
            k[x]=698.46;
            break;
                
            case 'G':
            k[x]=783.99;
            break;
            
            case 'g':
            k[x]=783.99;
            break;
                
            default:
                cout << "That was not a note name.";
                
        }

    }  
    

    Point = fopen(csdFile, "w");
    if(Point != NULL)
        
    {   
           
        fprintf(Point,"<CsoundSynthesizer>\n");
        fprintf(Point,"<CsInstruments>\n");
        fprintf(Point,"instr testing\n");
        fprintf(Point," a1 oscili 10000, p5, 1\n");
        fprintf(Point," k1 linen 1, .2, p3, .3\n");
        fprintf(Point," out a1 * k1\n");
        fprintf(Point,"endin\n");
        fprintf(Point,"</CsInstruments>\n");
        fprintf(Point,"<CsScore>\n");
        fprintf(Point,"f 1  0 8192 10   1 ; GEN10 to compute a sine wave\n");

        
        for(x=0; x < SIZE; x++)
        {
            fprintf(Point,"i \"testing\" %d %f 0 %f\n", *number, dur[x], k[x]);
        
        }
        
        fprintf(Point,"e 0.1\n");
        fprintf(Point,"</CsScore>\n");
        fprintf(Point,"</CsoundSynthesizer>\n");
    }
    
    fclose(Point);
    
    char commandline [1000] = "csound -odac -d -O null ";
    strcat(commandline, csdFile);
    system (commandline);
    
    return 0;
}



int rep()
	{
		char replay;
        
        system("clear");
		cout << NEWLINE;
        cout << "\n \t " << LINE << NEWLINE;
		cout << "\tWould you like to generate another melody?\n";
		cout << "\tY or N\n";

		//scanf("%s", &replay);
        cin >> replay;
        
        switch(replay)
        {
            case 'Y':
                main();
                break;
        
            case 'y':
                main();
                break;
        
            default:
                system("clear");
                cout << NEWLINE;
                cout << "\tGoodbye!" << NEWLINE;
                cout << "\t "<< LINE << NEWLINE;
        }
		return 0;
	}
