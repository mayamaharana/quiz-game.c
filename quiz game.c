

#include <stdio.h>

int main() {
    int score = 0;
    int answer;

    printf("Welcome to the Quiz Game!\n\n");
    printf("Question 1: What is the capital of France?\n");
    printf("1. Madrid\n2. Berlin\n3. Paris\n4. Rome\n");
    printf("Enter your answer (1-4): ");
    scanf("%d", &answer);
    if (answer == 3) {
        printf("Correct!\n\n");
        score++;
    } else {
        printf("Wrong! The correct answer is 3. Paris\n\n");
    }
    printf("Question 2: Which planet is known as the Red Planet?\n");
    printf("1. Earth\n2. Mars\n3. Jupiter\n4. Venus\n");
    printf("Enter your answer (1-4): ");
    scanf("%d", &answer);
    if (answer == 2) {
        printf("Correct!\n\n");
        score++;
    } else {
        printf("Wrong! The correct answer is 2. Mars\n\n");
    }
    printf("Question 3: How many continents are there on Earth?\n");
    printf("1. Five\n2. Six\n3. Seven\n4. Eight\n");
    printf("Enter your answer (1-4): ");
    scanf("%d", &answer);
    if (answer == 3) {
        printf("Correct!\n\n");
        score++;
    } else {
        printf("Wrong! The correct answer is 3. Seven\n\n");
    }
    printf("Your final score is: %d out of 3\n", score);

    if (score == 3) {
        printf("Excellent! You got all the answers right!\n");
    } else if (score == 2) {
        printf("Great job! You got two correct answers.\n");
    } else if (score == 1) {
        printf("Good try! You got one correct answer.\n");
    } else {
        printf("Better luck next time!\n");
    }

    return 0;
}
