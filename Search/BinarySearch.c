// ���� Ž�� �˰�����
#include <stdio.h>

int BSearch(int arr[], int len, int target);

int main() {
    int arr[] = {1, 3, 5, 7, 9};
    int idx;

    idx = BSearch(arr, sizeof(arr) / sizeof(int), 7); // target == 4, arr���� 4 �ε��� ����
    if (idx == -1)
        printf("Ž�� ����\n");
    else
        printf("Ÿ�� ���� �ε���: %d\n", idx);

    idx = BSearch(arr, sizeof(arr) / sizeof(int), 4); // target == 4, arr���� 4 �ε��� ����
    if (idx == -1)
        printf("Ž�� ����\n");
    else
        printf("Ÿ�� ���� �ε���: %d\n", idx);

    return 0;
}

int BSearch(int arr[], int len, int target) {
    int first = 0;      // Ž�� ����� ���� �ε���
    int last = len - 1; // Ž�� ����� ������ �ε���
    int mid;            // Ž�� ����� �߰� �ε���

    while (first <= last) {
        mid = (first + last) / 2;

        if (target == arr[mid])
            return mid;
        else { // target�� �ƴϸ� Ž�� ����� ������ ����
            if (target < arr[mid])
                last = mid - 1;
            else
                first = mid + 1;
        }
    }
    return -1;
}