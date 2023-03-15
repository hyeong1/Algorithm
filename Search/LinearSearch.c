// 순차 탐색 알고리즘
#include <stdio.h>

int LSearch(int ar[], int len, int target);

int main()
{
    int arr[] = {3, 5, 2, 4, 9};
    int idx;

    idx = LSearch(arr, sizeof(arr) / sizeof(int), 4); // target == 4, arr안의 4 인덱스 저장
    if (idx == -1)
        printf("탐색 실패\n");
    else
        printf("타겟 저장 인덱스: %d\n", idx);

    idx = LSearch(arr, sizeof(arr) / sizeof(int), 7); // target == 4, arr안의 7 인덱스 저장
    if (idx == -1)
        printf("탐색 실패\n");
    else
        printf("타겟 저장 인덱스: %d\n", idx);

    return 0;
}

int LSearch(int ar[], int len, int target)
{
    for (int i = 0; i < len; i++)
    {
        if (ar[i] == target)
            return i; // 찾은 요소의 인덱스 값 반환
    }
    return -1;
}