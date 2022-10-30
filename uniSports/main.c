#include <stdio.h>
#include "stdlib.h"
#include "string.h"

/* h - home
 * a - away
 * w - win
 * d - draw
 * l - loss
 */

typedef struct {
    char team;
    int h_w;
    int h_d;
    int h_l;
    int a_w;
    int a_d;
    int a_l;
    int GF; // goals for
    int GA; // goals against
    int GD; // goals difference
    int pts; // points
} Scores;



int main() {

    char home[20];
    int home_score;
    char away[20];
    int away_score;

    Scores qmul;

    qmul.h_w = 0;
    qmul.h_d = 0;
    qmul.h_l = 0;
    qmul.a_w = 0;
    qmul.a_d = 0;
    qmul.a_l = 0;
    qmul.GF = 0; // goals for
    qmul.GA = 0; // goals against
    qmul.GD = 0; // goals difference
    qmul.pts = 0; // points

    char end;


    while (end != EOF){
        scanf("%s %d %s %d", &home, &home_score, &away, &away_score);

        if (strcmp("QMUL", home) == 0){
            if (home_score > away_score){
                qmul.h_w ++;
            }
            else if (away_score > home_score){
                qmul.h_l ++;
            }
            else{
                qmul.h_d ++;
            }
            qmul.GF = qmul.GF + home_score;
            qmul.GA = qmul.GA + away_score;
        }
        else if(strcmp("QMUL", away) == 0){
            if (away_score > home_score){
                qmul.a_w ++;
            }
            else if (home_score > away_score){
                qmul.a_l ++;
            }
            else {
                qmul.a_d ++;
            }
            qmul.GF = qmul.GF + away_score;
            qmul.GA = qmul.GA + home_score;
        }

        end = getchar();
    }

    qmul.GD = qmul.GF - qmul.GA;

    qmul.pts = (qmul.h_w+qmul.a_w)*3 + (qmul.h_d+qmul.a_d);
    // wins 3 points, draws are 1 point and loss is 0 points

    printf("     Home   Away\n");
    printf("     W D L  W D L GF GA GD Pts\n");
    printf("QMUL %d %d %d  %d %d %d  %d %d %d   %d\n", qmul.h_w, qmul.h_d, qmul.h_l, qmul.a_w, qmul.a_d,qmul.a_l, qmul.GF, qmul.GA, qmul.GD, qmul.pts);



    return 0;
}
