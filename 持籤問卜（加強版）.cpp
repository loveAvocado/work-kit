#include <cstdio>
#include <cstdlib>
#include <ctime>
#define MAX 1000
using namespace std;
void opening();
void Xuexi();
void Zixi();
void Chifan();


void opening(){
    printf("+++++++++++++\n");
    printf("|    食     |\n");
    printf("| \\ .   籤  |\n");
    printf("|    /      |\n");
    printf("|     務    |\n");
    printf("+++++++++++++\n");
    printf(" C++ 愛 世 人\n");
}

struct Gowhere {
    int number;
    char place[MAX];
}
places[8] = {
    0,"二教",
    1,"一教",
    2,"理教",
    3,"三教",
    4,"廖凱源咖啡廳",
    5,"廖凱源五樓小教室",
    6,"廖凱源五樓大教室",
    7,"宿舍"
};

struct Taotie {
    int number;
    char canteen[MAX];
}
canteen[8] = {
    0,"學五麵食",
    1,"家園",
    2,"學一",
    3,"農園",
    4,"家園地下咖啡廳",
    5,"餐車",
    6,"佟園",
    7,"芍園"
};

struct Study {    
    int number;
    char issue[MAX];
} 
content[10] = {
    0,"助研",
    1,"政心期末",
    2,"发政期末",
    3,"助研",
    4,"毕业论文",
    5,"实习报告",
    6,"信息政策课题问题",
    7,"托福",
    8,"申请",
    9,"托福"
};

void Zixi(){
    int tmp = 2, n;
    srand((unsigned int)(time(NULL)));
    n = rand()%8;
    printf("現在去%s自習。\n", places[n].place);
}

void Chifan(){
    int tmp = 2;
    int n;
    srand((unsigned int)(time(NULL)));
    n = rand()%8;
    printf("去%s吃飯。\n", canteen[n].canteen);
}

void Xuexi() {
    int tmp = 2;
    int n;
    srand((unsigned int)(time(NULL)));
    n = rand()%10;
    printf("學習%s%d分鐘。\n", content[n].issue, int(30+rand()%91));
}

int main () {
    opening();
    printf("吃飯輸入1，學習地點輸入2，學習科目輸入3，輸入其他退出。\n");
    int inq;
    scanf("%d", &inq);
    while (inq >= 1 && inq <=3){
        if (inq == 1) Chifan();
        if (inq == 2) Zixi();
        if (inq == 3) Xuexi();
        printf("吃飯輸入1，學習地點輸入2，輸入其他內容退出\n");
        scanf("%d", &inq);
    }  
}