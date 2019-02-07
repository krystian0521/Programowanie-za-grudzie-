#include <iostream>
#include <stdio.h>
#include <string.h>
#include <cstdlib>

using namespace std;

 // ------------------------zadania numer 1-----------------------

// zadanie 1.1

 void funkcja1(int *tablica, int dlugosc_tablicy) {
 
	 int zmienna;
	 
	 for(int i=0;i<=dlugosc_tablicy;i++) {
	 	
	 	cout << "Podaj liczbê do zapisania w tablicy: ";
	 	cin >> zmienna;
	 	
	 	tablica[i] = zmienna;
	 }
	 
	 cout << "Zadanie 1.1 - ";
	 
	 for(int i=0;i<=dlugosc_tablicy;i++) {
	 	
	 	cout << tablica[i];
	 	
	 }
	 
	 cout << "\n";
 
}






//zadanie 1.2 - sortowanie od pocz¹tku jak i od koñca
 
 int funkcja2(int *tablica, int dlugosc_tablicy) {
 
 cout << "Zadanie 1.2 - ";
 for (int i=0;i<=dlugosc_tablicy;i++) {
 	
 	cout << tablica[i];
 	
 }
 
 cout << "\n";
 cout << "Zadanie 1.2 - ";
 
  for (dlugosc_tablicy;dlugosc_tablicy>=0;dlugosc_tablicy--) {
 	
 	cout << tablica[dlugosc_tablicy];
 	
 	
 }
 
 cout << "\n";
 
}






 // zadanie 1.3 - algorytm sprawdzaj¹cy sortowanie niemalej¹ce
 
 int funkcja3(int *tablica, int dlugosc_tablicy) {
 	
 	int poprawnosc = 1;
 	
 	for(int i=0;i<dlugosc_tablicy;i++){
 		
 		if(tablica[i] < tablica[i+1] ){
 			
 			poprawnosc = 1;
 			
		 } else {
		 	
		 	poprawnosc = 0;
		 	break;
		 	
		 }
 		
	 }
	 
	 if(poprawnosc ==1){
	 	
	 	cout << "Zadanie 1.3 - ";
	 	cout << "Tablica uszeregowana niemalej¹co" << endl;
	 	
	 } else {
	 	
	 	cout << "Zadanie 1.3 - ";
	 	cout << "Tablica uszeregowana malej¹co" << endl;
	 	
	 }
 	
 }
 
 
 
 
 
 
 
 
 
 
 // ------------------------zadania numer 2-----------------------

class klasa2 {
	
	public:
		
		// zadanie 2.1
		
		bool IsSorted(int *tablica, int dlugosc_tablicy) {
			
			bool poprawnosc = true;
		 	
		 	for(int i=0;i<dlugosc_tablicy;i++){
		 		
		 		if(tablica[i] < tablica[i+1] ){
		 			
		 			poprawnosc = true;
		 			
				 } else {
				 	
				 	poprawnosc = false;
				 	break;
				 	
				 }
		 		
			 }
			 
			 if(poprawnosc == true){
			 	
			 	cout << "Zadanie 2.1 - ";
			 	cout << "Tablica uszeregowana niemalej¹co" << endl;
			 	
			 } else {
			 	
			 	cout << "Zadanie 2.1 - ";
			 	cout << "Tablica uszeregowana malej¹co" << endl;
			 	
			 }
		 	
		};
		
	
	
	
	
	
	// zadanie 2.2	
	
	void printBackwards(int *tablica, int dlugosc_tablicy) {
		
		 cout << "Zadanie 2.2 - ";
 
  		for (dlugosc_tablicy;dlugosc_tablicy>=0;dlugosc_tablicy--) {
 	
 			cout << tablica[dlugosc_tablicy];
 		
		 }
 
		 cout << "\n";
		
	}
	
	
	
	
	
	
	// zadanie 2.3
	
	char PrintDots(int *tablica, int dlugosc_tablicy) {
		
		int ilosc_kropek;
		cout << "Zadanie 2.3 - " <<endl;
		
		for(int i=0;i<=dlugosc_tablicy;i++) {
			
			ilosc_kropek = tablica[i];
			
			for(int z=0;z<ilosc_kropek;z++) {				
				cout << ".";	
			}
			
			cout << "\n";
		}
		
	}
	
	
	
	
	
	// zadanie 2.4
		
