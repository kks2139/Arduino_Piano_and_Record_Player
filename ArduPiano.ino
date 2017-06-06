#define C 262
#define D 294
#define E 330
#define F 350
#define G 392
#define A 440
#define B 494
#define CC 523
//duration
//eight = 8분음표 반박자 four = 4분음표 한박자 C_four = 점4분음표 한박자반 two = 2분음표 C_TWO 점이분음표 두박자반
#define SIX 150
#define EIG 300
#define FOR 600
#define C_F 900
#define TWO 1200
#define C_T 1500
#define ON 2400

//PIN 설정

#define SPK 13
#define SEL 12

const int motorPin = 9;     //상수 선언 : 모터와 연결된 핀 번호 저장
int s = 86;

// 준비음 //
int Ready[] = {C, C, C, CC};

//게임 오버 음
int Over[16] = {G, G, G, 312, F, F, F, D, 312, 312, 312, 262, D, D, D, 117};
int OverDu[16] = {EIG, EIG, EIG, ON, EIG, EIG, EIG, ON, EIG, EIG, EIG, ON, EIG, EIG, EIG, ON};
int OverLen = 16;

//게임 클리어 음
int Clear[4] = {C, E, G, CC};
int ClearLen = 4;

int test[] = {C, D, E, F, G, A, B, CC}; // 테스트용


// 노래음계 //
//둘리
int first[] = {E, G, E, D, D, G, D, C, A, G, E, G, E, D, A, G, E, G, E, G, E, D, B, G, E, C, D, D, D, C, D, E, E, G, A, A, A, B, CC, B, B, G, E, G, A, A, B, CC, B, B, A, G, B, B, CC, B, CC, B, CC, CC, B, A, B};
int firstDu[] = {EIG, EIG, EIG, C_T, EIG, EIG, EIG, C_T, FOR, TWO, EIG, EIG, EIG, C_T, FOR, TWO, FOR, TWO, EIG, EIG, EIG, C_T, FOR, EIG, C_T, FOR, EIG, C_F, EIG, EIG, EIG, ON, EIG, EIG, EIG, ON, EIG, EIG, ON, FOR, FOR, FOR, FOR, EIG, C_T, FOR, FOR, FOR, EIG, EIG, EIG, C_T, EIG, EIG, FOR, FOR, FOR, EIG, C_T, FOR, C_T, FOR, ON};
int firstLen = sizeof(first) /  sizeof(int);
//달려라 하니
int second[] = {B, B, B, CC, A, G, G, A, B, CC, E, E, F, G, E, E, F, G, E, F, D, C, D, E, E, B, CC, A, F, E, G, G, CC, B, CC, A, F, G, A, CC, G, G, G, CC, B, CC, A, F, F, A, B, CC};
int secondDu[] = {EIG, EIG, FOR, EIG, C_F, EIG, EIG, FOR, EIG, C_F, EIG, EIG, EIG, FOR, EIG, EIG, EIG, EIG, EIG, EIG, EIG, EIG, EIG, EIG, FOR, EIG, C_F, C_F, C_F, C_T, EIG, EIG, FOR, FOR, EIG, TWO, FOR, EIG, FOR, EIG, FOR, FOR, EIG, FOR, FOR, EIG, TWO, FOR, EIG, FOR, EIG, TWO};
int secondLen = sizeof(second) /  sizeof(int);
//내남친에게
int third[] = {G, G, E, G, G, G, A, G, F, F, F, F, F, F, F, G, A, B, A, G, G, G, F, E, G, E, D, D, C, C, D, E, F, E, F, E, F, A, B, A, G, G, C, A, A, B, CC, B, CC, B, A, G, G, G, A, B, CC, A, G, F, F, F, F, CC, CC, B, A, G, E, D, E, D, E, F, G};
int thirdDu[] = {EIG, EIG, EIG, EIG, EIG, EIG, EIG, EIG, FOR, FOR, EIG, EIG, EIG, EIG, EIG, EIG, EIG, EIG, FOR, FOR, EIG, EIG, EIG, FOR, FOR, FOR, EIG, EIG, FOR, EIG, FOR, FOR, EIG, EIG, EIG, EIG, EIG, FOR, EIG, EIG, FOR, C_F, FOR, TWO, EIG, EIG, EIG, FOR, EIG, FOR, EIG, C_F, EIG, EIG, FOR, C_F, FOR, FOR, EIG, FOR, EIG, EIG, EIG, FOR, C_F, EIG, FOR, FOR, FOR, EIG, EIG, EIG, EIG, FOR, C_F};
int thirdLen = sizeof(third) /  sizeof(int);
//LOVE
int forth[] = {G, A, B, B, B, A, G, A, B, A, A, G, A, B, A, B, CC, B, A, G, E, G, E, G, E, G, E, G, A, B, B, B, A, G, A, B, A, A, G, A, B, A, CC, B, A, G, CC, B, CC, CC, B};
int forthDu[] = {EIG, EIG, EIG, EIG, EIG, EIG, EIG, EIG, EIG, FOR, C_F, EIG, EIG, EIG, FOR, EIG, EIG, EIG, FOR, FOR, FOR, EIG, EIG, EIG, EIG, EIG, EIG, EIG, EIG, FOR, EIG, EIG, EIG, EIG, EIG, EIG, EIG, EIG, FOR, C_F, EIG, EIG, EIG, EIG, FOR, FOR, FOR, FOR, FOR, FOR, FOR, FOR, C_F};
int forthLen = sizeof(forth) /  sizeof(int);
//믿어요
int fifth[] = {G, C, C, C, E, F, G, C, C, C, C, C, D, C, D, E, E, E, F, G, C, C, C, E, F, G, C, C, C, C, C, F, E, F, G, G, E, F, G, C, C, C, E, F, G, C, C, C, C, C, D, C, D, E, E, E, F, G, C, C, C, E, F, G, C, C, C, C, C, F, E, F, G, G, C, C};
int fifthDu[] = {FOR, EIG, FOR, FOR, FOR, FOR, FOR, EIG, FOR, EIG, EIG, EIG, FOR, EIG, FOR, EIG, FOR, EIG, EIG, FOR, EIG, FOR, EIG, EIG, EIG, FOR, EIG, FOR, EIG, FOR, EIG, FOR, EIG, FOR, FOR, TWO, EIG, EIG, FOR, EIG, FOR, EIG, EIG, EIG, FOR, EIG, FOR, EIG, EIG, FOR, EIG, FOR, FOR, C_T, EIG, EIG, FOR, EIG, FOR, EIG, EIG, EIG, FOR, EIG, FOR, EIG, EIG, EIG, FOR, EIG, FOR, FOR, FOR, EIG, C_T};
int fifthLen = sizeof(fifth) /  sizeof(int);
//혜화동
int sixth[] = {E, F, G, C, B, B, B, C, B, A, G, A, C, A, G, E, D, C, C, E, E, C, D, C, C, D, E, G, G, E, G, E, F, G, C, B, B, B, C, B, A, G, A, C, A, G, E, D, C, C, E, E, C, D, C, C, D, E, G, G, E, G};
int sixthDu[] = {EIG, EIG, TWO, C_F, FOR, FOR, EIG, FOR, EIG, FOR, EIG, EIG, EIG, FOR, FOR, C_F, EIG, EIG, FOR, FOR, EIG, EIG, EIG, FOR, FOR, FOR, EIG, EIG, FOR, FOR, FOR, C_T, EIG, EIG, TWO, C_F, FOR, FOR, EIG, FOR, EIG, FOR, EIG, EIG, EIG, FOR, FOR, C_F, EIG, EIG, FOR, FOR, EIG, EIG, EIG, FOR, FOR, FOR, EIG, EIG, FOR, FOR, FOR, C_T};
int sixthLen = sizeof(sixth) /  sizeof(int);


