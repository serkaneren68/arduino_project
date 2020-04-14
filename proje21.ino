#include <Keypad.h>
int j = 0 ;
String hexstart;
String hexend ;
int switchh = 1;
const byte numRows= 4; 
const byte numCols= 4; 
char  password[11] ;

char keymap[numRows][numCols]= 
{
{'1', '2', '3', 'A'}, 
{'4', '5', '6', 'B'}, 
{'7', '8', '9', 'C'},
{'*', '0', '#', 'D'}
};


byte rowPins[numRows] = {12,11,10,9}; 
byte colPins[numCols]= {8,7,6,5}; 


Keypad myKeypad= Keypad(makeKeymap(keymap), rowPins, colPins, numRows, numCols);


int a=2;
int b=3;
int c=4;
int d=A5;
int e=A4;
int f=A3;
int g=A2;
int nokta=9;
void setup(){
Serial.begin(9600);
	
  pinMode(A0, OUTPUT);
  pinMode(A1, OUTPUT);
  pinMode(a, OUTPUT);
  pinMode(b, OUTPUT);
  pinMode(c, OUTPUT);
  pinMode(d, OUTPUT);
  pinMode(e, OUTPUT);
  pinMode(f, OUTPUT);
  pinMode(g, OUTPUT);
  pinMode(nokta, OUTPUT);
  digitalWrite(A0,1);
  
}

void loop(){
  

if(switchh == 1){  
  
  char keypressed = myKeypad.getKey();
  if (keypressed)
	password[j++] = keypressed;
  if(keypressed == '*')
   	j=0;

	
  if(j==10){
    String pass = password ;
    String starting = pass.substring(0,2);
    String ending = pass.substring(8,10);
    int startnum = starting.toInt();
    int endnum = ending.toInt();
    hexstart = String(startnum,HEX);
    hexend = String(endnum,HEX);
    j=0 ;
    switchh= 0;
}	
  
}
else{  
  
  int i ;
  for(i=0;i<150;i++){
    digitalWrite(A0,1);
    
    
   if(hexstart[0]=='0')
      sifir();
    else if(hexstart[0]=='1')
    	bir();
     else if(hexstart[0]=='2')
    	iki();
      else if(hexstart[0]=='3')
    	uc();
      else if(hexstart[0]=='4')
    	dort();
     else if(hexstart[0]=='5')
    	bes();
      else if(hexstart[0]=='6')
    	alti();
      else if(hexstart[0]=='7')
    	yedi();
      else if(hexstart[0]=='8')
    	sekiz();
      else if(hexstart[0]=='9')
    	dokuz();
      else if(hexstart[0]=='a')
    	aharfi();
      else if(hexstart[0]=='b')
    	bharfi();
      else if(hexstart[0]=='c')
    	charfi();
      else if(hexstart[0]=='d')
    	dharfi();
      else if(hexstart[0]=='e')
    	eharfi();
      else if(hexstart[0]=='f')
    	fharfi();
     else
		sifir();
    	
    
    
    delay(10);
    digitalWrite(A0,0);
    digitalWrite(A1,1);
    
   if(hexstart[0]=='0')
      sifir();
    else if(hexstart[1]=='1')
    	bir();
     else if(hexstart[1]=='2')
    	iki();
      else if(hexstart[1]=='3')
    	uc();
      else if(hexstart[1]=='4')
    	dort();
     else if(hexstart[1]=='5')
    	bes();
      else if(hexstart[1]=='6')
    	alti();
      else if(hexstart[1]=='7')
    	yedi();
      else if(hexstart[1]=='8')
    	sekiz();
      else if(hexstart[1]=='9')
    	dokuz();
      else if(hexstart[1]=='a')
    	aharfi();
      else if(hexstart[1]=='b')
    	bharfi();
      else if(hexstart[1]=='c')
    	charfi();
      else if(hexstart[1]=='d')
    	dharfi();
      else if(hexstart[1]=='e')
    	eharfi();
      else if(hexstart[1]=='f')
    	fharfi();
     else
		sifir();
      
    delay(10);
    digitalWrite(A1,0);
  }
  i = 0 ;
  for(i=0;i<150;i++){   
    
    digitalWrite(A0,1);
 if(hexend[0]=='0')
      sifir();
    else if(hexend[0]=='1')
    	bir();
     else if(hexend[0]=='2')
    	iki();
      else if(hexend[0]=='3')
    	uc();
      else if(hexend[0]=='4')
    	dort();
     else if(hexend[0]=='5')
    	bes();
      else if(hexend[0]=='6')
    	alti();
      else if(hexend[0]=='7')
    	yedi();
      else if(hexend[0]=='8')
    	sekiz();
      else if(hexend[0]=='9')
    	dokuz();
      else if(hexend[0]=='a')
    	aharfi();
      else if(hexend[0]=='b')
    	bharfi();
      else if(hexend[0]=='c')
    	charfi();
      else if(hexend[0]=='d')
    	dharfi();
      else if(hexend[0]=='e')
    	eharfi();
      else if(hexend[0]=='f')
    	fharfi();
     else
		bos();
    delay(10);
    digitalWrite(A0,0);
    digitalWrite(A1,1);
    if(hexend[0]=='0')
      sifir();
    else if(hexend[1]=='1')
    	bir();
     else if(hexend[1]=='2')
    	iki();
      else if(hexend[1]=='3')
    	uc();
      else if(hexend[1]=='4')
    	dort();
     else if(hexend[1]=='5')
    	bes();
      else if(hexend[1]=='6')
    	alti();
      else if(hexend[1]=='7')
    	yedi();
      else if(hexend[1]=='8')
    	sekiz();
      else if(hexend[1]=='9')
    	dokuz();
      else if(hexend[1]=='a')
    	aharfi();
      else if(hexend[1]=='b')
    	bharfi();
      else if(hexend[1]=='c')
    	charfi();
      else if(hexend[1]=='d')
    	dharfi();
      else if(hexend[1]=='e')
    	eharfi();
      else if(hexend[1]=='f')
    	fharfi();
     else
		bos();
    delay(10);
    digitalWrite(A1,0);
  }
	

}


}



