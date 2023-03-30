#include <stdio.h>

void findMinCoins(int change) {
    int coins[3] = { 500, 100, 10 }; // �Ž������� ���� ������ ����
    int coinCounts[3] = { 0 }; // ������ ������ ������ �迭 ���� �� �ʱ�ȭ

    // �� ������ ������ ���
    for (int i = 0; i < 3; i++) {
        coinCounts[i] = change / coins[i];
        change %= coins[i];
    }

    // ��� ���
    printf("500�� ���� ����: %d��\n", coinCounts[0]);
    printf("100�� ���� ����: %d��\n", coinCounts[1]);
    printf("10�� ���� ����: %d��\n", coinCounts[2]);
}

int main() {
    int change; // �Ž����� ���� ����

    // �Ž����� �Է� �ޱ�
    printf("�Ž������� �Է��ϼ���: ");
    scanf("%d", &change);

    // �ּ� ���� ���� ��� �� ���
    findMinCoins(change);

    return 0;
}