// LED 음계 //
int latchPin = 10;      //Pin connected to ST_CP of 74HC595
int clockPin = 11;   //Pin connected to SH_CP of 74HC595
int dataPin = A3;    //Pin connected to DS of 74HC595
byte data[] = {B10000000, B01000000, B00100000, B00010000, B00001000, B00000100, B00000010, B00000001};

// 세그먼트 숫자 //
int SdataPin = A2;
int SlatchPin = A1;
int SclockPin = A0;
byte Snumber[] = {B11000000, B11111001, B10100100, B10110000, B10011001, B10010010,
                  B10000010, B11111000, B10000000, B10010000
                 };

// 준비음 연주 //
void ReadySound() {
  for (int i = 0; i < 4; i++) {
    if (i == 3) {
      tone(SPK, Ready[i]);
      delay(1500);
      noTone(SPK);
      delay(1000);
    } else {
      tone(SPK, Ready[i], 500);
      delay(1000);
      //noTone(SPK);
    }
  }
}
// 테스트용 도레미~~ //
void testSound() {
  analogWrite(motorPin,250); delay(1000); analogWrite(motorPin,s);
  for (int i = 0; i < 8; i++) {
    analogWrite(motorPin,60);
    tone(SPK, test[i], 500);
    delay(500);

  }analogWrite(motorPin,0);
}

