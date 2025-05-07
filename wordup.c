//Walter Meneses
//Due Date: 5/6/2025
//Project 10

#include <stdio.h>
#define INPUT "mystery.txt"
#define ROW 10
#define COLUMN 10

void OpenFile(FILE* fp1);
int CopyArray(FILE* fp1, char word[][COLUMN]);
void CountLetters(char guess[][COLUMN]);
void StoreGuesses(char StoreGuess[][COLUMN], char guess[][COLUMN]);
void CorrectGuess(int size, char StoreGuess[][COLUMN], char word[][COLUMN], char guess[][COLUMN]);

int main(){
	FILE* fp1;
	int size; 
	char word[ROW][COLUMN], guess[ROW][COLUMN], StoreGuess[ROW][COLUMN];
	
	OpenFile(fp1);
	size = CopyArray(fp1, word);
	CountLetters(guess);
	StoreGuesses(StoreGuess, guess);
	CorrectGuess(size, StoreGuess, word, guess);
	
return 0;
}

void OpenFile(FILE* fp1){
	FILE* fp1;
	fp1 = fopen(INPUT, "r");
	if(fp1 == NULL){
		printf("Could not open.");
		}
}

int CopyArray(FILE* fp1, char word[][COLUMN]){
	int size = 0;
	while(fscanf(fp1,"%s", word[size])){
		size++;
		}
	fclose(fp1);
	return size;
}

void CountLetters(char guess[][COLUMN]){
	for(int i = 0; i < 5; i++){
		int attempt = i + 1;
		printf("GUESS %d! Enter your guess: ", attempt);
		scanf("%s", guess);
		printf("===========================");
	
		for(int i = 0; guess[i] != '0'; i++){
			if(i != 5){
				printf("Invalid. Enter a five letter word.\n");
				}
			}
	}
}

void StoreGuesses(char StoreGuess[][COLUMN], char guess[][COLUMN]){
		for(int i = 0; i < size; i++){
			StoreGuess[attempt][i] = guess[i];
			}
}

void CorrectGuess(int size, char StoreGuess[][COLUMN], char word[][COLUMN], char guess[][COLUMN]){
	for(int i = 0; i < size; i++){
			for(int j = 0; j < size; j++){
				printf("%s", guess[i]);
				if(guess[i] == word[i]){
					printf("%c", StoreGues[attempt][i] - 32);
					}
				else if(guess[i] == word[size]){
					printf("%c", StoreGuess[attempt][i]);
					printf("^");
					}
				else{
					prinf("%s", guess[i]);
					}
				}
			}
}










