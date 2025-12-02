#ifndef SMM_OBJECT_H
#define SMM_OBJECT_H

#define MAX_NAME_LEN 50

#define NODE_TYPE_LECTURE 0
#define NODE_TYPE_RESTAURANT 1
#define NODE_TYPE_LAB 2
#define NODE_TYPE_HOME 3
#define NODE_TYPE_EXPERIMENT 4
#define NODE_TYPE_BUFF_CHANCE 5
#define NODE_TYPE_FESTIVAL 6

typedef struct Node {
    int id;
    int type;
    char name[MAX_NAME_LEN];
    int credit;
    int energy;
    struct Node* next;
} Node;

typedef struct Player {
    char name[MAX_NAME_LEN];
    int position;
    int energy;
    int credit;
    int isExperimenting;
} Player;

Node* createNode(int id, int type, const char* name, int credit, int energy);
Player* createPlayer(const char* name, int startEnergy);
void movePlayer(Player* player, int steps, Node* board);
void freeBoard(Node* head);

#endif

