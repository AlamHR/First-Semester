#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>


typedef struct
{
    double multi;
} converter;

double bitcointodollar(converter x)
{
    return x.multi*69999;
}

double dollartobitcoin(converter x)
{
    return x.multi*0.000014;
}
double bitcointotaka(converter x)
{
    return x.multi*8169083;
}

double takatobitcoin(converter x)
{
    return x.multi*0.00000012;
}
double Ethereumtodollar(converter x)
{
    return x.multi*3767.18;
}

double dollartoEthereum(converter x)
{
    return x.multi*0.00027;
}
double Ethereumtotaka(converter x)
{
    return x.multi*439774.98;
}

double takatoEthereum(converter x)
{
    return x.multi*0.0000023;
}
double Dogecointodollar(converter x)
{
    return x.multi*0.17;
}

double dollartoDogecoin(converter x)
{
    return x.multi*5.92;
}
double Dogecointotaka(converter x)
{
    return x.multi*19.76;
}

double takatoDogecoin(converter x)
{
    return x.multi*0.051;
}
double ShibuInucointodollar(converter x)
{
    return x.multi*0.000026;
}

double dollartoShibuInucoin(converter x)
{
    return x.multi*37937;
}
double ShibuInucointotaka(converter x)
{
    return x.multi*0.0031;
}

double takatoShibuInucoin(converter x)
{
    return x.multi*324.51;
}
double Litecointodollar(converter x)
{
    return x.multi*87.25;
}

double dollartoLitecoin(converter x)
{
    return x.multi*0.011;
}
double Litecointotaka(converter x)
{
    return x.multi*10218.33;
}

double takatoLitecoin(converter x)
{
    return x.multi*0.000098;
}

float temperature1(float x)
{
  float tem;
  tem= (x*1.8)+32;
  return tem;
}
float temperature2(float x)
{
  float tem;
  tem=(x-32)*(0.5555555);
  return tem;
}
float temperature3(float x)
{
  float tem;
  tem=(x+273.15);
  return tem;
}
float temperature4(float x)
{
  float tem;
  tem=(x-273.15);
  return tem;
}
float temperature5(float x)
{
  float tem;
  tem=(x-32)*(5/9)+273.15;
  return tem;
}
float temperature6(float x)
{
  float tem;
  tem=(x-273.15)*(9/5)+32;
  return tem;
}
float lenght1(float x)
{
  float len;
  len= (x*100);
  return len;
}
float lenght2(float x)
{
  float len;
  len= (x/100);
  return len;
}
float lenght3(float x)
{
  float len;
  len= (x*39.3701);
  return len;
}
float lenght4(float x)
{
  float len;
  len= (x/39.3701);
  return len;
}
float lenght5(float x)
{
  float len;
  len= (x/1000);
  return len;
}
float lenght6(float x)
{
  float len;
  len= (x*1000);
  return len;
}
float lenght7(float x)
{
  float len;
  len= (x/12);
  return len;
}

float lenght8(float x)
{
  float len;
  len= (x*12);
  return len;
}
float lenght9(float x)
{
  float len;
  len= (x*3.28084);
  return len;
}
float lenght10(float x)
{
  float len;
  len= (x/3.28084);
  return len;
}
float area1(float x)
{
  float are;
  are= (x*100*100);
  return are;
}
float area2(float x)
{
  float are;
  are= (x/100)/100;
  return are;
}
double takaToDollar(double taka) {
    return taka / 100.83;
}

double dollarToTaka(double dollar) {
    return dollar * 100.83;
}


double takaToRupees(double taka) {
    return taka / 1.62;
}


double rupeesToTaka(double rupees) {
    return rupees * 1.62;
}


double dollarToRupees(double dollar) {
    return dollar * 73.53;
}


double rupeesToDollar(double rupees) {
    return rupees / 73.53;
}


double takaToRiyal(double taka) {
    return taka / 3.64;
}


double riyalToTaka(double riyal) {
    return riyal * 3.64;
}


double dollarToRiyal(double dollar) {
    return dollar * 3.75;
}


double riyalToDollar(double riyal) {
    return riyal / 3.75;
}


double riyalToRupees(double riyal) {
    return riyal * 21.45;
}


