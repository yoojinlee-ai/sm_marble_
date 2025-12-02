#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "smm_object.h"

Node* createNode(int id, int type, const char* name, int credit, int energy) {
    Node* node = (Node*)malloc(sizeof(Node));
    if (!node) return NULL;
    node->id = id;
    node->type = type;
    strncpy(node->name, name, MAX_NAME_LEN-1);
    node->name[MAX_NAME_LEN-1] = '\0';
    node->credit = credit;
    node->energy = energy;
    node->next = NULL;
    return node;
}

Player* createPlayer(const char* name, int startEnergy) {
    Player* p = (Player*)malloc(sizeof(Player));
    if (!p) return NULL;
    strncpy(p->name, name, MAX_NAME_LEN-1);
    p->name[MAX_NAME_LEN-1] = '\0';
    p->position = 0; // 집 노드 시작
    p->energy = startEnergy;
    p->credit = 0;
    p->isExperimenting = 0;
    return p;
}

void movePlayer(Player* player, int steps, Node* board) {
    Node* current = board;
    while (current && current->id != player->position) {
        current = current->next;
    }
    int i;
    for (i=0; i<steps; i++) {
        if (current->next)
            current = current->next;
        else
            current = board; // 원형 순환
    }
    player->position = current->id;
}

void freeBoard(Node* head) {
    Node* tmp;
    while (head) {
        tmp = head;
        head = head->next;
        free


