#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "smm_object.h"

#define GRADUATE_CREDIT 30
#define MAX_PLAYERS 4

Node* boardHead = NULL;
Player* players[MAX_PLAYERS];
int playerCount = 0;

void createBoard() {
    boardHead = createNode(0, NODE_TYPE_HOME, "집", 0, 10);
    Node* n1 = createNode(1, NODE_TYPE_LECTURE, "전공수업", 3, 5);
    Node* n2 = createNode(2, NODE_TYPE_RESTAURANT, "식당", 0, 10);
    Node* n3 = createNode(3, NODE_TYPE_LAB, "실험실", 0, 8);
    Node* n4 = createNode(4, NODE_TYPE_LECTURE, "전공수업2", 4, 6);

    boardHead->next = n1;
    n1->next = n2;
    n2->next = n3;
    n3->next = n4;
    n4->next = boardHead;
}

void inputPlayers() {
    printf("플레이어 수 입력 (1~4): ");
    scanf("%d", &playerCount);
    if (playerCount < 1 || playerCount > MAX_PLAYERS) {
        printf("잘못된 플레이어 수입니다.\n");
        exit(1);
    }

   int i;
for (i=0; i<playerCount; i++) {
    char pname[50];
    printf("플레이어 %d 이름 입력: ", i+1);  
    scanf("%s", pname);                       
  
}

}
    