void iki(){
digitalWrite(a, 0);
digitalWrite(b, 0);
digitalWrite(c, 1);
digitalWrite(d, 0);
digitalWrite(e, 0);
digitalWrite(f, 1);
digitalWrite(g, 0);
digitalWrite(nokta, 1);
}
void bir(){
digitalWrite(a, 1);
digitalWrite(b, 0);
digitalWrite(c, 0);
digitalWrite(d, 1);
digitalWrite(e, 1);
digitalWrite(f, 1);
digitalWrite(g, 1);
digitalWrite(nokta, 1);
}
 
void sifir(){
digitalWrite(a, 0);
digitalWrite(b, 0);
digitalWrite(c, 0);
digitalWrite(d, 0);
digitalWrite(e, 0);
digitalWrite(f, 0);
digitalWrite(g, 1);
digitalWrite(nokta, 1);
}
void uc(){
digitalWrite(a, 0);
digitalWrite(b, 0);
digitalWrite(c, 0);
digitalWrite(d, 0);
digitalWrite(e, 1);
digitalWrite(f, 1);
digitalWrite(g, 0);
digitalWrite(nokta, 1);
}   
void dort(){
digitalWrite(a, 1);
digitalWrite(b, 0);
digitalWrite(c, 0);
digitalWrite(d, 1);
digitalWrite(e, 1);
digitalWrite(f, 0);
digitalWrite(g, 0);
digitalWrite(nokta, 1);
}   
void bes(){
digitalWrite(a, 0);
digitalWrite(b, 1);
digitalWrite(c, 0);
digitalWrite(d, 0);
digitalWrite(e, 1);
digitalWrite(f, 0);
digitalWrite(g, 0);
digitalWrite(nokta, 1);
}   
void alti(){
digitalWrite(a, 0);
digitalWrite(b, 1);
digitalWrite(c, 0);
digitalWrite(d, 0);
digitalWrite(e, 0);
digitalWrite(f, 0);
digitalWrite(g, 0);
digitalWrite(nokta, 1);
}   
void yedi(){
digitalWrite(a, 0);
digitalWrite(b, 0);
digitalWrite(c, 0);
digitalWrite(d, 1);
digitalWrite(e, 1);
digitalWrite(f, 1);
digitalWrite(g, 1);
digitalWrite(nokta, 1);
}   
void sekiz(){
digitalWrite(a, 0);
digitalWrite(b, 0);
digitalWrite(c, 0);
digitalWrite(d, 0);
digitalWrite(e, 0);
digitalWrite(f, 0);
digitalWrite(g, 0);
digitalWrite(nokta, 1);
}   
void dokuz(){
digitalWrite(a, 0);
digitalWrite(b, 0);
digitalWrite(c, 0);
digitalWrite(d, 0);
digitalWrite(e, 1);
digitalWrite(f, 0);
digitalWrite(g, 0);
digitalWrite(nokta, 1);
}  
void aharfi(){
digitalWrite(a, 0);
digitalWrite(b, 0);
digitalWrite(c, 0);
digitalWrite(d, 1);
digitalWrite(e, 0);
digitalWrite(f, 0);
digitalWrite(g, 0);
digitalWrite(nokta, 1);
} 
void bharfi(){
digitalWrite(a, 0);
digitalWrite(b, 0);
digitalWrite(c, 0);
digitalWrite(d, 0);
digitalWrite(e, 0);
digitalWrite(f, 0);
digitalWrite(g, 0);
digitalWrite(nokta, 1);
} 
void charfi(){
digitalWrite(a, 0);
digitalWrite(b, 1);
digitalWrite(c, 1);
digitalWrite(d, 0);
digitalWrite(e, 0);
digitalWrite(f, 0);
digitalWrite(g, 1);
digitalWrite(nokta, 1);
} 
void dharfi(){
digitalWrite(a, 1);
digitalWrite(b, 0);
digitalWrite(c, 0);
digitalWrite(d, 0);
digitalWrite(e, 0);
digitalWrite(f, 1);
digitalWrite(g, 0);
digitalWrite(nokta, 1);
} 
  
void eharfi(){
digitalWrite(a, 0);
digitalWrite(b, 1);
digitalWrite(c, 1);
digitalWrite(d, 0);
digitalWrite(e, 0);
digitalWrite(f, 0);
digitalWrite(g, 0);
digitalWrite(nokta, 1);
} 
void fharfi(){
digitalWrite(a, 0);
digitalWrite(b, 1);
digitalWrite(c, 1);
digitalWrite(d, 1);
digitalWrite(e, 0);
digitalWrite(f, 0);
digitalWrite(g, 0);
digitalWrite(nokta, 1);
} 
 
void bos(){
digitalWrite(a, 1);
digitalWrite(b, 1);
digitalWrite(c, 1);
digitalWrite(d, 1);
digitalWrite(e, 1);
digitalWrite(f, 1);
digitalWrite(g, 1);
digitalWrite(nokta, 1);
} 
  
 