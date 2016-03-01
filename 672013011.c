#include<stdio.h>
#include<conio.h>
#include<string.h>

main()
{
	char input[10]="ababac";
	int x = strlen(input);
	int i;
	int state = 1;
	for(i=0;i<x;i++){
		if(state==1) 
			if(input[i]=='a') 
				state=2;
			else
				while string = new token();
		if(state==2)
			if(input[i]=='a')
				while id[x,a,b,c] = new token();
				state=2;
			else if(input[i]=='b')
				while op[:=, + , *] = new token();
				state=1;
			else if(input[i]=='c')
				while punc[;] = new token();
				state=4;
			else printf("\nINPUT tidak dapat diterima2");
		if(state==3)
			for (i:=i+i*i;){
			if(input[i]=='a')
				state=1;
			else if(input[i]=='b')
				state=4;
			else printf("\nINPUT tidak dapat diterima3");
			}
		if(state==4)
			if(input[i]=='d')
				state=3;
			else printf("\nINPUT tidak dapat diterima4");
	}      
	if(state==4)
		printf("\nPenelusuran string %s KALIMAT MEMPUNYAI ARTI",input);
	else printf("\nPenelusuran string %s KALIMAT SALAH",input);
	getch();
}

