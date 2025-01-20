#include <stdio.h>
#ifdef _WIN32
#include <conio.h>
#include <windows.h>
#else
#include <unistd.h>
#endif
#include <math.h>

void screen1(); // menu
void currency(); // currency function
void unit(); // unit function
void u_length(); // length function
void u_time(); // time function
void u_data(); // data function
void calculator(); //calculator function

void colour(){
	printf("\033[0;33m");  //YELLOW COLOUR
}

void colour1(){
	printf("\033[0;36m");  //CYAN COLOUR
}

void colour2(){
	printf("\033[0;31m");  //RED COLOUR
}

void colour3(){
	printf("\033[0;37m");  //WHITE COLOUR
}

void colour4(){
	printf("\033[0;32m");  //GREEN COLOUR
}

void colour5(){
	printf("\033[0;35m");  //PURPLE COLOUR
}

int main() // main function
{
	int n, i, h; // i use in for loop, n use in choice (switch),h use in if condition
	top: //goback to main menu(goto: top)
	screen1();

	colour2();
	printf("loading");
	if (1)
	{
		for(i = 0; i < 10; i++)
		{
			usleep(150000); // usleep takes microseconds
			printf(".");
		}
#ifdef _WIN32
		system("cls");
#else
		system("clear");
#endif
	}

	screen1(); //show menu

	printf("\nChoose your operation\n");
	printf("1:- CURRENCY========> 1\n");
	printf("2:- UNIT============> 2\n");
	printf("3:- CALCULATOR======> 3\n");
	printf("ENTER YOUR CHOICE=");
	scanf("%d", &n);
	switch (n)
	{
	case 1:
		op://goback to main menu(goto: op)
		currency(); //go to currency function
		printf("\n\n                                  USE CURRENCY CONVERTER AGAIN========> 1\n");
		printf("                                  GO TO THE MAIN MENU=================> 2\n");
		printf("                                  FOR EXIT============================> 3\n\n");
		printf("                                  ENTER YOUR CHOICE=");
		scanf("%d", &h);
		if(h == 1)
			goto op;
		else if(h == 2)
			goto top;
		else
			printf("THANK YOU");
		break;
	case 2:
		pp://goback to main menu(goto: pp)
		printf("===========================================WELCOME TO UNIT CONVERTER===================================\n");
		unit(); //go to unit function
		printf("\n\n                                  USE UNIT CONVERTER AGAIN========> 1\n");
		printf("                                  GO TO THE MAIN MENU=================> 2\n");
		printf("                                  FOR EXIT============================> 3\n\n");
		printf("                                  ENTER YOUR CHOICE=");
		scanf("%d", &h);
		if(h == 1)
			goto pp;
		else if(h == 2)
			goto top;
		else
			printf("THANK YOU");
		break;
	case 3:
		up://goback to main menu(goto: up)
		calculator(); // go to calculator function
		printf("\n\n                                  USE CALCULATOR AGAIN================>  1\n");
		printf("                                  GO TO THE MAIN MENU=================>  2\n");
		printf("                                  FOR EXIT============================>  3\n\n");
		printf("                                  ENTER YOUR CHOICE=");
		scanf("%d", &h);
		if(h == 1)
			goto up;
		else if(h == 2)
			goto top;
		else
			printf("THANK YOU");
		break;
	default:
		printf("                                    INVALID CHOICE");
		break;
	}
}

void screen1() // main menu
{
	colour(); // for colouring the font
	printf("                            *********************************************************************\n");
	printf("                            ------------------------WELCOME TO C PROJECT-------------------------\n");
	printf("                            *********************************************************************\n");
	printf("\n\n");
	printf("                            ----------------------------------------------------------------------\n");
	printf("                                                AVAILABLE CONVERTERS ARE\n");
	printf("                            ----------------------------------------------------------------------\n");
	printf("\n");
	colour1();
	{
		printf("                                                --------------------------\n");
		printf("                                                |   CURRENCY CONVERTER   |\n");
	}
	colour2();
	{
		printf("                                                |    UNIT CONVERTER      |\n");
	}
	colour5();
	{
		printf("                                                |      CALCULATOR        |\n");
		printf("                                                --------------------------\n");
	}
}