	int Sum(int *tablica, int dlugosc_tablicy) {
		
		int liczba;
		int suma;
		cout << "Zadanie 2.4 - ";
		
		for(int i=0;i<dlugosc_tablicy;i++) {
			liczba = tablica[i];
			suma = suma + liczba;		
		}
		suma = suma - 2;
		
		cout << suma <<endl;
		
	}
	
	
	
	
	
	
	// Zadanie 2.5
	

	
};




// zadanie 3.1
int getLength(char *tab){
	int i=0;
	while(tab[i]!= '\0'){
		i++;
	}
	return i;
}




// zadanie 3.2 
void Reverse(char *tab){
	int dlugosc = getLength(tab);
	
	for(int i = dlugosc - 1; i >= 0; i--){
		
		cout << tab[i];
		
	}
}




//zadanie 3.3
bool containsDigits(char *tab){
	int dlugosc = getLength(tab);
	
	for(int i = 0; i < dlugosc; i++){
		
		if((int)tab[i] >= 48 && (int)tab[i] <= 57){
			
			return true;
		}
	}
	return false;
}




// zadanie 4.3

bool AreArraysIdentical(int *a1, int s1, int *a2, int s2){
	
	if(s1 == s2){
		
		for(int i = 0; i < s1; i++){
			
			if (a1[i] != a2[i])
			
			return false;
			
		}
		
		return true;
		
	} else {
		return false;
	}
} 






//zadanie 4.4

char *reverseString(char *s){
	int x = getLength(s);
	int j = 0;
	char *wynik;
	wynik = (char *)malloc(x * sizeof(char));
	
	for(int i = x-1; i >= 0; i--){
		
		wynik[j] = s[i];
		j++; 
		
	}
	
	return wynik;
}



int main() {

int tab[4];
int s=4;

funkcja1(tab,s);
 
funkcja2(tab,s);

funkcja3(tab,s);

klasa2 zadania2;
zadania2.IsSorted(tab,s);
zadania2.printBackwards(tab,s);
zadania2.PrintDots(tab,s);
zadania2.Sum(tab,s);


// Zadanie 3.4

	char str[20];
	cout << "Podaj lancuch znakow - ";
	cin >> (str);
	int len=strlen(str);
	

		cout << "dlugosc lancha -  " << getLength(str) << endl;
		

		Reverse(str);
		cout << endl;
		
		if(containsDigits(str)){
			cout << "jest liczba";
		} else {
			cout << "nie ma liczby";
		}
		
		
		
	// zadanie 4.1
	
	{
		cout << endl << "zadanie 4.1" << endl;
		int n;
		cout << "Podaj wymiar tablicy: ";
		cin >> n;
		int *tab;
    	tab = (int *)malloc(n * sizeof(int));
    	for(int i = 0; i < n; i++){
    		cout << "Podaj element " << i+1 << ": ";
    		cin >> tab[i];
		}
	
		klasa2::printBackwards(tab, n);
	
	}
		
		
		
		
		
		
	// zadanie 4.2	
	
	
cout << endl << "zadanie 4.2 - " << endl;
		int n;
		int licznik = 0;
		
		cout << "Podaj wymiar tablicy: ";
		cin >> n;
		
		int *tablica;
		int *tablica2;
    	tablica = (int *)malloc(n * sizeof(int));
    	
    	for(int i = 0; i < n; i++){
    		
    		cout << "Podaj element " << i+1 << ": ";
    		cin >> tablica[i];
    		
		}
		
		for(int i = 0; i < n; i++){
			if(tablica[i] < 0) {
				
				licznik++;
				
			}
		}
		if (licznik > 0) {
			tablica2 = (int *)malloc(licznik * sizeof(int));
			int j = 0;
			for(int i = 0; i < n; i++){
				
				if(tablica[i] < 0) {
						tablica2[j] = tablica[i];
						j++;
					}
					
			}
			cout << "liczby ujemne: ";
			for(int i = 0; i < licznik; i++){
				cout << tablica2[i] << ", ";
			}
			free(tablica2);
		}
		free(tablica);
		
	
	
	
	
	
	// do zadania 4.4
	
	
		cout << "zadanie 4.4 - " << endl;
		char *str;
		str = (char *)malloc(10 * sizeof(char));
		for(int i = 0; i < 10; i++){
			cout << "Podaj element " << i+1 << ": ";
    		cin >> str[i];
		}
		char * result = reverseString(str);
		printf("%s", result);
		free(str);
		free(result);

	
	
	
	
	
	return 0;

 

 
	
}

