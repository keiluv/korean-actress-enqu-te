#include <stdio.h>
//전처리기
#define FIVE 5

//가수 구조체
struct singer{
    char username[20];
    int name;
    int song;
};

//배우 구조체
struct actor{
    int name;
    int movie;
    int drama;

};

//함수 정의
void singer_table();
void song_table();
void actor_table();
void movie_table();
void drama_table();

//main 함수
int main(void) {

    //변수선언
    struct singer sg[FIVE];//구조체 변수
    struct actor ac[FIVE];//구조체 변수
    //배열 변수 초기화
    char singer[FIVE][40]={"나얼","아이유","김경호","김범수","다비치"};
    char song[FIVE][40]={"바람기억","Blueming","나를 슬프게 하는 사람들","보고싶다","8282"};
    char actor[FIVE][40]={"김수현","신세경","마동석","배수지","송혜교"};
    char movie[FIVE][40]={"도둑들","타짜","범죄도시","건축학개론","두근두근 내 인생"};
    char drama[FIVE][40]={"별에서 온 그대", "지붕뚫고 하이킥","나쁜 녀석들","배가본드","태양의 후예"};

    printf("1.가수 선호도 조사\n");

    //5번씩 반복
    for(int i=0;i<FIVE;i++){
        printf("%d번째 사람의 이름을 입력하시오",i+1);
        scanf("%s",sg[i].username);

        printf("%d번째 사람이 좋아하는 가수를 고르시오.\n",i+1);
        singer_table();
        scanf("%d",&sg[i].name);

        printf("%d번째 사람이 좋아하는 노래를 고르시오.\n",i+1);
        song_table();        
        scanf("%d",&sg[i].song);
    }

    printf("2.배우 선호도 조사\n");
    
    
    for(int i =0;i<FIVE;i++){
        
        printf("%d번째 사람이 좋아하는 배우를 고르시오.\n",i+1);
        actor_table();
        scanf("%d",&ac[i].name);

        printf("%d번째 사람이 좋아하는 드라마를 고르시오\n",i+1);
        drama_table();
        scanf("%d",&ac[i].drama);

        printf("%d번째 사람이 좋아하는 영화를 고르시오,\n",i+1);
        movie_table();
        scanf("%d",&ac[i].movie);
        
    }

    //결과값 출력
    for(int i=0;i<FIVE;i++){
        printf("%d번째 사람 %s이 좋아하는 가수는 %s이고 좋아하는 노래는 %s이고 배우는 %s이고 영화는 %s이며 드라마는 %s입니다.\n",i+1,sg[i].username,singer[sg[i].name-1],song[sg[i].song-1],actor[ac[i].name-1],actor[ac[i].movie-1],drama[ac[i].drama-1]);

    }

    return 0;
}

void singer_table(){
    printf("1.나얼\n");
    printf("2.아이유\n");
    printf("3.김경호\n");
    printf("4.김범수\n");
    printf("5.다비치\n");
}
void song_table(){
    printf("1.바람기억\n");
    printf("2.Blueming\n");
    printf("3.나를 슬프게 하는 사람들\n");
    printf("4.보고싶다.\n");
    printf("5.8282\n");
}

void actor_table(){
    printf("1.김수현\n");
    printf("2.신세경\n");
    printf("3.마동석\n");
    printf("4.배수지\n");
    printf("5.송혜교\n");
}
void movie_table(){
    printf("1.도둑들\n");
    printf("2.타짜\n");
    printf("3.범죄도시\n");
    printf("4.건축학개론\n");
    printf("5.두근두근 내 인생\n");
}
void drama_table(){
    printf("1.별에서온 그대\n");
    printf("2.지붕뚫고 하이킥\n");
    printf("3.나쁜 녀석들\n");
    printf("4.배가본드\n");
    printf("5.태양의 후예\n");
}