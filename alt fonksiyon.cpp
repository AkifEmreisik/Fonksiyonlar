#include<iostream>

void mesaj(char msg){        // msg chardýr dedik ve msg ye cahr girilecek aþaada
	std::cout<<msg<<std::endl; 
}
void mesaj2(int yu){         // yu inttir dedik ve yuya int girilecek aþaada
	std::cout<<yu<<std::endl;
}
void mesaj3(){               // direkt yazdýk     
	std::cout<<"Hello me is dimitry "<<std::endl;
}
int topla(int sayi1,int sayi2){ /* NOT: iç içe fonksiyon olmaz bunun altýna fonk olmaaz.*/
	return sayi1+sayi2; // sayi 1 sayi 2 int dendi topla fonk. int tanýmladýk ki direkt sayý göndersin 
}
double topla(double sayi3,double sayi4){
	return sayi3+sayi4; // ***** topla fonksiyonunu böyle yaparak birkaç farklý deðiþken türü için atamýþ oluruz alt iþlemde toplanacak sayýya göre kendisi hangisini
// kullanacaðýný bulur**** 
}
void menu(char a[]){ // string girrilecek þekilde býraktýk yazýyla yazdýðýmýzý ekrana yazacak
	std::cout<<a<<std::endl; 
	
}
int main(){
	mesaj('A');
	mesaj2(15);
	mesaj3();
	std::cout<<topla(8,4)<<std::endl; //12 yazar sayi1=8, sayi2=4 oldu
	menu("asdadsad");
	std::cout<<topla(5.2,4.5);
	return 0; /* NOT: yukrda iki int lý tanýmlarsan bu sefer hangisi en iyi bilemeyeceði için karar veremez ve güm gitti program yok artýk :) */ 
}