void currency() // currency function
{
	colour1(); // for colouring the font
#ifdef _WIN32
	system("cls"); //clear previous screen
#else
	system("clear");
#endif
	long int ch1, ch2;
	float curr, inr1, usd2, euro1, pou1, rub1, yua1, din1, yen1, iran1, taka1;
	printf("\n=================================== WELCOME TO CURRENCY CONVERTER====================================\n");
	printf("\n\nAVAILABLE CURRENCIES ARE :- \n");
	printf("_____________________________\n");
	printf("\n\n 1. INR \n 2. USD \n 3. Euro\n 4. POUND\n 5. RUBEL\n 6. YUAN\n 7. KUWAITI_DINAR\n 8. YEN\n 9. IRAN_REAL\n 10.BANGLADESHI_TAKA\n");
	printf("\n");
	printf("\nCHOOSE YOUR CURRENCY:");
	scanf("%ld", &ch1);
	printf("\n\n 1. INR \n 2. USD \n 3. Euro\n 4. POUND\n 5. RUBEL\n 6. YUAN\n 7. KUWAITI_DINAR\n 8. YEN\n 9. IRAN_REAL\n 10.BANGLADESHI_TAKA\n");
	printf("\n");
	printf("\nCHOOSE YOUR CONVERTED CURRENCY:");
	scanf("%ld", &ch2);
	printf("\n\nENTER VALUE OF YOUR CURRENCY: ");
	scanf("%f", &curr);
	//convert all currency into US DOLLAR
	switch(ch1){
		case 1 :
			curr = curr * 0.0126662;
			break;
		case 2:
			curr = curr * 1; 
			break;
		case 3:
			curr = curr * 1.041667;
			break;
		case 4:
			curr = curr * 1.20482;
			break;
		case 5:
			curr = curr * 0.01754;
			break;
		case 6:
			curr = curr * 0.14925;
			break;
		case 7:
			curr = curr * 3.22581;
			break;
		case 8:
			curr = curr * 0.00740;
			break;
		case 9:
			curr = curr * 0.000024;
			break;
		case 10:
			curr = curr * 0.01070;
			break;
		default:
			printf("                       Wrong Choice");
			break;
	}
	//then calculate the value of currency in usd 
	switch(ch2){
		case 1 :
			inr1 = (curr * 78.95);
			printf("\n                    CONVERTED INTO INDIAN RUPEE VALUE: %.2f INR" , inr1);
			break;
		case 2:
			usd2 = (curr * 1.00);
			printf("\n                    CONVERTED INTO DOLLAR VALUE: %.2f DOLLARS" , usd2);
			break;
		case 3:
			euro1 = (curr * 0.96);
			printf("\n                    CONVERTED INTO EURO VALUE: %.2f EUROS" , euro1);
			break;
		case 4:
			pou1 = (curr * 0.83);
			printf("\n                    CONVERTED INTO POUND VALUE: %.2f POUNDS" , pou1);
			break;
		case 5:
			rub1 = (curr * 57.00);
			printf("\n                    CONVERTED INTO RUSSIAN RUBEL VALUE: %.2f RUBELS", rub1);
			break;
		case 6:
			yua1 = (curr * 6.70);
			printf("\n                    CONVERTED INTO CHINESE YUAN VALUE: %.2f YUANS" , yua1);
			break;
		case 7:
			din1 = (curr * 0.31);
			printf("\n                    CONVERTED INTO KUWAITI DINARS VALUE: %.2f DINARS" , din1);
			break;
		case 8:
			yen1 = (curr * 135.22);
			printf("\n                    CONVERTED INTO JAPANESE YEN VALUE: %.2f YENS" , yen1);
			break;
		case 9:
			iran1 = (curr * 423500.00);
			printf("\n                    CONVERTED INTO IRANIAN REALS VALUE: %.2f REALS" , iran1);
			break;
		case 10:
			taka1 = (curr * 93.45);
			printf("\n                    CONVERTED INTO BANGLADESHI TAKA VALUE: %.2f TAKA" , taka1);
			break;
		default:
			printf("\n                        Wrong Choice");
			break;
	}
	printf("\n\n                            PRESS ENTER TO PROCEED MORE\n");
	getchar();
}

void unit() //unit function
{
#ifdef _WIN32
	system("cls"); //clear previous screen
#else
	system("clear");
#endif
	int b;
	printf("\n=================================== WELCOME TO UNIT CONVERTER====================================\n");
	printf("AVAILABLE UNITS CONVERTERS ARE\n");
	printf("LENGTH CONVERTER========> 1\n");
	printf("TIME UNIT CONVERTER===> 2\n");
	printf("DATA CONVERTER =========> 3\n");
	printf("ENTER YOUR CHOICE=");
	scanf("%d", &b);
	switch(b)
	{
	case 1:
		u_length(); // go to length function
		break;
	case 2:
		u_time(); //go to time function
		break;
	case 3:
		u_data(); //go to data function
		break;
	default:
		printf("Invalid choice\n");
		break;
	}
	getchar();
}