//첫번째 (둘리)연주 함수
void firstMusic() {
  analogWrite(motorPin,250); delay(1000); analogWrite(motorPin,s);
  int pauseBetweenNotes;
  for (int i = 0; i < firstLen; i++) {
    tone(SPK, first[i], firstDu[i]);
    pauseBetweenNotes = firstDu[i] * 1.30;

    if (first[i] == C) {
      digitalWrite(latchPin, LOW);
      shiftOut(dataPin, clockPin, LSBFIRST, data[0]);
      digitalWrite(latchPin, HIGH);
    }
    if (first[i] == D) {
      digitalWrite(latchPin, LOW);
      shiftOut(dataPin, clockPin, LSBFIRST, data[1]);
      digitalWrite(latchPin, HIGH);
    }
    if (first[i] == E) {
      digitalWrite(latchPin, LOW);
      shiftOut(dataPin, clockPin, LSBFIRST, data[2]);
      digitalWrite(latchPin, HIGH);
    }
    if (first[i] == F) {
      digitalWrite(latchPin, LOW);
      shiftOut(dataPin, clockPin, LSBFIRST, data[3]);
      digitalWrite(latchPin, HIGH);
    }
    if (first[i] == G) {
      digitalWrite(latchPin, LOW);
      shiftOut(dataPin, clockPin, LSBFIRST, data[4]);
      digitalWrite(latchPin, HIGH);
    }
    if (first[i] == A) {
      digitalWrite(latchPin, LOW);
      shiftOut(dataPin, clockPin, LSBFIRST, data[5]);
      digitalWrite(latchPin, HIGH);
    }
    if (first[i] == B) {
      digitalWrite(latchPin, LOW);
      shiftOut(dataPin, clockPin, LSBFIRST, data[6]);
      digitalWrite(latchPin, HIGH);
    }
    if (first[i] == CC) {
      digitalWrite(latchPin, LOW);
      shiftOut(dataPin, clockPin, LSBFIRST, data[7]);
      digitalWrite(latchPin, HIGH);
    }
    delay(firstDu[i]);

  } noTone(SPK); analogWrite(motorPin,0);
}
void secondMusic() {
analogWrite(motorPin,250); delay(1000); analogWrite(motorPin,s);
  for (int i = 0; i < secondLen; i++) {
    int pauseBetweenNotes;      //delay 계산식

    tone(SPK, second[i], secondDu[i]);
    pauseBetweenNotes = secondDu[i] * 1.30;
    if (second[i] == C) {
      digitalWrite(latchPin, LOW);
      shiftOut(dataPin, clockPin, LSBFIRST, data[0]);
      digitalWrite(latchPin, HIGH);
    }
    if (second[i] == D) {
      digitalWrite(latchPin, LOW);
      shiftOut(dataPin, clockPin, LSBFIRST, data[1]);
      digitalWrite(latchPin, HIGH);
    }
    if (second[i] == E) {
      digitalWrite(latchPin, LOW);
      shiftOut(dataPin, clockPin, LSBFIRST, data[2]);
      digitalWrite(latchPin, HIGH);
    }
    if (second[i] == F) {
      digitalWrite(latchPin, LOW);
      shiftOut(dataPin, clockPin, LSBFIRST, data[3]);
      digitalWrite(latchPin, HIGH);
    }
    if (second[i] == G) {
      digitalWrite(latchPin, LOW);
      shiftOut(dataPin, clockPin, LSBFIRST, data[4]);
      digitalWrite(latchPin, HIGH);
    }
    if (second[i] == A) {
      digitalWrite(latchPin, LOW);
      shiftOut(dataPin, clockPin, LSBFIRST, data[5]);
      digitalWrite(latchPin, HIGH);
    }
    if (second[i] == B) {
      digitalWrite(latchPin, LOW);
      shiftOut(dataPin, clockPin, LSBFIRST, data[6]);
      digitalWrite(latchPin, HIGH);
    }
    if (second[i] == CC) {
      digitalWrite(latchPin, LOW);
      shiftOut(dataPin, clockPin, LSBFIRST, data[7]);
      digitalWrite(latchPin, HIGH);
    }

    delay(secondDu[i]);

  }analogWrite(motorPin,0);
  noTone(SPK);
}
void thirdMusic() {
  analogWrite(motorPin,250); delay(1000); analogWrite(motorPin,s);
  int pauseBetweenNotes;
  for (int i = 0; i < thirdLen; i++) {

    tone(SPK, third[i], thirdDu[i]);
    pauseBetweenNotes = thirdDu[i] * 1.30;
    if (third[i] == C) {
      digitalWrite(latchPin, LOW);
      shiftOut(dataPin, clockPin, LSBFIRST, data[0]);
      digitalWrite(latchPin, HIGH);
    }
    if (third[i] == D) {
      digitalWrite(latchPin, LOW);
      shiftOut(dataPin, clockPin, LSBFIRST, data[1]);
      digitalWrite(latchPin, HIGH);
    }
    if (third[i] == E) {
      digitalWrite(latchPin, LOW);
      shiftOut(dataPin, clockPin, LSBFIRST, data[2]);
      digitalWrite(latchPin, HIGH);
    }
    if (third[i] == F) {
      digitalWrite(latchPin, LOW);
      shiftOut(dataPin, clockPin, LSBFIRST, data[3]);
      digitalWrite(latchPin, HIGH);
    }
    if (third[i] == G) {
      digitalWrite(latchPin, LOW);
      shiftOut(dataPin, clockPin, LSBFIRST, data[4]);
      digitalWrite(latchPin, HIGH);
    }
    if (third[i] == A) {
      digitalWrite(latchPin, LOW);
      shiftOut(dataPin, clockPin, LSBFIRST, data[5]);
      digitalWrite(latchPin, HIGH);
    }
    if (third[i] == B) {
      digitalWrite(latchPin, LOW);
      shiftOut(dataPin, clockPin, LSBFIRST, data[6]);
      digitalWrite(latchPin, HIGH);
    }
    if (third[i] == CC) {
      digitalWrite(latchPin, LOW);
      shiftOut(dataPin, clockPin, LSBFIRST, data[7]);
      digitalWrite(latchPin, HIGH);
    }
    delay(thirdDu[i]);

  }analogWrite(motorPin,0);
  noTone(SPK);
}
void forthMusic() {
  analogWrite(motorPin,250); delay(1000); analogWrite(motorPin,s);
  int pauseBetweenNotes;

  for (int i = 0; i < forthLen; i++) {

    tone(SPK, forth[i], forthDu[i]);
    pauseBetweenNotes = forthDu[i] * 1.30;
    if (forth[i] == C) {
      digitalWrite(latchPin, LOW);
      shiftOut(dataPin, clockPin, LSBFIRST, data[0]);
      digitalWrite(latchPin, HIGH);
    }
    if (forth[i] == D) {
      digitalWrite(latchPin, LOW);
      shiftOut(dataPin, clockPin, LSBFIRST, data[1]);
      digitalWrite(latchPin, HIGH);
    }
    if (forth[i] == E) {
      digitalWrite(latchPin, LOW);
      shiftOut(dataPin, clockPin, LSBFIRST, data[2]);
      digitalWrite(latchPin, HIGH);
    }
    if (forth[i] == F) {
      digitalWrite(latchPin, LOW);
      shiftOut(dataPin, clockPin, LSBFIRST, data[3]);
      digitalWrite(latchPin, HIGH);
    }
    if (forth[i] == G) {
      digitalWrite(latchPin, LOW);
      shiftOut(dataPin, clockPin, LSBFIRST, data[4]);
      digitalWrite(latchPin, HIGH);
    }
    if (forth[i] == A) {
      digitalWrite(latchPin, LOW);
      shiftOut(dataPin, clockPin, LSBFIRST, data[5]);
      digitalWrite(latchPin, HIGH);
    }
    if (forth[i] == B) {
      digitalWrite(latchPin, LOW);
      shiftOut(dataPin, clockPin, LSBFIRST, data[6]);
      digitalWrite(latchPin, HIGH);
    }
    if (forth[i] == CC) {
      digitalWrite(latchPin, LOW);
      shiftOut(dataPin, clockPin, LSBFIRST, data[7]);
      digitalWrite(latchPin, HIGH);
    }
    delay(forthDu[i]);
  }
  noTone(SPK); analogWrite(motorPin,0);
}
void fifthMusic() {
  analogWrite(motorPin,250); delay(1000); analogWrite(motorPin,s);
  int pauseBetweenNotes;
  for (int i = 0; i < fifthLen; i++) {
    tone(SPK, fifth[i], fifthDu[i]);
    pauseBetweenNotes = fifthDu[i] * 1.30;
    if (fifth[i] == C) {
      digitalWrite(latchPin, LOW);
      shiftOut(dataPin, clockPin, LSBFIRST, data[0]);
      digitalWrite(latchPin, HIGH);
    }
    if (fifth[i] == D) {
      digitalWrite(latchPin, LOW);
      shiftOut(dataPin, clockPin, LSBFIRST, data[1]);
      digitalWrite(latchPin, HIGH);
    }
    if (fifth[i] == E) {
      digitalWrite(latchPin, LOW);
      shiftOut(dataPin, clockPin, LSBFIRST, data[2]);
      digitalWrite(latchPin, HIGH);
    }
    if (fifth[i] == F) {
      digitalWrite(latchPin, LOW);
      shiftOut(dataPin, clockPin, LSBFIRST, data[3]);
      digitalWrite(latchPin, HIGH);
    }
    if (fifth[i] == G) {
      digitalWrite(latchPin, LOW);
      shiftOut(dataPin, clockPin, LSBFIRST, data[4]);
      digitalWrite(latchPin, HIGH);
    }
    if (fifth[i] == A) {
      digitalWrite(latchPin, LOW);
      shiftOut(dataPin, clockPin, LSBFIRST, data[5]);
      digitalWrite(latchPin, HIGH);
    }
    if (fifth[i] == B) {
      digitalWrite(latchPin, LOW);
      shiftOut(dataPin, clockPin, LSBFIRST, data[6]);
      digitalWrite(latchPin, HIGH);
    }
    if (fifth[i] == CC) {
      digitalWrite(latchPin, LOW);
      shiftOut(dataPin, clockPin, LSBFIRST, data[7]);
      digitalWrite(latchPin, HIGH);
    }
    delay(fifthDu[i]);
  }
  noTone(SPK); analogWrite(motorPin,0);

}
void sixthMusic() {
  analogWrite(motorPin,250); delay(1000); analogWrite(motorPin,s);
  int pauseBetweenNotes;
  for (int i = 0; i < sixthLen; i++) {
    tone(SPK, sixth[i], sixthDu[i]);
    pauseBetweenNotes = sixthDu[i] * 1.30;
    if (sixth[i] == C) {
      digitalWrite(latchPin, LOW);
      shiftOut(dataPin, clockPin, LSBFIRST, data[0]);
      digitalWrite(latchPin, HIGH);
    }
    if (sixth[i] == D) {
      digitalWrite(latchPin, LOW);
      shiftOut(dataPin, clockPin, LSBFIRST, data[1]);
      digitalWrite(latchPin, HIGH);
    }
    if (sixth[i] == E) {
      digitalWrite(latchPin, LOW);
      shiftOut(dataPin, clockPin, LSBFIRST, data[2]);
      digitalWrite(latchPin, HIGH);
    }
    if (sixth[i] == F) {
      digitalWrite(latchPin, LOW);
      shiftOut(dataPin, clockPin, LSBFIRST, data[3]);
      digitalWrite(latchPin, HIGH);
    }
    if (sixth[i] == G) {
      digitalWrite(latchPin, LOW);
      shiftOut(dataPin, clockPin, LSBFIRST, data[4]);
      digitalWrite(latchPin, HIGH);
    }
    if (sixth[i] == A) {
      digitalWrite(latchPin, LOW);
      shiftOut(dataPin, clockPin, LSBFIRST, data[5]);
      digitalWrite(latchPin, HIGH);
    }
    if (sixth[i] == B) {
      digitalWrite(latchPin, LOW);
      shiftOut(dataPin, clockPin, LSBFIRST, data[6]);
      digitalWrite(latchPin, HIGH);
    }
    if (sixth[i] == CC) {
      digitalWrite(latchPin, LOW);
      shiftOut(dataPin, clockPin, LSBFIRST, data[7]);
      digitalWrite(latchPin, HIGH);
    }
    delay(sixthDu[i]);
  }
  noTone(SPK); analogWrite(motorPin,0);
}
//---------------------------  Setup and Loop  -------------------------//
void setup() {
  Serial.begin(9600);
  pinMode(13, OUTPUT); // 부저
  pinMode(12, INPUT); // 선택 버튼
  randomSeed(analogRead(0));

  pinMode(motorPin, OUTPUT); // 9번핀을 출력용으로 설정
  
  // LED 제어 시프트레지스터 핀
  pinMode(latchPin, OUTPUT);
  pinMode(dataPin, OUTPUT);
  pinMode(clockPin, OUTPUT);

  // 세그먼트 시프트레지스트 핀
  pinMode(SlatchPin, OUTPUT);
  pinMode(SclockPin, OUTPUT);
  pinMode(SdataPin, OUTPUT);

  // 푸쉬버튼 핀 8개
  pinMode(A5, INPUT); // 도
  pinMode(2, INPUT); // 레
  pinMode(3, INPUT); // 미
  pinMode(4, INPUT); // 파
  pinMode(5, INPUT); // 솔
  pinMode(6, INPUT); // 라
  pinMode(7, INPUT); // 시
  pinMode(8, INPUT); // 도
}

