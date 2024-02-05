#include <stdio.h>

float average(int length, int array[]);

const int N = 3;

int main(void) {
    // int score1 = 72;
    // int score2 = 73;
    // int score3 = 33;

    // printf("Average: %f\n", (score1 + score2 + score3) / 3.0);


    int scores[N];

    for (int i = 0; i < N; i++) {
        scores[i] = printf("Score: ");
        scanf("%i", &scores);
    }

    printf("Average: %f\n", average(N, scores));

}

float average(int length, int array[]) {
    int sum = 0;
    for (int i = 0; i < length; i++) {
        sum += array[i];
    }

    return sum / (float) length;
}