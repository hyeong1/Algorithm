// ���� Ž�� �˰�����
#include <stdio.h>

int LSearch(int ar[], int len, int target);

int main()
{
    int arr[] = {3, 5, 2, 4, 9};
    int idx;

    idx = LSearch(arr, sizeof(arr) / sizeof(int), 4); // target == 4, arr���� 4 �ε��� ����
    if (idx == -1)
        printf("Ž�� ����\n");
    else
        printf("Ÿ�� ���� �ε���: %d\n", idx);

    idx = LSearch(arr, sizeof(arr) / sizeof(int), 7); // target == 4, arr���� 7 �ε��� ����
    if (idx == -1)
        printf("Ž�� ����\n");
    else
        printf("Ÿ�� ���� �ε���: %d\n", idx);

    return 0;
}

int LSearch(int ar[], int len, int target)
{
    for (int i = 0; i < len; i++)
    {
        if (ar[i] == target)
            return i; // ã�� ����� �ε��� �� ��ȯ
    }
    return -1;
}