#include<iostream>

void mesaj(char msg){        // msg chard�r dedik ve msg ye cahr girilecek a�aada
	std::cout<<msg<<std::endl; 
}
void mesaj2(int yu){         // yu inttir dedik ve yuya int girilecek a�aada
	std::cout<<yu<<std::endl;
}
void mesaj3(){               // direkt yazd�k     
	std::cout<<"Hello me is dimitry "<<std::endl;
}
int topla(int sayi1,int sayi2){ /* NOT: i� i�e fonksiyon olmaz bunun alt�na fonk olmaaz.*/
	return sayi1+sayi2; // sayi 1 sayi 2 int dendi topla fonk. int tan�mlad�k ki direkt say� g�ndersin 
}
double topla(double sayi3,double sayi4){
	return sayi3+sayi4; // ***** topla fonksiyonunu b�yle yaparak birka� farkl� de�i�ken t�r� i�in atam�� oluruz alt i�lemde toplanacak say�ya g�re kendisi hangisini
// kullanaca��n� bulur**** 
}
void menu(char a[]){ // string girrilecek �ekilde b�rakt�k yaz�yla yazd���m�z� ekrana yazacak
	std::cout<<a<<std::endl; 
	
}
int main(){
	mesaj('A');
	mesaj2(15);
	mesaj3();
	std::cout<<topla(8,4)<<std::endl; //12 yazar sayi1=8, sayi2=4 oldu
	menu("asdadsad");
	std::cout<<topla(5.2,4.5);
	return 0; /* NOT: yukrda iki int l� tan�mlarsan bu sefer hangisi en iyi bilemeyece�i i�in karar veremez ve g�m gitti program yok art�k :) */ 
}

