#include <stdio.h>

void findMinCoins(int change) {
    int coins[3] = { 500, 100, 10 }; // 거스름돈에 사용될 동전의 종류
    int coinCounts[3] = { 0 }; // 동전의 개수를 저장할 배열 선언 및 초기화

    // 각 동전의 개수를 계산
    for (int i = 0; i < 3; i++) {
        coinCounts[i] = change / coins[i];
        change %= coins[i];
    }

    // 결과 출력
    printf("500원 동전 개수: %d개\n", coinCounts[0]);
    printf("100원 동전 개수: %d개\n", coinCounts[1]);
    printf("10원 동전 개수: %d개\n", coinCounts[2]);
}

int main() {
    int change; // 거스름돈 변수 선언

    // 거스름돈 입력 받기
    printf("거스름돈을 입력하세요: ");
    scanf("%d", &change);

    // 최소 동전 개수 계산 및 출력
    findMinCoins(change);

    return 0;
}