void u_length() //length function
{
	colour2(); // for colouring the font
#ifdef _WIN32
	system("cls"); //clear previous screen
#else
	system("clear");
#endif
	int ch1, ch2;
	float len, foot1, inch1, met1, km1, cm1, yard1;
	printf("\n=================================== WELCOME TO LENGTH CONVERTER====================================\n");
	printf("\n1.FOOT\n2.INCH\n3.METER\n4.KILOMETER\n5.CENTIMETER\n6.YARD\n");
	printf("\n\nCHOOSE YOUR LENGTH UNIT:");
	scanf("%d", &ch1);
	printf("1.FOOT\n2.INCH\n3.METER\n4.KILOMETER\n5.CENTIMETER\n6.YARD\n");
	printf("\n");
	printf("\n\nCHOOSE YOUR CONVERTED LENGTH UNIT:");
	scanf("%d", &ch2);
	printf("\n\nENTER THE VALUE : ");
	scanf("%f", &len);
	//convert all the length to meter
	switch(ch1){
		case 1 :
			len = len * 0.304799;
			break;
		case 2:
			len = len * 0.025399; 
			break;
		case 3:
			len = len * 1;
			break;
		case 4:
			len = len * 1000;
			break;
		case 5:
			len = len * 0.01;
			break;
		case 6:
			len = len * 0.9144;
			break;
		default:
			printf("Wrong Choice");
			break;
	}
	switch(ch2){
		case 1 :
			foot1 = (len * 3.28084);        
			printf("                     CONVERTED INTO FOOT VALUE: %.2f FOOT" , foot1);
			break;
		case 2:
			inch1 = (len * 39.3701);
			printf("                     CONVERTED INTO INCH VALUE: %.2f INCHES" , inch1);
			break;
		case 3:
			met1 = (len * 1);
			printf("                     CONVERTED INTO METER VALUE: %.2f METER" , met1);
			break;
		case 4:
			km1 = (len * 0.001);
			printf("                     CONVERTED INTO KILOMETER VALUE: %.2f KM" , km1);
			break;
		case 5:
			cm1 = (len * 100);
			printf("                     CONVERTED INTO CENTIMETER VALUE: %.2f CM", cm1);
			break;
		case 6:
			yard1 = (len * 1.09361);
			printf("                     CONVERTED INTO YARD VALUE: %.2f YARDS" , yard1);
			break;
		default:
			printf("                     Wrong Choice");
			break;
	}
	printf("\n\n                            PRESS ENTER TO PROCEED MORE\n");
	getchar();
}

void u_time() //time function
{
	colour3(); // for colouring the font
#ifdef _WIN32
	system("cls"); //clear previous screen
#else
	system("clear");
#endif
	long int ch1, ch2;
	float time, ms1, sec1, min1, hou1, day1, week1;
	printf("\n===================================  WELCOME TO TIME UNIT CONVERTER====================================\n");
	printf("\n\nAVAILABLE TIME UNITS ARE :- \n");
	printf("_____________________________\n");
	printf("\n\n 1. MILLISECOND \n 2. SECOND  \n 3. MINUTE \n 4. HOUR \n 5. DAY\n 6. WEEK\n ");
	printf("\n");
	printf("\nCHOOSE YOUR TIME UNIT:");
	scanf("%ld", &ch1);
	printf("\n\n 1. MILLISECOND \n 2. SECOND  \n 3. MINUTE \n 4. HOUR \n 5. DAY\n 6. WEEK\n ");
	printf("\n");
	printf("\nCHOOSE YOUR CONVERTED TIME UNIT:");
	scanf("%ld", &ch2);
	printf("\n\nENTER VALUE OF YOUR TIME UNIT: ");
	scanf("%f", &time);
	//convert all the time unit in week 
	switch(ch1){
		case 1 :
			time = time * (1.65343915e-9);
			break;
		case 2:
			time = time * 1.65343915e-6; 
			break;
		case 3:
			time = time * 0.0000992063;
			break;
		case 4:
			time = time * 0.005952381;
			break;
		case 5:
			time = time * 0.1428571429;
			break;
		case 6:
			time = time * 1;
			break;
		default:
			printf("                       Wrong Choice");
			break;
	}
	switch(ch2){
		case 1 :
			ms1 = (time * 604800000);
			printf("\n                    CONVERTED TO MILLISECOND VALUE: %.2f ms" , ms1);
			break;
		case 2:
			sec1 = (time * 604800);
			printf("\n                    CONVERTED TO SECOND VALUE: %.2f sec" , sec1);
			break;
		case 3:
			min1 = (time * 10080);
			printf("\n                    CONVERTED TO MINUTES VALUE: %.2f min" , min1);
			break;
		case 4:
			hou1 = (time * 168);
			printf("\n                    CONVERTED TO HOURS VALUE: %.2f hrs" , hou1);
			break;
		case 5:
			day1 = (time * 7);
			printf("\n                    CONVERTED TO DAYS VALUE: %.2f days", day1);
			break;
		case 6:
			week1 = (time * 1);
			printf("\n                    CONVERTED TO WEEK VALUE: %.2f weeks" , week1);
			break;
		default:
			printf("\n                        Wrong Choice");
			break;
	}
	printf("\n\n                            PRESS ENTER TO PROCEED MORE\n");
	getchar();
}

