#include "tennis_game_2.h"
#include <string.h>
#include <stdlib.h>

tennis_game_2_t create_tennis_game_2(const char *player1_name, const char *player2_name) {
    tennis_game_2_t tennis_game;

    strcpy(tennis_game.player1_name, player1_name);
    strcpy(tennis_game.player2_name, player2_name);
    tennis_game.Player1_score = 0;
    tennis_game.Player2_score = 0;

    return tennis_game;
}

void won_point_2(tennis_game_2_t *tennis_game, const char *player_name) {
    if (strcmp(tennis_game->player1_name, player_name) == 0) {
        tennis_game->Player1_score++;
    } else {
        tennis_game->Player2_score++;
    }
}

const char *get_score_2(tennis_game_2_t *tennis_game) {
    int max_size_of_chars_of_score = strlen("Fifteen") + strlen("-All") + 1;
    char *score = (char *) calloc(max_size_of_chars_of_score, sizeof(char));

    if (tennis_game->Player1_score < 4 && tennis_game->Player2_score < 4) {
        if (tennis_game->Player1_score == tennis_game->Player2_score) {
            strcpy(score, score_names(tennis_game->Player1_score));
            strcat(score, "-All");
            return score;
        } else {
            strcpy(score, score_names(tennis_game->Player1_score));
            strcat(score, "-");
            strcat(score, score_names(tennis_game->Player2_score));
        }
        return score;
    }

    if (tennis_game->Player1_score > 3 || tennis_game->Player2_score > 3) {
        if (tennis_game->Player1_score == tennis_game->Player2_score) {
            return "Deuce";
        } else if (tennis_game->Player1_score - 1 == tennis_game->Player2_score) {
            strcpy(score, "Advantage ");
            strcat(score, tennis_game->player1_name);
            return score;
        } else if (tennis_game->Player1_score == tennis_game->Player2_score - 1) {
            strcpy(score, "Advantage ");
            strcat(score, tennis_game->player2_name);
            return score;
        } else if (tennis_game->Player1_score - 2 >= tennis_game->Player2_score) {
            strcpy(score, "Win for ");
            strcat(score, tennis_game->player1_name);
            return score;
        } else if (tennis_game->Player1_score <= tennis_game->Player2_score - 2) {
            strcpy(score, "Win for ");
            strcat(score, tennis_game->player2_name);
            return score;
        }
        return score;
    }
}

char *score_names(int player_score) {
    Score score = player_score;
    switch (score) {
        case LOVE :
            return "Love";
        case FIFTEEN :
            return "Fifteen";
        case THIRTY :
            return "Thirty";
        case FOURTY :
            return "Forty";
    }
}