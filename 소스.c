#include <stdio.h>
#define WIDTH 21
typedef struct {
    int playerX, score, penalty, running;
} Game;
void initGame(Game* game)
{
    if (game == NULL) return;
    game->playerX = WIDTH / 2;
    game->score = 0;
    game->penalty = 0;
    game->running = 1;
}
int main(void)
{
    Game game = { 20, 0, 5, 0 };
    initGame(&game);
    printf("%d %d %d %d\n", game.playerX, game.score, game.penalty, game.running);
    return 0;
}