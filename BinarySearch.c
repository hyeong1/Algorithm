// 이진 탐색 알고리즘
#include <stdio.h>

int BSearch(int arr[], int len, int target);

int main() {
    int arr[] = {1, 3, 5, 7, 9};
    int idx;

    idx = BSearch(arr, sizeof(arr) / sizeof(int), 7); // target == 4, arr안의 4 인덱스 저장
    if (idx == -1)
        printf("탐색 실패\n");
    else
        printf("타겟 저장 인덱스: %d\n", idx);

    idx = BSearch(arr, sizeof(arr) / sizeof(int), 4); // target == 4, arr안의 4 인덱스 저장
    if (idx == -1)
        printf("탐색 실패\n");
    else
        printf("타겟 저장 인덱스: %d\n", idx);

    return 0;
}

int BSearch(int arr[], int len, int target) {
    int first = 0;      // 탐색 대상의 시작 인덱스
    int last = len - 1; // 탐색 대상의 마지막 인덱스
    int mid;            // 탐색 대상의 중간 인덱스

    while (first <= last) {
        mid = (first + last) / 2;

        if (target == arr[mid])
            return mid;
        else { // target이 아니면 탐색 대상을 반으로 줄임
            if (target < arr[mid])
                last = mid - 1;
            else
                first = mid + 1;
        }
    }
    return -1;
}