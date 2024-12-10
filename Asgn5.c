//HANGMAN GAME

#include <stdio.h> 
#include <string.h> 
#include <ctype.h> 
 
int main() 
{ 
    char word[] = "programming";  
    char guessedWord[20]; 
    int Length = strlen(word); 
    int attempts = 3; 
    int correctGuesses = 0; 
    char guess; 
 
    for (int i = 0; i < Length; i++) 
    { 
        guessedWord[i] = '_'; 
    } 
    guessedWord[Length] = '\0'; 
 
    printf("Welcome to the Hangman Game!\n"); 
    printf("You have %d attempts to guess the word.\n", attempts); 
 
    while (attempts > 0 && correctGuesses < Length) { 
        printf("Current word: %s\n", guessedWord); 
        printf("Enter your guess: "); 
        scanf(" %c", &guess); 
        guess = tolower(guess); 
 
        int found = 0; 
        for (int i = 0; i < Length; i++) { 
            if (word[i] == guess && guessedWord[i] == '_') { 
                guessedWord[i] = guess; 
                correctGuesses++; 
                found = 1; 
            } 
        } 
 
        if (!found) 
        { 
            attempts--; 
            printf("Wrong guess! Attempts remaining: %d\n", attempts); 
        } 
        else 
        { 
            printf("Good guess!\n"); 
        } 
    } 
 
    if (correctGuesses == Length) 
    { 
        printf("Congratulations! You guessed the word: %s\n", word); 
        printf("The Man survives!\n"); 
    } 
    else 
    { 
        printf("You ran out of attempts! The word was: %s\n", word); 
        printf("The Man is hanged!\n"); 
    } 
 
    return 0; 
}