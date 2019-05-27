#include "tennis_game_1.h"
#include <string.h>
#include <stdlib.h>

tennis_game_1_t create_tennis_game_1(const char *player1_name, const char *player2_name)
{
    tennis_game_1_t tennis_game;

    tennis_game.player1_name = player1_name;
    tennis_game.player2_name = player2_name;
    tennis_game.player1_score = 0;
    tennis_game.player2_score = 0;

    return tennis_game;
}

void won_point_1(tennis_game_1_t *tennis_game, const char *player_name)
{
    if (player_name == tennis_game->player1_name) {
        tennis_game->player1_score += 1;
    } else {
        tennis_game->player2_score += 1;
    }
}

char *get_score_1(tennis_game_1_t *tennis_game)
{
    int max_size_of_chars_of_score = 12;
    char *score = (char *)calloc(max_size_of_chars_of_score, sizeof(char));
    int temp_score = 0;
    if (tennis_game->player1_score == tennis_game->player2_score) {
        switch (tennis_game->player1_score) {
            case 0:
                strcat(score, "Love-All");
                break;
            case 1:
                strcat(score, "Fifteen-All");
                break;
            case 2:
                strcat(score, "Thirty-All");
                break;
            case 3:
                strcat(score, "Forty-All");
                break;
            default:
                strcat(score, "Deuce");
                break;
        }
    } else if (tennis_game->player1_score >= 4 || tennis_game->player2_score >= 4) {
        int size_of_name1 = strlen(tennis_game->player1_name);
        int size_of_name2 = strlen(tennis_game->player2_name);
        int score_difference = tennis_game->player1_score - tennis_game->player2_score;
        if (score_difference == 1) {
            strcat(score, "Advantage ");
            score = (char *)realloc(score, sizeof(char) * (strlen(score) + size_of_name1 + 1));
            strcat(score, tennis_game->player1_name);
        } else if (score_difference == -1) {
            strcat(score, "Advantage ");
            score = (char *)realloc(score, sizeof(char) * (strlen(score) + size_of_name2 + 1));
            strcat(score, tennis_game->player2_name);
        } else if (score_difference >= 2) {
            strcat(score, "Win for ");
            score = (char *)realloc(score, sizeof(char) * (strlen(score) + size_of_name1 + 1));
            strcat(score, tennis_game->player1_name);
        } else {
            strcat(score, "Win for ");
            score = (char *)realloc(score, sizeof(char) * (strlen(score) + size_of_name2 + 1));
            strcat(score, tennis_game->player2_name);
        }
    } else {
        int length_of_chars_maximum = strlen("Fifteen") + strlen("Thirty") + strlen("-") + 1;
        score = (char *)realloc(score, sizeof(char) * length_of_chars_maximum);
        for (int i = 0; i < 2; i++) {
            if (i == 0) {
                temp_score = tennis_game->player1_score;
            } else {
                strcat(score, "-");
                temp_score = tennis_game->player2_score;
            }
            switch (temp_score) {
                case 0:
                    strcat(score, "Love");
                    break;
                case 1:
                    strcat(score, "Fifteen");
                    break;
                case 2:
                    strcat(score, "Thirty");
                    break;
                case 3:
                    strcat(score, "Forty");
                    break;
            }
        }
    }
    return score;
}
