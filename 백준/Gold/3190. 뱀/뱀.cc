#include <iostream>
#include <queue>
using namespace std;

// 열거문으로 방향 지정
enum Direction { RIGHT, DOWN, LEFT, UP };

// 보드의 X, Y좌표를 담은 구조체
// Y는 행, X는 열임
typedef struct PosInfo {
    int posY;
    int posX;
}PosInfo;

// 방향 전환 관련 구조체
typedef struct SnakeInfo {
    int timePassed;
    char LR;
}SnakeInfo;

// 보드 초기화 함수 & 사과 위치 지정
bool* SetGame(int& boardSize) {
    PosInfo pos;
    boardSize = 0;
    cin >> boardSize;
    int appleCount = 0;
    pos.posX = 0;
    pos.posY = 0;

    // 0 1 2 3 4 5 | 6 7 8 9 10 11 <- 0행 1열 2열, 1행 1열 2열....
    bool* board = new bool[boardSize * boardSize]();
    cin >> appleCount;
    for (int i = 0; i < appleCount; i++) {
        cin >> pos.posY >> pos.posX;
        // 입력받는 건 1~6이지만 인덱스는 0~5이기 때문에 -1해줌
        board[boardSize * (pos.posY - 1) + (pos.posX - 1)] = true;
    }
    return board;
}

// 뱀의 몸통 위치를 지정할 배열 생성
bool* SetSnakeBody(int boardSize) {
    // 0 1 2 3 4 5 | 6 7 8 9 10 11 <- 0행 1열 2열, 1행 1열 2열....
    bool* board = new bool[boardSize * boardSize]();
    return board;
}

// 방향 전환 입력 함수
SnakeInfo* SetSnake() {
    int snakeDirCount = 0;
    cin >> snakeDirCount; // 뱀의 방향 전환 횟수 입력
    SnakeInfo* snakeInfoArr = new SnakeInfo[snakeDirCount];
    for (int i = 0; i < snakeDirCount; i++) {
        cin >> snakeInfoArr[i].timePassed >> snakeInfoArr[i].LR;

    }
    return snakeInfoArr;
}