void u_data() //data function
{
	colour4(); // for colouring the font
#ifdef _WIN32
	system("cls"); //clear previous screen
#else
	system("clear");
#endif
	long int ch1, ch2;
	float data, bits1, byte1, kb1, mb1, gb1;
	//convert all the data unit in megabytes
	printf("\n=================================== WELCOME TO DATA CONVERTER====================================\n");
	printf("\n\nAVAILABLE DATA UNITS ARE :- \n");
	printf("_____________________________\n");
	printf("\n1.BITS\n2.BYTES\n3.KILOBYTES\n4.MEGABYTES\n5.GIGABYTES\n");
	printf("\n\nCHOOSE YOUR DATA UNIT:");
	scanf("%ld", &ch1);
	printf("1.BITS\n2.BYTES\n3.KILOBYTES\n4.MEGABYTES\n5.GIGABYTES\n");
	printf("\n");
	printf("\nCHOOSE YOUR CONVERTED DATA UNIT:");
	scanf("%ld", &ch2);
	printf("\n\nENTER THE VALUE : ");
	scanf("%f", &data);
	switch(ch1)
	{
		case 1 :
			data = data * (1.19209290e-7);
			break;
		case 2:
			data = data * (9.53674316e-7); 
			break;
		case 3:
			data = data * 0.0009765625;
			break;
		case 4:
			data = data * 1;
			break;
		case 5:
			data = data * 1024;
			break;
		default:
			printf("Wrong Choice");    
			break;
	}
	switch(ch2){
		case 1 :
			bits1 = (data * 8388608);
			printf("                        CONVERTED INTO BITS VALUE: %.2f bits" , bits1);
			break;
		case 2:
			byte1 = (data * 1048576);         
			printf("                        CONVERTED INTO BYTE VALUE: %.2f BYTES" , byte1);
			break;
		case 3:
			kb1 = (data * 1024);
			printf("                        CONVERTED INTO KILOBYTE VALUE: %.2f KB" , kb1);
			break;
		case 4:
			mb1 = (data * 1);
			printf("                        CONVERTED INTO MEGABYTE VALUE: %.2f MB" , mb1);
			break;
		case 5:
			gb1 = (data * 0.0009765625);
			printf("                        CONVERTED INTO GIGABYTE VALUE: %.2f GB", gb1);
			break;
		default:
			printf("Wrong Choice");
			break;
	}
	printf("\n\n                            PRESS ENTER TO PROCEED MORE\n");
	getchar();
}

void calculator() // calculator function
{
	colour5(); // for colouring the font
#ifdef _WIN32
	system("cls"); //clear previous screen
#else
	system("clear");
#endif
	printf("\n===================================  WELCOME TO CALCULATOR  ====================================\n");
	printf("\n\nAVAILABLE OPERATORS ARE :- \n");
	char n;
	int a, b;
	printf(" '+','-','*','/','%%'\n");
	printf("ENTER YOUR OPERATOR: ");
	scanf(" %c", &n);
	printf("ENTER FIRST OPERAND: ");
	scanf("%d", &a);
	printf("ENTER SECOND OPERAND: ");
	scanf("%d", &b);
	//choose the operator and calculate the value
	switch (n)
	{
	case '+':
		printf("                                ANSWER: %d + %d = %d", a, b, a + b);
		break;
	case '-':                                 
		printf("                                ANSWER: %d - %d = %d", a, b, a - b); 
		break;
	case '*':
		printf("                                ANSWER: %d * %d = %d", a, b, a * b);
		break;
	case '/':
		if(b != 0)
			printf("                                ANSWER: %d / %d = %d", a, b, a / b);
		else
			printf("                                ERROR: Division by zero");
		break;
	case '%':
		if(b != 0)
			printf("                                ANSWER: %d %% %d = %d", a, b, a % b);
		else
			printf("                                ERROR: Division by zero");
		break;
	default:
		printf("                                INVALID CHOICE\n");
		break;
	}
	printf("\n\n                            PRESS ENTER TO PROCEED MORE\n");
	getchar();
}