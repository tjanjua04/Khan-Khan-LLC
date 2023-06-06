#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>

using namespace std;

const string countries[5][10] = {
    {"United States of America" , "England", "Canada", "Australia", "New Zealand", "Ireland", "Denmark", "South Africa", "Singapore",  "Netherlands"},
    
    {"Spain", "Mexico", "Puerto Rico", "Guatemala", "El Salvador", "Columbia", "Cuba", "Belize", "Costa Rica", "Peru"},
    
    {"Pakistan", "India", "Bangladesh", "Nepal", "Fiji", "Trinidad and Tobago", "Mauritius", "Suriname", "Guyana", "Uganda"},
    
    {"Russia", "Armenia", "Ukranie", "Latvia", "Kazakhstan", "Belarus", "Lithuania", "Uzbekistan", "Tajikistan", "Estonia"},
    
    {"Saudi Arabia", "Egypt", "Iraq", "Iran", "Palenstine", "Syria", "Jordan", "Yemen", "Lebanon", "Morocco"} 
};

void getCountry(int languageChoice);

int main(){
  // integers for the input values
  int languageChoice;
	int specialtyChoice;

  // asking user their prefered language
	cout << "Which language are you fluent in?" << endl;
	cout << "1. English\n";
	cout << "2. Spanish\n";
	cout << "3. Urdu\n";
	cout << "4. Russian\n";
	cout << "5. Arabic\n";
	cin >> languageChoice;

  // asking user their specialty
  //common worldwide specializations
	cout << "\nWhat are you specializing in?" << endl;
	cout << "1. Internal Medicine\n";
	cout << "2. Neurology\n";
	cout << "3. Pediatrics\n";
	cout << "4. Psychiatry\n";
	cout << "5. Toxicology\n";
	cin >> specialtyChoice;

  // switch statements
  switch(languageChoice)
  {
    // English
    case 1: 
    getCountry(languageChoice);
      break;

    // Spanish
    case 2:
    getCountry(languageChoice);
      break;

    // Urdu
    case 3:
    getCountry(languageChoice);
      break;

    // Russian
    case 4:
    getCountry(languageChoice);
      break;

    // Arabic
    case 5:
    getCountry(languageChoice);
      break;  

    default:
      cout << "\nYou have chosen an invalid choice\n";
         
  }

  // sample size
  cout << "\nThe sample space is the amount of languages multiplied by the amount of countries. 5 * 10 = 50";  
  
  return 0;
}

void getCountry(int languageChoice)
{

  double numOfLanguages = 5.0;
  double numOfCountries = 10.0;
  double probability = numOfLanguages * numOfCountries;
  double prob = (1 / probability) * 100;
	srand(time(0));
	int country = rand() % 10;
  
  cout << "\nYour chosen country is " << countries[languageChoice-1][country] << endl;
  cout << "\nThe probability matching to " << countries[languageChoice-1][country] << " with your language fluency is 1/" << probability << " or "<< prob << "%" << endl;
}
