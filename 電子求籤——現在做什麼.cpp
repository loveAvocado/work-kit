#include <cstdio>
#include <cstdlib>
#include <ctime>
#define charMAX 1000
using namespace std;

struct Augur {    
    int number;
    char issue[charMAX];
    } 
    qian[10] = {
        0,"计算概论",
        1,"政心期末",
        2,"发政期末",
        3,"助研",
        4,"毕业论文",
        5,"实习报告",
        6,"信息政策课题问题",
        7,"托福",
        8,"申请",
        9,"计概"
    };

int main () {
    // int an; //籤數
    // scanf("%d", &an);
    int n;
    int i=2;
    srand((unsigned int)(time(NULL)));  //将种子设置为2后，输出结果恒为8 申请，不设置时恒定为4 毕业论文。为使其变化，设置为time() 。
    n = rand()%11;
    printf("抽中%d号签——%s: ", qian[n].number , qian[n].issue );
    printf("%d分钟\n", int(30 + rand()% 91));
    return 0;
}