double rupeesToRiyal(double rupees) {
    return rupees / 21.45;
}


double takaToDirham(double taka) {
    return taka / 3.71;
}


double dirhamToTaka(double dirham) {
    return dirham * 3.71;
}


double dirhamToDollar(double dirham) {
    return dirham * 0.27;
}


double dollarToDirham(double dollar) {
    return dollar / 0.27;
}


double dirhamToRiyal(double dirham) {
    return dirham * 0.28;
}

double riyalToDirham(double riyal) {
    return riyal / 0.28;
}


double dirhamToRupees(double dirham) {
    return dirham * 20.87;
}

double rupeesToDirham(double rupees) {
    return rupees / 20.87;
}


// main function //
int main()
{
  int a,b,i,e,f,g,h;
  float c,d;
  printf("\t\t\t\n\n Welcome to convertor \t\t\t\n\n\n");

  printf("\t Temperature Calculate      [1]\n");
  printf("\t Currency Calculate         [2]\n");
  printf("\t Length Calculate           [3]\n");
  printf("\t Area Calculate             [4]\n");
  printf("\t Volume calculate           [5]\n");
  printf("\t CryptoCurrency Calculate   [6]\n");
  printf("\t Exit                       [0]\n");

  printf("enter  your option :");
  scanf(" %d",&a);

   if(a==1)
   {
     printf("\t\t  Welcome to Temperature Calculate \n\n");
     printf("\t Celsius  to Fahrenheit    [1]\n");
     printf("\t Fahrenheit to Celsius     [2]\n");
     printf("\t Celsius to Kelvin         [3]\n");
     printf("\t kelvin to Celsius         [4]\n");
     printf("\t Fahrenheit to Kelvin      [5]\n");
     printf("\t Kelvin to Fahrenheit      [6]\n");
     printf("Enter your option :");
     scanf("%d",&b);
     if(b==1)
     {
       float c;
       while(1)
       {
        printf("If you want to stop this Enter value -10 \n\n");
        printf("Enter Celsius Value :");
        scanf("%f",&d);
        if(d==-10) break;
        c=temperature1(d);
        printf("Result :\n");
        printf("%.2f Celsius = %.2f Farhenheit\n\n ",d,c);
        i++;
       }

     }
     if(b==2)
     {
       float c;
       while(1)
       {
        printf("If you want to stop this Enter value -10 \n\n");
        printf("Enter Farhenheit  Value :");
        scanf("%f",&d);
        if(d==-10) break;
        c=temperature2(d);
        printf("Result :\n");
        printf("%.2f Farhenheit = %.2f Celsious \n\n ",d,c);
        i++;
       }

     }
     if(b==3)
     {
       float c;
       while(1)
       {
        printf("If you want to stop this Enter value -10 \n\n");
        printf("Enter Celsius Value :");
        scanf("%f",&d);
        if(d==-10) break;
        c=temperature3(d);
        printf("Result :\n");
        printf("%.2f Celcious = %.2f Kelvin\n\n ",d,c);
        i++;
       }

     }
      if(b==4)
     {
       float c;
       while(1)
       {
        printf("If you want to stop this Enter value -10 \n\n");
        printf("Enter Kelvin Value :");
        scanf("%f",&d);
        if(d==-10) break;
        c=temperature4(d);
        printf("Result :\n");
        printf("%.2f Kelvin = %.2f Celsius\n\n ",d,c);
        i++;
       }

     }
     if(b==5)
     {
       float c;
       while(1)
       {
        printf("If you want to stop this Enter value -10 \n\n");
        printf("Enter Farhenheit Value :");
        scanf("%f",&d);
        if(d==-10) break;
        c=temperature5(d);
        printf("Result :\n");
        printf("%.2f Farhenheit = %.2f Kelvin\n\n ",d,c);
        i++;
       }

     }
     if(b==6)
     {
       float c;
       while(1)
       {
        printf("If you want to stop this Enter value -10 \n\n");
        printf("Enter Kelvin Value :");
        scanf("%f",&d);
        if(d==-10) break;
        c=temperature6(d);
        printf("Result :\n");
        printf("%.2f Kelvin = %.2f Farhenheit\n\n ",d,c);
        i++;
       }

     }

   }
   else if(a==2)
   {
     printf("\t\t Welcome to Currency Calculator\n\n ");
     printf("\t Taka to Dollar            [1]\n");
     printf("\t Dollar to Taka            [2]\n");
     printf("\t Taka to Rupee             [3]\n");
     printf("\t Rupee to Taka             [4]\n");
     printf("\t Dollar to Ruppe           [5]\n");
     printf("\t Ruppe to Dollar           [6]\n");
     printf("\t Taka to Riyal             [7]\n");
     printf("\t Riya to Taka              [8]\n");
     printf("\t Dollar to Riyal           [9]\n");
     printf("\t Riyal to Dollar           [10]\n");
     printf("\t Riyal to Ruppe            [11]\n");
     printf("\t Ruppe to Riyal            [12]\n");
     printf("\t Taka to Dirham            [13]\n");
     printf("\t Dirham to Taka            [14]\n");
     printf("\t Dirham to Dollar          [15]\n");
     printf("\t Dollar to Dirham          [16]\n");
     printf("\t Dirham to Riyal           [17]\n");
     printf("\t Riyal to Dirham           [18]\n");
     printf("\t Dirham to Ruppe           [19]\n");
     printf("\t Ruppe to Dirham           [20]\n\n");

     printf("Enter your option :");
     scanf("%d",&h);

     if(h==1)
     {
      double c;
        printf("\t\t Taka to Dollar \n\n");
        while(1)
        {
          printf("If you want to stop Enter 0\n\n");
          printf("Enter Value Of Metre :");
          scanf("%f",&d);
          c=takaToDollar(d);
          if(d==0) break;
          if(d<0) continue;
          printf("Result :\n");
          printf("%.2f Taka = %.2f Dollar \n\n ",d,c);
          i++;

        }

     }



   }
   else if(a==3)
   {
     printf("\t\t Welcome to Length Caluculate \n\n");
     printf("\t Metre to CentiMetre    [1]\n");
     printf("\t CentiMetre to Metre    [2]\n");
     printf("\t Metre to Inch          [3]\n");
     printf("\t Inch to Metre          [4]\n");
     printf("\t Metre to KiloMetre     [5]\n");
     printf("\t kiloMetre to Metre     [6]\n");
     printf("\t Inch to feet           [7]\n");
     printf("\t Feet to Inch           [8]\n");
     printf("\t Metre to Feet          [9]\n");
     printf("\t Feet to Metre          [10]\n\n");

     printf("Enter your option :");
     scanf("%d\n",&e);
     if(e==1)
     {
      float c;
        printf("\t\t Metre to CentiMetre\n\n");
        while(1)
        {
          printf("If you want to stop Enter 0\n\n");
          printf("Enter Value Of Metre :");
          scanf("%f",&d);
          c=lenght1(d);
          if(d==0) break;
          if(d<0) continue;
          printf("Result :\n");
          printf("%.2f Metre = %.2f CentiMetre \n\n ",d,c);
          i++;

        }

     }
     if(e==2)
     {
      float c;
        printf("\t\t CentiMetre to Metre \n\n");
        while(1)
        {
          printf("If you want to stop Enter 0\n\n");
          printf("Enter Value Of CentiMetre :");
          scanf("%f",&d);
          c=lenght1(d);
          if(d==0) break;
          if(d<0) continue;
          printf("Result :\n");
          printf("%.2f CentiMetre = %.2f Metre \n\n ",d,c);
          i++;

        }
     }
     if(e==3)
     {
       float c;
       printf("\t\t Metre to Inch \n\n");
       while(1)
       {
        printf("If you want to stop Enter 0 \n\n");
        printf("Enter Value of Metre :");
        scanf("%f",&d);
        c=lenght3(d);
        if(d==0) break;
        if(d<0) continue;
        printf("Result Is :\n");
        printf("%.2f Metre = %.2f Inch \n\n",d,c);
        i++;
       }
     }
     if(e==4)
     {
       float c;
       printf("\t\t Inch to Metre \n\n");
       while(1)
       {
        printf("If you want to stop this Enter value 0 \n\n");
        printf("Enter Inch Value :");
        scanf("%f",&d);
        if(d==0) break;
        if(d<0) continue;
        c=lenght4(d);
        printf("Result :\n");
        printf("%.2f Inch = %.2f Metre \n\n ",d,c);
        i++;
       }

      }
      if(e==5)
     {
       float c;
       printf("\t\t Metre to KiloMetre \n\n");
       while(1)
       {
        printf("If you want to stop this Enter value 0 \n\n");
        printf("Enter Metre Value :");
        scanf("%f",&d);
        if(d==0) break;
        if(d<0) continue;
        c=lenght5(d);
        printf("Result :\n");
        printf("%.2f Metre = %.2f KiloMetre \n\n ",d,c);
        i++;
       }

      }
      if(e==6)
     {
       float c;
       printf("\t\t KiloMitre to Mitre \n\n");
       while(1)
       {
        printf("If you want to stop this Enter value 0 \n\n");
        printf("Enter Kilometre Value :");
        scanf("%f",&d);
        if(d==0) break;
        if(d<0) continue;
        c=lenght6(d);
        printf("Result :\n");
        printf("%.2f KiloMetre = %.2f Metre \n\n ",d,c);
        i++;
       }

      }
      if(e==7)
     {
       float c;
       printf("\t\t Inch  to Feet \n\n");
       while(1)
       {
        printf("If you want to stop this Enter value 0 \n\n");
        printf("Enter Inch Value :");
        scanf("%f",&d);
        if(d==0) break;
        if(d<0) continue;
        c=lenght7(d);
        printf("Result :\n");
        printf("%.2f Inch = %.2f Feet \n\n ",d,c);
        i++;
       }

      }
       if(e==8)
     {
       float c;
       printf("\t\t Feet  to Inch \n\n");
       while(1)
       {
        printf("If you want to stop this Enter value 0 \n\n");
        printf("Enter Feet Value :");
        scanf("%f",&d);
        if(d==0) break;
        if(d<0) continue;
        c=lenght8(d);
        printf("Result :\n");
        printf("%.2f Feet = %.2f Inch \n\n ",d,c);
        i++;
       }

      }
       if(e==9)
     {
       float c;
       printf("\t\t Metre  to Feet\n\n");
       while(1)
       {
        printf("If you want to stop this Enter value 0 \n\n");
        printf("Enter Metre Value :");
        scanf("%f",&d);
        if(d==0) break;
        if(d<0) continue;
        c=lenght9(d);
        printf("Result :\n");
        printf("%.2f Metre = %.2f Feet \n\n ",d,c);
        i++;
       }

      }
       if(e==10)
     {
       float c;
       printf("\t\t Feet  to Metre \n\n");
       while(1)
       {
        printf("If you want to stop this Enter value 0 \n\n");
        printf("Enter Feet Value :");
        scanf("%f",&d);
        if(d==0) break;
        if(d<0) continue;
        c=lenght10(d);
        printf("Result :\n");
        printf("%.2f Feet = %.2f Metre \n\n ",d,c);
        i++;
       }

      }

    }
   else if(a==4)
   {
     printf("\t\t Welcome to Area Calkulate \n\n");
     printf("\t Metre Sq to CentiMetre Sq   [1]\n");
     printf("\t CentiMetre Sq to Metre Sq   [2]\n");
     printf("\t Metre sq to Feet sq         [3]\n");
     printf("\t Feet Sq to Metre Sq         [4]\n");
     printf("\t Metre Sq to Inch Sq         [5]\n");
     printf("\t Inch Sq to Metre Sq         [6]\n");
     printf("\t Feet Sq to Inch Sq          [7]\n");
     printf("\t Inch Sq to Feet Sq          [8]\n\n");
     printf("Enter Your Options :");
     scanf("%d",&f);
     if(f==1)
     {
       float c;
       printf("\t\t Metre Square to CentiMetre Square\n\n");
       while(1)
       {
        printf("To stop that Enter 0\n\n");
        printf("Enter Value of Metre Square :");
        scanf("%f",&d);
        if(d==0) break;
        if(d<0) continue;
        c=area1(d);
        printf("Result :\n");
        printf("%.2f Metre Square = %.2f CentiMetre Square\n\n",d,c);
       }
     }
      if(f==2)
     {
       float c;
       printf("\t\t CentiMietre Square to Metre Square\n\n");
       while(1)
       {
        printf("To stop that Enter 0 \n\n");
        printf("Enter Value of CentiMietre Square :");
        scanf("%f",&d);
        if(d==0) break;
        if(d<0) continue;
        c=area2(d);
        printf("Result :\n");
        printf("%.2f CentiMetre Square = %.2f Metre Square\n\n",d,c);
       }
     }


   }
   else if(a==5)
   {
     printf("\t\t Welcome to Area Calkulate \n\n");
     printf("\t Mitre cube to CentiMitre cube  [1]\n");
     printf("\t CentiMitre cube to Mitre cube  [2]\n");
     printf("\t Mitre cube to Feet cube        [3]\n");
     printf("\t Feet cube to Mitre cube        [4]\n");
     printf("\t Mitre cube to Inch cube        [5]\n");
     printf("\t Inch cube to Mitre cube        [6\n]");
     printf("\t Feet cube to Inch cube         [7]\n");
     printf("\t Inch cube to Feet cube         [8]\n");



   }
   else if(a==6)
   {
     printf("\t\t Welcome to Cryptocurency calculator \n\n");
     printf("\t Bitcoin to Dollar        [1]\n");
     printf("\t Dollar to Bitcoin        [2]\n");
     printf("\t Bitcoin to Taka          [3]\n");
     printf("\t Taka to Bitcoin          [4]\n");
     printf("\t Ethereum to Dollar       [5]\n");
     printf("\t Dollar to Ethereum       [6\n]");
     printf("\t Ethereum to Taka         [7]\n");
     printf("\t Taka to Ethereum         [8]\n");
     printf("\t Dogecoin to Dollar       [9]\n");
     printf("\t Dollar to Dogecoin       [10]\n");
     printf("\t Dogecoin to Taka         [11]\n");
     printf("\t Taka to Dogecoin         [12]\n");
     printf("\t Shibuinu to Dollar       [13]\n");
     printf("\t Dollar to Shibuinu       [14]\n");
     printf("\t Shibuinu to Taka         [15]\n");
     printf("\t Taka to Shibuinu         [16]\n");
     printf("\t Litecoin to Dollar       [17]\n");
     printf("\t Dollar to Litecoin       [18]\n");
     printf("\t Litecoin to Taka         [19]\n");
     printf("\t Taka to Litecoin         [20]\n");
     printf("Enter Your option:");
     scanf("%d",&g);

     if(g==1)
     {
         double c;
         printf("\t\t Bitcoin to Dollar \n\n");
        while(1)
       {
        printf("To stop that Enter 0\n\n");
        printf("Enter Value of Bitcoin :");
        converter d;
        scanf("%lf",&d);
        if(d.multi==0) break;
        if(d.multi<0) continue;
        c=bitcointodollar(d);
        printf("Result :\n");
        printf("%.2f Bitcoin = %.2f Dollar \n\n",d,c);
       }
     }
     if(g==2)
     {
         double c;
         printf("\t\t Dollar to Bitcoin \n\n");
        while(1)
       {
        printf("To stop that Enter 0\n\n");
        printf("Enter Value of Dollar :");
        converter d;
        scanf("%lf",&d);
        if(d.multi==0) break;
        if(d.multi<0) continue;
        c=dollartobitcoin(d);
        printf("Result :\n");
        printf("%.2f Dollar = %.2f Bitcoin \n\n",d,c);
       }
     }
     if(g==3)
     {
         double c;
         printf("\t\t Bitcoin to Taka \n\n");
        while(1)
       {
        printf("To stop that Enter 0\n\n");
        printf("Enter Value of Bitcoin :");
        converter d;
        scanf("%lf",&d);
        if(d.multi==0) break;
        if(d.multi<0) continue;
        c=bitcointotaka(d);
        printf("Result :\n");
        printf("%.2f Bitcoin = %.2f Taka \n\n",d,c);
       }
     }
      if(g==4)
     {
         double c;
         printf("\t\t Taka to Bitcoin \n\n");
        while(1)
       {
        printf("To stop that Enter 0\n\n");
        printf("Enter Value of Taka :");
        converter d;
        scanf("%lf",&d);
        if(d.multi==0) break;
        if(d.multi<0) continue;
        c=takatobitcoin(d);
        printf("Result :\n");
        printf("%.2f Taka = %.2f Bitcoin \n\n",d,c);
       }
     }
     if(g==5)
     {
         double c;
         printf("\t\t Ethereum to Dollar \n\n");
        while(1)
       {
        printf("To stop that Enter 0\n\n");
        printf("Enter Value of Ethereum :");
        converter d;
        scanf("%lf",&d);
        if(d.multi==0) break;
        if(d.multi<0) continue;
        c=Ethereumtodollar(d);
        printf("Result :\n");
        printf("%.2f Ethereum = %.2f Dollar \n\n",d,c);
       }
     }
     if(g==6)
     {
         double c;
         printf("\t\t Dollar to Ethereum \n\n");
        while(1)
       {
        printf("To stop that Enter 0\n\n");
        printf("Enter Value of Dollar :");
        converter d;
        scanf("%lf",&d);
        if(d.multi==0) break;
        if(d.multi<0) continue;
        c=dollartoEthereum(d);
        printf("Result :\n");
        printf("%.2f Dollar = %.2f Ethereum \n\n",d,c);
       }
     }
     if(g==7)
     {
         double c;
         printf("\t\t Ethereum to Taka \n\n");
        while(1)
       {
        printf("To stop that Enter 0\n\n");
        printf("Enter Value of Ethereum :");
        converter d;
        scanf("%lf",&d);
        if(d.multi==0) break;
        if(d.multi<0) continue;
        c=Ethereumtotaka(d);
        printf("Result :\n");
        printf("%.2f Ethereum = %.2f Taka \n\n",d,c);
       }
     }
     if(g==8)
     {
         double c;
         printf("\t\t Taka to Ethereum \n\n");
        while(1)
       {
        printf("To stop that Enter 0\n\n");
        printf("Enter Value of Taka :");
        converter d;
        scanf("%lf",&d);
        if(d.multi==0) break;
        if(d.multi<0) continue;
        c=takatoEthereum(d);
        printf("Result :\n");
        printf("%.2f Taka = %.2f Ethereum \n\n",d,c);
       }
     }
     if(g==9)
     {
         double c;
         printf("\t\t Dogecoin to Dollar \n\n");
        while(1)
       {
        printf("To stop that Enter 0\n\n");
        printf("Enter Value of Dogecoin :");
        converter d;
        scanf("%lf",&d);
        if(d.multi==0) break;
        if(d.multi<0) continue;
        c=Dogecointodollar(d);
        printf("Result :\n");
        printf("%.2f Dogecoin = %.2f Dollar \n\n",d,c);
       }
     }
     if(g==10)
     {
         double c;
         printf("\t\t Dollar to Dogecoin \n\n");
        while(1)
       {
        printf("To stop that Enter 0\n\n");
        printf("Enter Value of Dollar :");
        converter d;
        scanf("%lf",&d);
        if(d.multi==0) break;
        if(d.multi<0) continue;
        c=dollartoDogecoin(d);
        printf("Result :\n");
        printf("%.2f Dollar = %.2f Dogecoin \n\n",d,c);
       }
     }
      if(g==11)
     {
         double c;
         printf("\t\t Dogecoin to Taka \n\n");
        while(1)
       {
        printf("To stop that Enter 0\n\n");
        printf("Enter Value of Dogecoin :");
        converter d;
        scanf("%lf",&d);
        if(d.multi==0) break;
        if(d.multi<0) continue;
        c=Dogecointotaka(d);
        printf("Result :\n");
        printf("%.2f Dogecoin = %.2f Taka \n\n",d,c);
       }
     }
     if(g==12)
     {
         double c;
         printf("\t\t Taka to Dogecoin \n\n");
        while(1)
       {
        printf("To stop that Enter 0\n\n");
        printf("Enter Value of Taka :");
        converter d;
        scanf("%lf",&d);
        if(d.multi==0) break;
        if(d.multi<0) continue;
        c=takatoDogecoin(d);
        printf("Result :\n");
        printf("%.2f Taka = %.2f Dogecoin \n\n",d,c);
       }
     }
     if(g==13)
     {
         double c;
         printf("\t\t Shibuinu to Dollar \n\n");
        while(1)
       {
        printf("To stop that Enter 0\n\n");
        printf("Enter Value of Shibuinu :");
        converter d;
        scanf("%lf",&d);
        if(d.multi==0) break;
        if(d.multi<0) continue;
        c=ShibuInucointodollar(d);
        printf("Result :\n");
        printf("%.2f Shibuinu = %.2f Dollar \n\n",d,c);
       }
     }
     if(g==14)
     {
         double c;
         printf("\t\t Dollar to Shibuinu \n\n");
        while(1)
       {
        printf("To stop that Enter 0\n\n");
        printf("Enter Value of Dollar :");
        converter d;
        scanf("%lf",&d);
        if(d.multi==0) break;
        if(d.multi<0) continue;
        c=dollartoShibuInucoin(d);
        printf("Result :\n");
        printf("%.2f Dollar = %.2f Shibuinu \n\n",d,c);
       }
     }
     if(g==15)
     {
         double c;
         printf("\t\t Shibuinu to Taka \n\n");
        while(1)
       {
        printf("To stop that Enter 0\n\n");
        printf("Enter Value of Shibuinu :");
        converter d;
        scanf("%lf",&d);
        if(d.multi==0) break;
        if(d.multi<0) continue;
        c=ShibuInucointotaka(d);
        printf("Result :\n");
        printf("%.2f Shibuinu = %.2f Taka \n\n",d,c);
       }
     }
     if(g==16)
     {
         double c;
         printf("\t\t Taka to Shibuinu \n\n");
        while(1)
       {
        printf("To stop that Enter 0\n\n");
        printf("Enter Value of Taka :");
        converter d;
        scanf("%lf",&d);
        if(d.multi==0) break;
        if(d.multi<0) continue;
        c=takatoShibuInucoin(d);
        printf("Result :\n");
        printf("%.2f Taka = %.2f Shibuinu \n\n",d,c);
       }
     }
     if(g==17)
     {
         double c;
         printf("\t\t Litecoin to Dollar \n\n");
        while(1)
       {
        printf("To stop that Enter 0\n\n");
        printf("Enter Value of Litecoin :");
        converter d;
        scanf("%lf",&d);
        if(d.multi==0) break;
        if(d.multi<0) continue;
        c=Litecointodollar(d);
        printf("Result :\n");
        printf("%.2f Litecoin = %.2f Dollar \n\n",d,c);
       }
     }
     if(g==18)
     {
         double c;
         printf("\t\t Dollar to Litecoin \n\n");
        while(1)
       {
        printf("To stop that Enter 0\n\n");
        printf("Enter Value of Dollar :");
        converter d;
        scanf("%lf",&d);
        if(d.multi==0) break;
        if(d.multi<0) continue;
        c=dollartoLitecoin(d);
        printf("Result :\n");
        printf("%.2f Dollar = %.2f Litecoin \n\n",d,c);
       }
     }
     if(g==19)
     {
         double c;
         printf("\t\t Litecoin to Taka \n\n");
        while(1)
       {
        printf("To stop that Enter 0\n\n");
        printf("Enter Value of Litecoin :");
        converter d;
        scanf("%lf",&d);
        if(d.multi==0) break;
        if(d.multi<0) continue;
        c=Litecointotaka(d);
        printf("Result :\n");
        printf("%.2f Litecoin = %.2f Taka \n\n",d,c);
       }
     }
     if(g==20)
     {
         double c;
         printf("\t\t Taka to Litecoin \n\n");
        while(1)
       {
        printf("To stop that Enter 0\n\n");
        printf("Enter Value of Taka :");
        converter d;
        scanf("%lf",&d);
        if(d.multi==0) break;
        if(d.multi<0) continue;
        c=takatoLitecoin(d);
        printf("Result :\n");
        printf("%.2f Taka = %.2f Litecoin \n\n",d,c);
       }
     }
   }
   else if(a==0)
   {
    printf("\t Thank you ");
   }




 return 0;
}