// 메인함수
int main() {
    int index = 0;
    int snakeIndex = 0;
    int dirSeq = 0;
    int currentTime = 0;

    int boardSize;
    bool* boardPos = SetGame(boardSize); // boardPos에 보드의 크기, 사과의 정보가 모두 담겨있음
    bool* snakeBody = SetSnakeBody(boardSize);
    bool gameOver = true;

    SnakeInfo* snakeInfoArr = SetSnake(); // 동적 배열을 포인터 변수로 받음
    PosInfo start = { 0, 0 };
    PosInfo tail = { 0, 0 };
    queue<PosInfo> snakeLength;

    int coord = RIGHT;
    Direction coordArr[] = { RIGHT, DOWN, LEFT, UP };

    snakeLength.push(start);

    // 뱀의 이동(사과가 없을 때): 꼬리(front 가장 먼저 들어왔던 값)를 POP하고 PUSH함
    // 뱀의 이동(사과가 있을 때): 꼬리 제거 X, PUSH함
    while (gameOver) {
        // 검사가 끝났다면 X초 뒤에 방향을 변환
        if (currentTime == snakeInfoArr[index].timePassed) {
            if (snakeInfoArr[index].LR == 'D') {
                dirSeq = (dirSeq + 1) % 4;
                coord = coordArr[dirSeq];
            }
            else if (snakeInfoArr[index].LR == 'L') {
                dirSeq = (dirSeq - 1 + 4) % 4;
                coord = coordArr[dirSeq];
            }
            index++;
        }

        switch (coord)
        {
        case RIGHT:
            // 뱀이 자기 몸에 박았을 때 종료
            if (snakeBody[boardSize * (start.posY) + (start.posX + 1)]) {
                gameOver = false;
                break;
            }

            // X값을 늘림
            start.posX++;

            // 뱀이 보드 밖으로 나갔을 때 종료
            if (start.posX > boardSize - 1) {
                gameOver = false;
                break;
            }

            // 현재 위치에 사과가 있을 때(PUSH)
            if (boardPos[boardSize * (start.posY) + (start.posX)]) {
                boardPos[boardSize * (start.posY) + (start.posX)] = false; // 사과 비활성화
                snakeBody[boardSize * (start.posY) + (start.posX - 1)] = true; // 몸 활성화
                snakeLength.push(start);
            }
            // 현재 위치에 사과가 없을 때(POP && PUSH)
            else {
                tail = snakeLength.front();
                snakeBody[boardSize * (tail.posY) + (tail.posX)] = false; // 몸 비활성화
                if (snakeLength.size() > 1)
                    snakeBody[boardSize * (start.posY) + (start.posX - 1)] = true; // 몸 활성화
                snakeLength.pop();
                snakeLength.push(start);
            }
            break;
        case DOWN:
            // 뱀이 자기 몸에 박았을 때 종료
            if (snakeBody[boardSize * (start.posY + 1) + (start.posX)]) {
                gameOver = false;
                break;
            }

            // Y값을 늘림
            start.posY++;

            // 뱀이 보드 밖으로 나갔을 때 종료
            if (start.posY > boardSize - 1) {
                gameOver = false;
                break;
            }

            // 현재 위치에 사과가 있을 때(PUSH)
            if (boardPos[boardSize * (start.posY) + (start.posX)]) {
                boardPos[boardSize * (start.posY) + (start.posX)] = false; // 사과 비활성화
                snakeBody[boardSize * (start.posY - 1) + (start.posX)] = true; // 몸 활성화
                snakeLength.push(start);
            }
            // 현재 위치에 사과가 없을 때(POP && PUSH)
            else {
                tail = snakeLength.front();
                snakeBody[boardSize * (tail.posY) + (tail.posX)] = false; // 몸 비활성화
                if (snakeLength.size() > 1)
                    snakeBody[boardSize * (start.posY - 1) + (start.posX)] = true; // 몸 활성화
                snakeLength.pop();
                snakeLength.push(start);
            }
            break;
        case LEFT:
            // 뱀이 자기 몸에 박았을 때 종료
            if (snakeBody[boardSize * (start.posY) + (start.posX - 1)]) {
                gameOver = false;
                break;
            }

            // X값을 줄임
            start.posX--;

            // 뱀이 보드 밖으로 나갔을 때 종료
            if (start.posX < 0) {
                gameOver = false;
                break;
            }

            // 현재 위치에 사과가 있을 때(PUSH)
            if (boardPos[boardSize * (start.posY) + (start.posX)]) {
                boardPos[boardSize * (start.posY) + (start.posX)] = false; // 사과 비활성화
                snakeBody[boardSize * (start.posY) + (start.posX + 1)] = true; // 몸 활성화
                snakeLength.push(start);
            }
            // 현재 위치에 사과가 없을 때(POP && PUSH)
            else {
                tail = snakeLength.front();
                snakeBody[boardSize * (tail.posY) + (tail.posX)] = false; // 몸 비활성화
                if (snakeLength.size() > 1)
                    snakeBody[boardSize * (start.posY) + (start.posX + 1)] = true; // 몸 활성화
                snakeLength.pop();
                snakeLength.push(start);
            }
            break;

        case UP:

            // 뱀이 자기 몸에 박았을 때 종료
            if (snakeBody[boardSize * (start.posY - 1) + (start.posX)]) {
                gameOver = false;
                break;
            }

            // Y값을 줄임
            start.posY--;

            // 뱀이 보드 밖으로 나갔을 때 종료
            if (start.posY < 0) {
                gameOver = false;
                break;
            }

            // 현재 위치에 사과가 있을 때(PUSH)
            if (boardPos[boardSize * (start.posY) + (start.posX)]) {
                boardPos[boardSize * (start.posY) + (start.posX)] = false; // 사과 비활성화
                snakeBody[boardSize * (start.posY + 1) + (start.posX)] = true; // 몸 활성화
                snakeLength.push(start);
            }
            // 현재 위치에 사과가 없을 때(POP && PUSH)
            else {
                tail = snakeLength.front();
                snakeBody[boardSize * (tail.posY) + (tail.posX)] = false; // 몸 비활성화
                if (snakeLength.size() > 1)
                    snakeBody[boardSize * (start.posY + 1) + (start.posX)] = true; // 몸 활성화
                snakeLength.pop();
                snakeLength.push(start);
            }
            break;
        }
        currentTime++;
    }

    cout << currentTime << endl;
    delete[] boardPos;
    delete[] snakeBody;
    delete[] snakeInfoArr;
    boardPos = nullptr;
    snakeBody = nullptr;
    snakeInfoArr = nullptr;
    return 0;
}