#include<stdio.h>                                               //Kütüphane dosyalarýný çektim.
#include<math.h>

int  main(void)                                                 //Ana programý oluþturdum.
{
	int chose;                                                  //Ücretlendirmeyi seçmek için chose deðiþkenini tanýmladým ve kullanýcýdan
    printf("Please Chose Group of Salary\n");
	printf("1-Manager Salary\n");
	printf("2-Hourly Worker Salary\n");
	printf("3-Comission Worker Salary\n");
	printf("4-Price Worker Salary\n");                             //iþlem yapmak istediðini görmesini
	scanf("%d",&chose);

	switch(chose)                                               //Switch Case yapýsýný kullanarak seçilen numaraya göre program iþlemlerini yapamay baþladý.
	{
    	case 1:                                                 //Her Case içinde fonksiyon çaðýrdým sade gözükmesi amacýyla.
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

int CalculateManager()                                          //Manager ücretlendirmesi için fonksiyon yazdým.
{
	int ManagerSalary=5000;
 	int personNumber=0;
 	float totalSalary=0;

	printf("Please Enter Manager Number:\n");                    //Kullanýcýdan kiþi saysýný girmesini istedim.
	scanf("%d",&personNumber);
	
    printf("Manager Salary Monthly:%d $\n",ManagerSalary);        //Aylýk ve haftalýk olarak ücretleri yazdýrdým.
	printf("Manager Salary Weekly:%d $\n",ManagerSalary/4);
	
	totalSalary=ManagerSalary*personNumber;
    printf("Total Manager Salary=%f $",totalSalary);               // Kiþi sayýsýna göre toplam ücreti buldum.
    
	return  ManagerSalary;
}

int CalculateHourlyWorker()                                         //Hourly Worker ücretlendirmesi için fonksiyon yazdým.
{
	int hour=0;
	int personNumber=0;
 	float totalSalary=0;
	float HourlyWorkerSalary=0;
	int fazla=0;
	
	printf("Please Enter Hourly Worker Number:\n");                  //Kullanýcýdan kiþi saysýný girmesini istedim
	scanf("%d",&personNumber);
	
	printf("Please Enter Worker Hour:\n");                           //Hourly Worker haftalýk kaç saat çalýþtýðýný girilmesini istedim.
	scanf("%d",&hour);
	if(hour<=40)                                                    //40 saate eþit ve daha az ise ücret sabit, diðer durumda ücret 1.5 katý eklendi.
	{
		HourlyWorkerSalary=3000;
		printf("Hourly Worker Salary Monthly:%f$\n",HourlyWorkerSalary);               //Aylýk ve haftalýk olarak ücretleri yazdýrdým.
		printf("Hourly Worker Salary Weekly:%f$\n",HourlyWorkerSalary/4);
 	}
	else
	{
		fazla=hour-40;
		HourlyWorkerSalary=3000+(1,5*fazla);
		printf("Hourly Worker Salary Monthly:%f$\n",HourlyWorkerSalary);                //Aylýk ve haftalýk olarak ücretleri yazdýrdým.
		printf("Hourly Worker Salary Weekly:%f$\n",HourlyWorkerSalary/4);
	}

	totalSalary=HourlyWorkerSalary*personNumber;                                         // Kiþi sayýsýna göre toplam ücreti buldum.
    printf("Total Hourly Worker Salary=%f$",totalSalary);
	
	return HourlyWorkerSalary;
}

int CalculateComissionWorker()                             //Comission Worker ücretlendirmesi için fonksiyon yazdým.
{
	float sales=0;
	int personNumber=0;
 	float totalSalary=0;
	int ComissionWorkerSalary=0;
	
	printf("Please Enter Comission Worker Number:\n");       //Kullanýcýdan kiþi saysýný girmesini istedim
	scanf("%d",&personNumber);
	
	printf("Please Enter Comission Worker Gross Weekly Sales %:\n");   //Comission Workerýn yaptýðý satýþý % olarak istedim.
	scanf("%f",&sales);
	
	if(sales<5.7)                                                     //Sales deðerine göre iþlem yaptýrdým.
	{                                                                 //Eðer 5.7 den büyük olursa 250$ ekledim.
		ComissionWorkerSalary=3000;
		printf("Comission Worker Salary Monthly=%d$\n",ComissionWorkerSalary);
		printf("Comission Worker Salary Weekly:%d$\n",ComissionWorkerSalary/4);        //Aylýk ve haftalýk olarak ücretleri yazdýrdým.
    }
    else
	{
		ComissionWorkerSalary=3000+250;
		printf("Comission Worker Salary Monthly=%d$\n",ComissionWorkerSalary);
		printf("Comission Worker Salary Weekly:%d$\n",ComissionWorkerSalary/4);         //Aylýk ve haftalýk olarak ücretleri yazdýrdým.
    }
	
	totalSalary=ComissionWorkerSalary*personNumber;                                      // Kiþi sayýsýna göre toplam ücreti buldum.
    printf("Total Comission Worker Salary=%f$",totalSalary);
    
	return ComissionWorkerSalary;
}

int CalculatePriceWorker()             //Price Worker ücretlendirmesi için fonksiyon yazdým.
{
 	int personNumber=0;
 	float totalSalary=0;
	int PriceWorkerSalary=2000;
	printf("Please Enter Price Worker Number:\n");                   //Kullanýcýdan kiþi saysýný girmesini istedim
	scanf("%d",&personNumber);
	printf("Price Worker Salary Monthly:%d$\n",PriceWorkerSalary);             //Aylýk ve haftalýk olarak ücretleri yazdýrdým.
	printf("Price Worker Salary Weekly:%d$\n",PriceWorkerSalary/4);
	totalSalary=PriceWorkerSalary*personNumber;
    printf("Total Price Worker Salary=%f$",totalSalary);                  // Kiþi sayýsýna göre toplam ücreti buldum.
	return  PriceWorkerSalary;
}
