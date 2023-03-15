// 리스트 데이터 구조, 초기화, 삽입, 삭제, 조회 선언
#ifndef __ARRAY_LIST_H__
#define __ARRAY_LIST_H__

#define TRUE 1
#define FALSE 0

#define LIST_LEN 100
typedef int LData;

typedef struct __ArrayList
{
    LData arr[LIST_LEN]; // 리스트의 저장소 배열
    int numOfData;       // 저장된 데이터의 개수
    int curPosition;     // 데이터 참조 위치 기록
} ArrayList;

typedef ArrayList List;

void ListInit(List* plist); // 리스트 초기화 함수
void LInsert(List* plist, LData data); // 리스트에 데이터 저장하는 함수

int LFirst(List* plist, LData* pdata); // 첫 번째 데이터 조회 함수
int LNext(List* plist, LData* pdata); // 두 번째 이후 데이터 조회 함수

LData LRemove(List* plist); // 조회한 데이터 삭제 함수
int LCount(List* plist); // 저장된 데이터의 개수 반환 함수

#endif