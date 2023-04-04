
#include <iostream>
#include "clsString.h"

using namespace std;


int main()
{
	clsString String1;
	clsString String2("Mohammed");

	String1.Value = "Ali Ahmed";

	cout <<"String1= " << String1.Value << endl;
	cout <<"String2= " << String2.Value << endl;

	cout << "Number of Words = " << String1.CountWords() << endl;

	cout << "Number of Words = " << String1.CountWords("Fadi Ahmad Rateb Omar") << endl;

	cout<< "Number of Words = " << clsString::CountWords("Anas Wajeh Naamneh");

	vector <string> S1 = String1.SplitString();

	for (string & S : S1) {
		cout << "Word After Split: " << S << endl;
	}

	vector <string> S2 = String1.SplitString("anas#//#naamneh","#//#");

	for (string& S : S2) {
		cout << "Word After Split: " << S << endl;
	}

	       vector <string> S3 = clsString::SplitString("Omar$$Ameen" , "$$");


		   for (string& S : S3) {
			   cout << "Word After Split: " << S << endl;
		   }


	cout << "String After Upper All Cases: " << String1.UpperAllString() << endl;
	cout << "String After Upper All Cases: " << String1.UpperAllString("mohammed ahmad") << endl;
	cout << "String After Upper All Cases: " << clsString::UpperAllString("sami yousef") << endl;

	String1.Value = "FADI RATEB";

	cout << "String After Lower All Cases: " << String1.LowerAllString() << endl;
	cout << "String After Lower All Cases: " << String1.LowerAllString("MOHAMMED AHMED") << endl;
	cout << "String After Lower All Cases: " << clsString::LowerAllString("MOUSA ALI") << endl;

	String2.Value = "I am Programmer";

	cout << "String After Reverse: " << String2.ReverseString() << endl;
	cout << "String After Reverse: " << String2.ReverseString("C++ is a great language") << endl;
	cout << "String After Reverse: " << clsString::ReverseString("anas naamneh") << endl;

	String2.Value = "ahmad&&$%yousef^^mohammed***Rami@@Khaled";
	
	
	cout << "String After Remove Punctuation: " << String2.RemovePunctuation() << endl;
	cout << "String After Remove Punctuation: " << String2.RemovePunctuation("Rateb&&##Laith$$") << endl;
	cout << "String After Remove Punctuation: " << clsString::RemovePunctuation("@@Anas@()@") << endl;

	String2.Value = "i love programming";

	cout << "Upper First Character: " << String2.PrintUpperFirstLetterOfEachWord() << endl;
	cout << "Upper First Character: " << String2.PrintUpperFirstLetterOfEachWord("welcome to my project") << endl;
	cout << "Upper First Character: " << clsString::PrintUpperFirstLetterOfEachWord("welcome to my project") << endl;


	cout << "Lower First Character: " << String2.PrintLowerFirstLetterOfEachWord() << endl;
	cout << "Lower First Character: " << String2.PrintLowerFirstLetterOfEachWord("WELCOME") << endl;
	cout << "Lower First Character: " << clsString::PrintLowerFirstLetterOfEachWord("PRO") << endl;


	cout << "Print Each Word: " << endl;
	String2.PrintEachWordInString();

	cout << "Print Each Word: " << endl;
	String2.PrintEachWordInString("I am from Jordan");

	cout << "Print Each Word: " << endl;
	clsString::PrintEachWordInString("how are you");


	cout << "Vowels in string" << endl;
    String2.PrintAllVowelsInString();
	cout << endl;

	cout << "Vowels in string" << endl;
	String2.PrintAllVowelsInString("how are you");
	cout << endl;
	cout << "Vowels in string" << endl;
	clsString::PrintAllVowelsInString("hi");
	cout << endl;

	String2.Value = "Anas";

	cout << "Count Capital Letters: " << String2.CountCapitalLetters() << endl;
	cout << "Count Capital Letters: " << String2.CountCapitalLetters("HELLO") << endl;
	cout << "Count Capital Letters: " << clsString::CountCapitalLetters("HI") << endl;



	cout << "Count Small Letters: " << String2.CountSmallLetters() << endl;
	cout << "Count Small Letters: " << String2.CountSmallLetters("HELLO") << endl;
	cout << "Count Small Letters: " << clsString::CountSmallLetters("hello") << endl;


	system("pause>0");
	return 0;
}

