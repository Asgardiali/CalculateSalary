#include<stdio.h>                                               //K�t�phane dosyalar�n� �ektim.
#include<math.h>

int  main(void)                                                 //Ana program� olu�turdum.
{
	int chose;                                                  //�cretlendirmeyi se�mek i�in chose de�i�kenini tan�mlad�m ve kullan�c�dan
    printf("Please Chose Group of Salary\n");
	printf("1-Manager Salary\n");
	printf("2-Hourly Worker Salary\n");
	printf("3-Comission Worker Salary\n");
	printf("4-Price Worker Salary\n");                             //i�lem yapmak istedi�ini g�rmesini
	scanf("%d",&chose);

	switch(chose)                                               //Switch Case yap�s�n� kullanarak se�ilen numaraya g�re program i�lemlerini yapamay ba�lad�.
	{
    	case 1:                                                 //Her Case i�inde fonksiyon �a��rd�m sade g�z�kmesi amac�yla.
			CalculateManager();

    		break;
		case 2:

			CalculateHourlyWorker();

    		break;
        case 3:

			CalculateComissionWorker();

    		break;

		case 4:

			CalculatePriceWorker();

    		break;

	}
}

int CalculateManager()                                          //Manager �cretlendirmesi i�in fonksiyon yazd�m.
{
	int ManagerSalary=5000;
 	int personNumber=0;
 	float totalSalary=0;

	printf("Please Enter Manager Number:\n");                    //Kullan�c�dan ki�i says�n� girmesini istedim.
	scanf("%d",&personNumber);
	
    printf("Manager Salary Monthly:%d $\n",ManagerSalary);        //Ayl�k ve haftal�k olarak �cretleri yazd�rd�m.
	printf("Manager Salary Weekly:%d $\n",ManagerSalary/4);
	
	totalSalary=ManagerSalary*personNumber;
    printf("Total Manager Salary=%f $",totalSalary);               // Ki�i say�s�na g�re toplam �creti buldum.
    
	return  ManagerSalary;
}

int CalculateHourlyWorker()                                         //Hourly Worker �cretlendirmesi i�in fonksiyon yazd�m.
{
	int hour=0;
	int personNumber=0;
 	float totalSalary=0;
	float HourlyWorkerSalary=0;
	int fazla=0;
	
	printf("Please Enter Hourly Worker Number:\n");                  //Kullan�c�dan ki�i says�n� girmesini istedim
	scanf("%d",&personNumber);
	
	printf("Please Enter Worker Hour:\n");                           //Hourly Worker haftal�k ka� saat �al��t���n� girilmesini istedim.
	scanf("%d",&hour);
	if(hour<=40)                                                    //40 saate e�it ve daha az ise �cret sabit, di�er durumda �cret 1.5 kat� eklendi.
	{
		HourlyWorkerSalary=3000;
		printf("Hourly Worker Salary Monthly:%f$\n",HourlyWorkerSalary);               //Ayl�k ve haftal�k olarak �cretleri yazd�rd�m.
		printf("Hourly Worker Salary Weekly:%f$\n",HourlyWorkerSalary/4);
 	}
	else
	{
		fazla=hour-40;
		HourlyWorkerSalary=3000+(1,5*fazla);
		printf("Hourly Worker Salary Monthly:%f$\n",HourlyWorkerSalary);                //Ayl�k ve haftal�k olarak �cretleri yazd�rd�m.
		printf("Hourly Worker Salary Weekly:%f$\n",HourlyWorkerSalary/4);
	}

	totalSalary=HourlyWorkerSalary*personNumber;                                         // Ki�i say�s�na g�re toplam �creti buldum.
    printf("Total Hourly Worker Salary=%f$",totalSalary);
	
	return HourlyWorkerSalary;
}

int CalculateComissionWorker()                             //Comission Worker �cretlendirmesi i�in fonksiyon yazd�m.
{
	float sales=0;
	int personNumber=0;
 	float totalSalary=0;
	int ComissionWorkerSalary=0;
	
	printf("Please Enter Comission Worker Number:\n");       //Kullan�c�dan ki�i says�n� girmesini istedim
	scanf("%d",&personNumber);
	
	printf("Please Enter Comission Worker Gross Weekly Sales %:\n");   //Comission Worker�n yapt��� sat��� % olarak istedim.
	scanf("%f",&sales);
	
	if(sales<5.7)                                                     //Sales de�erine g�re i�lem yapt�rd�m.
	{                                                                 //E�er 5.7 den b�y�k olursa 250$ ekledim.
		ComissionWorkerSalary=3000;
		printf("Comission Worker Salary Monthly=%d$\n",ComissionWorkerSalary);
		printf("Comission Worker Salary Weekly:%d$\n",ComissionWorkerSalary/4);        //Ayl�k ve haftal�k olarak �cretleri yazd�rd�m.
    }
    else
	{
		ComissionWorkerSalary=3000+250;
		printf("Comission Worker Salary Monthly=%d$\n",ComissionWorkerSalary);
		printf("Comission Worker Salary Weekly:%d$\n",ComissionWorkerSalary/4);         //Ayl�k ve haftal�k olarak �cretleri yazd�rd�m.
    }
	
	totalSalary=ComissionWorkerSalary*personNumber;                                      // Ki�i say�s�na g�re toplam �creti buldum.
    printf("Total Comission Worker Salary=%f$",totalSalary);
    
	return ComissionWorkerSalary;
}

int CalculatePriceWorker()             //Price Worker �cretlendirmesi i�in fonksiyon yazd�m.
{
 	int personNumber=0;
 	float totalSalary=0;
	int PriceWorkerSalary=2000;
	printf("Please Enter Price Worker Number:\n");                   //Kullan�c�dan ki�i says�n� girmesini istedim
	scanf("%d",&personNumber);
	printf("Price Worker Salary Monthly:%d$\n",PriceWorkerSalary);             //Ayl�k ve haftal�k olarak �cretleri yazd�rd�m.
	printf("Price Worker Salary Weekly:%d$\n",PriceWorkerSalary/4);
	totalSalary=PriceWorkerSalary*personNumber;
    printf("Total Price Worker Salary=%f$",totalSalary);                  // Ki�i say�s�na g�re toplam �creti buldum.
	return  PriceWorkerSalary;
}
