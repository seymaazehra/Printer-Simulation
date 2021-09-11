#include<stdio.h>
#include<stdlib.h>
#include<string.h>
char dosyaAdiOku[30];  //global tanýmlanan deðiþkenler
	char dosyaAdi[20];
		char komutAdiOku[20];
	int p=0;
	int kontrol;
	
void belgeArama(){  //ilk fonksiyon
	
	
		FILE *fp;
	if ((fp = fopen ("belgeler.txt", "r")) == NULL) {   //dosya okumak için açýldý
	      printf("Dosya açma hatasý!");
	      exit(1);}
	      printf("dosya adi giriniz:\n");
	      scanf("%s",dosyaAdiOku);
	      
	      while (!feof(fp)){   //dosya taranýyor
	    fscanf(fp,"%s ",&dosyaAdi);
         
	  
	  if(strcmp(dosyaAdiOku,dosyaAdi)==0){  //dosyaAdiOku ve dosyaAdi eþit oldugunda yaz 
	  	  
	  	p=1;
	  	printf("Dosya bulundu\n");
	  	
	  	
	      
  }
  if(p==0)
  {printf("dosya bulunamadi");}
}
}


void bekleyen_isler(){

	  		FILE*mib_bekleyen_isler;
	  		if((mib_bekleyen_isler=fopen("mib_bekleyen_isler.txt","a+"))==NULL){
	  			printf("dosya acma hatasi");
	  			exit(1);
			  }
		  fprintf(mib_bekleyen_isler,"\n");
		  fprintf(mib_bekleyen_isler,"109548 %s %s",dosyaAdi,komutAdiOku);
		  
		  fclose(mib_bekleyen_isler);  
		    
		
		char dosyaAdiOku[30];
		
		FILE *fp;
		if ((fp = fopen ("komut_alt_islemler.txt", "r")) == NULL) {//okuma  amaçlý dosya açýldý
		      printf("Dosya açma hatasý!");
		      exit(1);
		    }
		/*while(!feof(komut_alt_islemler)) {  
		        
		           
		           fgets(dosyaAdiOku,30,komut_alt_islemler); //dosyadan 30 karakter okur
		           }*/
		char ch; 
	    while (ch!=EOF) {
	    	
        ch= fgetc(fp); // Read a Character

        printf("%c", ch);
        
		if(ch=='	')
           printf("\n");
		   
          
      }      
	     printf("\n\n");           
	    fclose(fp);
		//return 0;
}














   void yazici(){
   	FILE *fp;
	if ((fp = fopen ("belgeler.txt", "r")) == NULL) {
	      printf("Dosya açma hatasý!");
	      exit(1);}
	      //printf("dosya adi giriniz:\n");
	      //scanf("%s",dosyaAdiOku);
	      
	      while (!feof(fp)){
	    fscanf(fp,"%s ",&dosyaAdi);
         
	  
	  if(strcmp(dosyaAdiOku,dosyaAdi)==0){  //arama yapar
	  	  
	  	p=1;
	  	//printf("Dosya bulundu\n");
   	
	  	  
	
	  	FILE *yazici;
	  	yazici=fopen("yazici.txt","r");{
	  		 while (!feof(yazici)){
	    fscanf(yazici,"%d",&kontrol);
	    
	  		switch(kontrol){
	  			case -1:
	  				{printf("yazicida sorun var.");}
	  				break;
	  			case 0:
				    {printf("yazici kapali.");}
				    break;
				case 1:
					{bekleyen_isler();
					printf("yaziciya gonderildi.");}
					break;
					
	  				
			  }
		  }
	  } 
	      
  }
   	
   }

}


int main()
  
  
{    
 FILE *fp;
	
	char komut[10],aciklama[50],komut_mesaji[25]; 
	int p=0;

  //fp = fopen ("fp.txt", "r");
  
	
	      if ((fp = fopen ("fp.txt", "r")) == NULL) {
	      printf("Dosya açma hatasý!");
	      exit(1);
	    }
	    printf("komut adi girin:\n");
	    scanf("%s",&komutAdiOku);
	      
	    while (!feof(fp)){
	    fscanf(fp,"%s %s %s \n",&komut,&aciklama,&komut_mesaji);
         
	  //printf("%c", fgetc(fp));  //tüm cümle
	  if(strcmp(komutAdiOku,komut)==0){
	  	  
	  	p=1;
	  	printf("    %s    %s   %s\n",komut,aciklama,komut_mesaji);
	  }}
	if(p==0)
	  {printf("Hatali komut!"); return 0;}
	 
	 
	 fclose(fp);
	 
     belgeArama();
     yazici();
    

	 
	 	}