void loop() {

  int num = random(6);
  //Serial.println(num);

  delay(100);
  digitalWrite(SlatchPin, LOW); // shift out the bits:
  shiftOut(SdataPin, SclockPin, MSBFIRST, Snumber[num]);
  digitalWrite(SlatchPin, HIGH);

  int btn = digitalRead(12);
  //Serial.println(btn);

  //  버튼 눌러서 음악 선택하면~~  //
  if (btn == 1) {
    int life = 8, index = 0;
    ////------------------  버튼으로 음계 맞추기 테스트  -------------------////
    /*
      digitalWrite(SlatchPin, LOW); // shift out the bits:
      shiftOut(SdataPin, SclockPin, MSBFIRST, Snumber[life]);
      digitalWrite(SlatchPin, HIGH);

      testSound();
      ReadySound();

      while(true){
      int pushed= -1;

      Serial.println(life);
      Serial.println(test[index]);
      Serial.println();

      // 지금 눌린 버튼에 해당하는 음계 저장... //
      digitalWrite(latchPin, LOW);
      if(digitalRead(A5)==1){
        pushed = C;
          shiftOut(dataPin, clockPin, LSBFIRST, data[0]);
          tone(SPK,C,500); delay(500); noTone(SPK);
      }else if(digitalRead(2)==1){
        pushed = D;
        shiftOut(dataPin, clockPin, LSBFIRST, data[1]);
        tone(SPK,D,500); delay(500); noTone(SPK);
      }else if(digitalRead(3)==1){
        pushed = E;
        shiftOut(dataPin, clockPin, LSBFIRST, data[2]);
        tone(SPK,E,500); delay(500); noTone(SPK);
      }else if(digitalRead(4)==1){
        pushed = F;
        shiftOut(dataPin, clockPin, LSBFIRST, data[3]);
        tone(SPK,F,500); delay(500); noTone(SPK);
      }else if(digitalRead(5)==1){
        pushed = G;
        shiftOut(dataPin, clockPin, LSBFIRST, data[4]);
        tone(SPK,G,500); delay(500); noTone(SPK);
      }else if(digitalRead(6)==1){
        pushed = A;
        shiftOut(dataPin, clockPin, LSBFIRST, data[5]);
        tone(SPK,A,500); delay(500); noTone(SPK);
      }else if(digitalRead(7)==1){
        pushed = B;
        shiftOut(dataPin, clockPin, LSBFIRST, data[6]);
        tone(SPK,B,500); delay(500); noTone(SPK);
      }else if(digitalRead(8)==1){
        pushed = CC;
        shiftOut(dataPin, clockPin, LSBFIRST, data[7]);
        tone(SPK,CC,500); delay(500); noTone(SPK);
      }
      Serial.println(pushed);
      digitalWrite(latchPin, HIGH);

      // 저장된 음계랑 노래배열이랑 하나씩 비교, 맞으면 인덱스+1 //
      delay(300);
      if(test[index] != pushed && pushed != -1){
        life -= 1;
      digitalWrite(SlatchPin, LOW); // shift out the bits:
      shiftOut(SdataPin, SclockPin, MSBFIRST, Snumber[life]);
      digitalWrite(SlatchPin, HIGH);
      if(life == 0){
        // 게임오버 소리 나오고 끝남
        for (int i = 0 ; i < OverLen ; i++) {
              tone(SPK, Over[i], OverDu[i]);
              if (i == 3 || i == 7 || i == 11) {
                delay(EIG);
              }
            }
        break;
        }
      }
      else if(test[index]== pushed){ // 맞게 눌렀으면...
        index++;
        if(index >= 8){
          // 클리어 소리 나오고 끝
          for (int i = 0 ; i < ClearLen ; i++) {
              tone(SPK, Clear[i], EIG);
              delay(200);
            }
          break;
          }
        }
      }
    */
    ////--------------------------- 테스트 -------------------------////
    
    if (num == 0) {
      firstMusic();
      delay(500);
      ReadySound();

      digitalWrite(SlatchPin, LOW); // shift out the bits:
      shiftOut(SdataPin, SclockPin, MSBFIRST, Snumber[life]);
      digitalWrite(SlatchPin, HIGH);

      while (true) {
        int pushed = -1;

        // 지금 눌린 버튼에 해당하는 음계 저장... //
        digitalWrite(latchPin, LOW);
        if (digitalRead(A5) == 1) {
          pushed = C;
          shiftOut(dataPin, clockPin, LSBFIRST, data[0]); tone(SPK, C, 500); delay(500); noTone(SPK);
        } else if (digitalRead(2) == 1) {
          pushed = D;
          shiftOut(dataPin, clockPin, LSBFIRST, data[1]); tone(SPK, D, 500); delay(500); noTone(SPK);
        } else if (digitalRead(3) == 1) {
          pushed = E;
          shiftOut(dataPin, clockPin, LSBFIRST, data[2]); tone(SPK, E, 500); delay(500); noTone(SPK);
        } else if (digitalRead(4) == 1) {
          pushed = F;
          shiftOut(dataPin, clockPin, LSBFIRST, data[3]); tone(SPK, F, 500); delay(500); noTone(SPK);
        } else if (digitalRead(5) == 1) {
          pushed = G;
          shiftOut(dataPin, clockPin, LSBFIRST, data[4]); tone(SPK, G, 500); delay(500); noTone(SPK);
        } else if (digitalRead(6) == 1) {
          pushed = A;
          shiftOut(dataPin, clockPin, LSBFIRST, data[5]); tone(SPK, A, 500); delay(500); noTone(SPK);
        } else if (digitalRead(7) == 1) {
          pushed = B;
          shiftOut(dataPin, clockPin, LSBFIRST, data[6]); tone(SPK, B, 500); delay(500); noTone(SPK);
        } else if (digitalRead(8) == 1) {
          pushed = CC;
          shiftOut(dataPin, clockPin, LSBFIRST, data[7]); tone(SPK, CC, 500); delay(500); noTone(SPK);
        }
        Serial.println(pushed);
        digitalWrite(latchPin, HIGH);

        // 저장된 음계랑 노래배열이랑 하나씩 비교, 맞으면 인덱스+1 //
        delay(400);
        if (first[index] != pushed && pushed != -1) {
          life -= 1;
          digitalWrite(SlatchPin, LOW); // shift out the bits:
          shiftOut(SdataPin, SclockPin, MSBFIRST, Snumber[life]);
          digitalWrite(SlatchPin, HIGH);
          if (life == 0) {
            // 게임오버 소리 나오고 끝남
            for (int i = 0 ; i < OverLen ; i++) {
              tone(SPK, Over[i], OverDu[i]);
              if (i == 3 || i == 7 || i == 11) {
                delay(EIG);
              }
            }
            break;
          }
        }
        else if (first[index] == pushed) { // 맞게 눌렀으면...
          index++;
          if (index >= firstLen) {
            // 클리어 소리 나오고 끝
            for (int i = 0 ; i < ClearLen ; i++) {
              tone(SPK, Clear[i], EIG);
              delay(200);
            }
            break;
          }
        }
      }
    }
    if (num == 1) {
      secondMusic();
      delay(500);
      ReadySound();

      digitalWrite(SlatchPin, LOW); // shift out the bits:
      shiftOut(SdataPin, SclockPin, MSBFIRST, Snumber[life]);
      digitalWrite(SlatchPin, HIGH);

      while (true) {
        int pushed = -1;

        // 지금 눌린 버튼에 해당하는 음계 저장... //
        digitalWrite(latchPin, LOW);
        if (digitalRead(A5) == 1) {
          pushed = C;
          shiftOut(dataPin, clockPin, LSBFIRST, data[0]); tone(SPK, C, 500); delay(500); noTone(SPK);
        } else if (digitalRead(2) == 1) {
          pushed = D;
          shiftOut(dataPin, clockPin, LSBFIRST, data[1]); tone(SPK, D, 500); delay(500); noTone(SPK);
        } else if (digitalRead(3) == 1) {
          pushed = E;
          shiftOut(dataPin, clockPin, LSBFIRST, data[2]); tone(SPK, E, 500); delay(500); noTone(SPK);
        } else if (digitalRead(4) == 1) {
          pushed = F;
          shiftOut(dataPin, clockPin, LSBFIRST, data[3]); tone(SPK, F, 500); delay(500); noTone(SPK);
        } else if (digitalRead(5) == 1) {
          pushed = G;
          shiftOut(dataPin, clockPin, LSBFIRST, data[4]); tone(SPK, G, 500); delay(500); noTone(SPK);
        } else if (digitalRead(6) == 1) {
          pushed = A;
          shiftOut(dataPin, clockPin, LSBFIRST, data[5]); tone(SPK, A, 500); delay(500); noTone(SPK);
        } else if (digitalRead(7) == 1) {
          pushed = B;
          shiftOut(dataPin, clockPin, LSBFIRST, data[6]); tone(SPK, B, 500); delay(500); noTone(SPK);
        } else if (digitalRead(8) == 1) {
          pushed = CC;
          shiftOut(dataPin, clockPin, LSBFIRST, data[7]); tone(SPK, CC, 500); delay(500); noTone(SPK);
        }
        Serial.println(pushed);
        digitalWrite(latchPin, HIGH);

        // 저장된 음계랑 노래배열이랑 하나씩 비교, 맞으면 인덱스+1 //
        delay(400);
        if (second[index] != pushed && pushed != -1) {
          life -= 1;
          digitalWrite(SlatchPin, LOW); // shift out the bits:
          shiftOut(SdataPin, SclockPin, MSBFIRST, Snumber[life]);
          digitalWrite(SlatchPin, HIGH);
          if (life == 0) {
            // 게임오버 소리 나오고 끝남
            for (int i = 0 ; i < OverLen ; i++) {
              tone(SPK, Over[i], OverDu[i]);
              if (i == 3 || i == 7 || i == 11) {
                delay(EIG);
              }
            }
            break;
          }
        }
        else if (second[index] == pushed) { // 맞게 눌렀으면...
          index++;
          if (index >= secondLen) {
            // 클리어 소리 나오고 끝
            for (int i = 0 ; i < ClearLen ; i++) {
              tone(SPK, Clear[i], EIG);
              delay(200);
            }
            break;
          }
        }
      }
    }
    if (num == 2) {
      thirdMusic();
      delay(500);
      ReadySound();

      digitalWrite(SlatchPin, LOW); // shift out the bits:
      shiftOut(SdataPin, SclockPin, MSBFIRST, Snumber[life]);
      digitalWrite(SlatchPin, HIGH);

      while (true) {
        int pushed = -1;

        // 지금 눌린 버튼에 해당하는 음계 저장... //
        digitalWrite(latchPin, LOW);
        if (digitalRead(A5) == 1) {
          pushed = C;
          shiftOut(dataPin, clockPin, LSBFIRST, data[0]); tone(SPK, C, 500); delay(500); noTone(SPK);
        } else if (digitalRead(2) == 1) {
          pushed = D;
          shiftOut(dataPin, clockPin, LSBFIRST, data[1]); tone(SPK, D, 500); delay(500); noTone(SPK);
        } else if (digitalRead(3) == 1) {
          pushed = E;
          shiftOut(dataPin, clockPin, LSBFIRST, data[2]); tone(SPK, E, 500); delay(500); noTone(SPK);
        } else if (digitalRead(4) == 1) {
          pushed = F;
          shiftOut(dataPin, clockPin, LSBFIRST, data[3]); tone(SPK, F, 500); delay(500); noTone(SPK);
        } else if (digitalRead(5) == 1) {
          pushed = G;
          shiftOut(dataPin, clockPin, LSBFIRST, data[4]); tone(SPK, G, 500); delay(500); noTone(SPK);
        } else if (digitalRead(6) == 1) {
          pushed = A;
          shiftOut(dataPin, clockPin, LSBFIRST, data[5]); tone(SPK, A, 500); delay(500); noTone(SPK);
        } else if (digitalRead(7) == 1) {
          pushed = B;
          shiftOut(dataPin, clockPin, LSBFIRST, data[6]); tone(SPK, B, 500); delay(500); noTone(SPK);
        } else if (digitalRead(8) == 1) {
          pushed = CC;
          shiftOut(dataPin, clockPin, LSBFIRST, data[7]); tone(SPK, CC, 500); delay(500); noTone(SPK);
        }
        Serial.println(pushed);
        digitalWrite(latchPin, HIGH);

        // 저장된 음계랑 노래배열이랑 하나씩 비교, 맞으면 인덱스+1 //
        delay(400);
        if (third[index] != pushed && pushed != -1) {
          life -= 1;
          digitalWrite(SlatchPin, LOW); // shift out the bits:
          shiftOut(SdataPin, SclockPin, MSBFIRST, Snumber[life]);
          digitalWrite(SlatchPin, HIGH);
          if (life == 0) {
            // 게임오버 소리 나오고 끝남
            for (int i = 0 ; i < OverLen ; i++) {
              tone(SPK, Over[i], OverDu[i]);
              if (i == 3 || i == 7 || i == 11) {
                delay(EIG);
              }
            }
            break;
          }
        }
        else if (third[index] == pushed) { // 맞게 눌렀으면...
          index++;
          if (index >= thirdLen) {
            // 클리어 소리 나오고 끝
            for (int i = 0 ; i < ClearLen ; i++) {
              tone(SPK, Clear[i], EIG);
              delay(200);
            }
            break;
          }
        }
      }
    }
    if (num == 3) {
      forthMusic();
      delay(500);
      ReadySound();

      digitalWrite(SlatchPin, LOW); // shift out the bits:
      shiftOut(SdataPin, SclockPin, MSBFIRST, Snumber[life]);
      digitalWrite(SlatchPin, HIGH);

      while (true) {
        int pushed = -1;

        // 지금 눌린 버튼에 해당하는 음계 저장... //
        digitalWrite(latchPin, LOW);
        if (digitalRead(A5) == 1) {
          pushed = C;
          shiftOut(dataPin, clockPin, LSBFIRST, data[0]); tone(SPK, C, 500); delay(500); noTone(SPK);
        } else if (digitalRead(2) == 1) {
          pushed = D;
          shiftOut(dataPin, clockPin, LSBFIRST, data[1]); tone(SPK, D, 500); delay(500); noTone(SPK);
        } else if (digitalRead(3) == 1) {
          pushed = E;
          shiftOut(dataPin, clockPin, LSBFIRST, data[2]); tone(SPK, E, 500); delay(500); noTone(SPK);
        } else if (digitalRead(4) == 1) {
          pushed = F;
          shiftOut(dataPin, clockPin, LSBFIRST, data[3]); tone(SPK, F, 500); delay(500); noTone(SPK);
        } else if (digitalRead(5) == 1) {
          pushed = G;
          shiftOut(dataPin, clockPin, LSBFIRST, data[4]); tone(SPK, G, 500); delay(500); noTone(SPK);
        } else if (digitalRead(6) == 1) {
          pushed = A;
          shiftOut(dataPin, clockPin, LSBFIRST, data[5]); tone(SPK, A, 500); delay(500); noTone(SPK);
        } else if (digitalRead(7) == 1) {
          pushed = B;
          shiftOut(dataPin, clockPin, LSBFIRST, data[6]); tone(SPK, B, 500); delay(500); noTone(SPK);
        } else if (digitalRead(8) == 1) {
          pushed = CC;
          shiftOut(dataPin, clockPin, LSBFIRST, data[7]); tone(SPK, CC, 500); delay(500); noTone(SPK);
        }
        Serial.println(pushed);
        digitalWrite(latchPin, HIGH);

        // 저장된 음계랑 노래배열이랑 하나씩 비교, 맞으면 인덱스+1 //
        delay(400);
        if (forth[index] != pushed && pushed != -1) {
          life -= 1;
          digitalWrite(SlatchPin, LOW); // shift out the bits:
          shiftOut(SdataPin, SclockPin, MSBFIRST, Snumber[life]);
          digitalWrite(SlatchPin, HIGH);
          if (life == 0) {
            // 게임오버 소리 나오고 끝남
            for (int i = 0 ; i < OverLen ; i++) {
              tone(SPK, Over[i], OverDu[i]);
              if (i == 3 || i == 7 || i == 11) {
                delay(EIG);
              }
            }
            break;
          }
        }
        else if (forth[index] == pushed) { // 맞게 눌렀으면...
          index++;
          if (index >= forthLen) {
            // 클리어 소리 나오고 끝
            for (int i = 0 ; i < ClearLen ; i++) {
              tone(SPK, Clear[i], EIG);
              delay(200);
            }
            break;
          }
        }
      }
    }
    if (num == 4) {
      fifthMusic();
      delay(500);
      ReadySound();

      digitalWrite(SlatchPin, LOW); // shift out the bits:
      shiftOut(SdataPin, SclockPin, MSBFIRST, Snumber[life]);
      digitalWrite(SlatchPin, HIGH);

      while (true) {
        int pushed = -1;

        // 지금 눌린 버튼에 해당하는 음계 저장... //
        digitalWrite(latchPin, LOW);
        if (digitalRead(A5) == 1) {
          pushed = C;
          shiftOut(dataPin, clockPin, LSBFIRST, data[0]); tone(SPK, C, 500); delay(500); noTone(SPK);
        } else if (digitalRead(2) == 1) {
          pushed = D;
          shiftOut(dataPin, clockPin, LSBFIRST, data[1]); tone(SPK, D, 500); delay(500); noTone(SPK);
        } else if (digitalRead(3) == 1) {
          pushed = E;
          shiftOut(dataPin, clockPin, LSBFIRST, data[2]); tone(SPK, E, 500); delay(500); noTone(SPK);
        } else if (digitalRead(4) == 1) {
          pushed = F;
          shiftOut(dataPin, clockPin, LSBFIRST, data[3]); tone(SPK, F, 500); delay(500); noTone(SPK);
        } else if (digitalRead(5) == 1) {
          pushed = G;
          shiftOut(dataPin, clockPin, LSBFIRST, data[4]); tone(SPK, G, 500); delay(500); noTone(SPK);
        } else if (digitalRead(6) == 1) {
          pushed = A;
          shiftOut(dataPin, clockPin, LSBFIRST, data[5]); tone(SPK, A, 500); delay(500); noTone(SPK);
        } else if (digitalRead(7) == 1) {
          pushed = B;
          shiftOut(dataPin, clockPin, LSBFIRST, data[6]); tone(SPK, B, 500); delay(500); noTone(SPK);
        } else if (digitalRead(8) == 1) {
          pushed = CC;
          shiftOut(dataPin, clockPin, LSBFIRST, data[7]); tone(SPK, CC, 500); delay(500); noTone(SPK);
        }
        Serial.println(pushed);
        digitalWrite(latchPin, HIGH);

        // 저장된 음계랑 노래배열이랑 하나씩 비교, 맞으면 인덱스+1 //
        delay(400);
        if (fifth[index] != pushed && pushed != -1) {
          life -= 1;
          digitalWrite(SlatchPin, LOW); // shift out the bits:
          shiftOut(SdataPin, SclockPin, MSBFIRST, Snumber[life]);
          digitalWrite(SlatchPin, HIGH);
          if (life == 0) {
            // 게임오버 소리 나오고 끝남
            for (int i = 0 ; i < OverLen ; i++) {
              tone(SPK, Over[i], OverDu[i]);
              if (i == 3 || i == 7 || i == 11) {
                delay(EIG);
              }
            }
            break;
          }
        }
        else if (fifth[index] == pushed) { // 맞게 눌렀으면...
          index++;
          if (index >= fifthLen) {
            // 클리어 소리 나오고 끝
            for (int i = 0 ; i < ClearLen ; i++) {
              tone(SPK, Clear[i], EIG);
              delay(200);
            }
            break;
          }
        }
      }
    }
    if (num == 5) {
      sixthMusic();
      delay(500);
      ReadySound();

      digitalWrite(SlatchPin, LOW); // shift out the bits:
      shiftOut(SdataPin, SclockPin, MSBFIRST, Snumber[life]);
      digitalWrite(SlatchPin, HIGH);

      while (true) {
        int pushed = -1;

        // 지금 눌린 버튼에 해당하는 음계 저장... //
        digitalWrite(latchPin, LOW);
        if (digitalRead(A5) == 1) {
          pushed = C;
          shiftOut(dataPin, clockPin, LSBFIRST, data[0]); tone(SPK, C, 500); delay(500); noTone(SPK);
        } else if (digitalRead(2) == 1) {
          pushed = D;
          shiftOut(dataPin, clockPin, LSBFIRST, data[1]); tone(SPK, D, 500); delay(500); noTone(SPK);
        } else if (digitalRead(3) == 1) {
          pushed = E;
          shiftOut(dataPin, clockPin, LSBFIRST, data[2]); tone(SPK, E, 500); delay(500); noTone(SPK);
        } else if (digitalRead(4) == 1) {
          pushed = F;
          shiftOut(dataPin, clockPin, LSBFIRST, data[3]); tone(SPK, F, 500); delay(500); noTone(SPK);
        } else if (digitalRead(5) == 1) {
          pushed = G;
          shiftOut(dataPin, clockPin, LSBFIRST, data[4]); tone(SPK, G, 500); delay(500); noTone(SPK);
        } else if (digitalRead(6) == 1) {
          pushed = A;
          shiftOut(dataPin, clockPin, LSBFIRST, data[5]); tone(SPK, A, 500); delay(500); noTone(SPK);
        } else if (digitalRead(7) == 1) {
          pushed = B;
          shiftOut(dataPin, clockPin, LSBFIRST, data[6]); tone(SPK, B, 500); delay(500); noTone(SPK);
        } else if (digitalRead(8) == 1) {
          pushed = CC;
          shiftOut(dataPin, clockPin, LSBFIRST, data[7]); tone(SPK, CC, 500); delay(500); noTone(SPK);
        }
        Serial.println(pushed);
        digitalWrite(latchPin, HIGH);

        // 저장된 음계랑 노래배열이랑 하나씩 비교, 맞으면 인덱스+1 //
        delay(400);
        if (sixth[index] != pushed && pushed != -1) {
          life -= 1;
          digitalWrite(SlatchPin, LOW); // shift out the bits:
          shiftOut(SdataPin, SclockPin, MSBFIRST, Snumber[life]);
          digitalWrite(SlatchPin, HIGH);
          if (life == 0) {
            // 게임오버 소리 나오고 끝남
            for (int i = 0 ; i < OverLen ; i++) {
              tone(SPK, Over[i], OverDu[i]);
              if (i == 3 || i == 7 || i == 11) {
                delay(EIG);
              }
            }
            break;
          }
        }
        else if (sixth[index] == pushed) { // 맞게 눌렀으면...
          index++;
          if (index >= sixthLen) {
            // 클리어 소리 나오고 끝
            for (int i = 0 ; i < ClearLen ; i++) {
              tone(SPK, Clear[i], EIG);
              delay(200);
            }
            break;
          }
        }
      }
    }

  }

}

