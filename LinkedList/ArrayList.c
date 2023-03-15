// ArrayList 헤더파일에 선언된 함수들 정의
#include <stdio.h>
#include "ArrayList.h"

// 초기화
void ListInit(List *plist)
{
    (plist->numOfData) = 0;    // 리스트에 저장된 데이터의 수는 0
    (plist->curPosition) = -1; // 현재 아무 위치도 가리키지 않음
}

// 데이터 삽입
void LInsert(List *plist, LData data)
{
    if (plist->numOfData >= LIST_LEN) // 저장된 데이터 수가 매크로로 지정한 리스트 길이보다 크거나 같으면
    {
        printf("저장이 불가능합니다.");
        return;
    }

    plist->arr[plist->numOfData] = data; // 구조체 안에 있는 arr배열에 데이터 저장
    (plist->numOfData)++;                // 저장된 데이터의 개수 증가
}

// 첫 번째 데이터 조회
int LFirst(List *plist, LData *pdata)
{
    if (plist->numOfData == 0) // 저장된 데이터가 없으면
        return FALSE;

    (plist->curPosition) = 0; // 참조 위치 초기화(첫 번쨰 데이터 참조를 의미)
    *pdata = plist->arr[0];   // pdata가 가리키는 공간에 배열의 값 저장
    return TRUE;
}

// 두 번째 이후 데이터 조회
int LNext(List *plist, LData *pdata)
{
    if (plist->curPosition >= (plist->numOfData) - 1) // 더 이상 참조할 데이터가 없는 경우(line8 참고)
        return FALSE;

    (plist->curPosition)++;
    *pdata = plist->arr[plist->curPosition]; // curPosition이 가리키는 다음 데이터 저장
    return TRUE;
}

// 데이터 삭제
LData LRemove(List *plist)
{
    int rpos = plist->curPosition;  // 데이터 참조 위치
    int num = plist->numOfData;     // 배열에 저장된 데이터 개수
    LData rdata = plist->arr[rpos]; // 삭제할 데이터 임시 저장

    // 삭제를 위한 데이터 이동
    for (int i = rpos; i < num - 1; i++) // 현재 참조 위치부터 배열 끝까지
        plist->arr[i] = plist->arr[i + 1];

    (plist->numOfData)--;   // 데이터 개수 감소
    (plist->curPosition)--; // 참조 위치 하나 되돌림
    return rdata;           // 삭제된 데이터 반환
}

int LCount(List *plist)
{
    return plist->numOfData;
}