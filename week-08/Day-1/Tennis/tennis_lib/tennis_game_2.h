#ifndef TENNIS_GAME_TENNIS_GAME_2_H
#define TENNIS_GAME_TENNIS_GAME_2_H

typedef enum {
    LOVE,
    FIFTEEN,
    THIRTY,
    FOURTY,
} Score;

typedef struct {
    int Player1_score;
    int Player2_score;
    char player1_name[8];
    char player2_name[8];
} tennis_game_2_t;

tennis_game_2_t create_tennis_game_2(const char player1_name[], const char player2_name[]);
void won_point_2(tennis_game_2_t *tennis_game, const char player_name[]);
const char *get_score_2(tennis_game_2_t *tennis_game);
char *score_names(int player_score);

#endif //TENNIS_GAME_TENNIS_GAME_2_H
