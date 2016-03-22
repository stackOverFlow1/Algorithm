//
//  main.cpp
//  algorithm-unit3
//
//  Created by azx on 15/12/11.
//  Copyright (c) 2015年 azx. All rights reserved.
//

//MARK: ------------------ 习题3-1 ---- UVa1585 ------------------------

#include <stdio.h>
#include <string.h>
#define maxn 85
char s[maxn];

int main()
{
    int T;
    scanf("%d", &T);
    while (T--) {
        int score = 0;
        scanf("%s", s);
        int count = 0;
        for (int i = 0; i < strlen(s); i++) {
            if (s[i] == 'O') {
                score += ++count;
            } else {
                count = 0;
            }
        }
        printf("%d\n", score);
    }
    return 0;
}


//MARK: ------------------- 习题3-2 -- UVa1586 --------------------------

//#include <stdio.h>
//#include <ctype.h>
//#include <string.h>
//
//#define maxn 85
//char s[maxn];
//
//double mass(char c) {
//    switch (c) {
//        case 'C':
//            return 12.01;
//            break;
//        case 'H':
//            return 1.008;
//            break;
//        case 'O':
//            return 16.00;
//            break;
//        case 'N':
//            return 14.01;
//            break;
//    }
//    return 0;
//}
//
//int main()
//{
//    int T;
//    scanf("%d", &T);
//    while (T--) {
//        double molarMass = 0;
//        scanf("%s", s);
//        for (int i = (int)strlen(s) - 1; i >= 0; i--) {
//            if (isdigit(s[i]) && !isdigit(s[i-1])) {
//                molarMass += mass(s[i-1]) * (s[i] - '0'); // stdlib.h中的atoi函数亦可将字符串转化为数字
//                i--;
//            } else if (isdigit(s[i]) && isdigit(s[i-1])) {
//                molarMass += mass(s[i-2]) * ((s[i-1] - '0')*10 + (s[i] - '0'));
//                i -= 2;
//            } else {
//                molarMass += mass(s[i]);
//            }
//        }
//        printf("%.3lf\n", molarMass);
//    }
//    return 0;
//
//}


//MARK: ------------------ 习题3-3 -- UVa1225 -----------------------------

// 编译器不支持itoa，故用C++里stringstream的方法将数字转字符串
//#include <stdio.h>
//#include <string>
//#include <iostream>
//#include <sstream>
//
//using namespace std;
//
//int main()
//{
//    int T, N;
//    scanf("%d", &T);
//    while (T--) {
//        scanf("%d", &N);
//        string s;
//        stringstream iss;
//        for (int i = 1; i <= N; i++) {
//            string temp;
//            iss << i;
//            iss >> temp;
//            s += temp;
//            iss.clear();
//        }
//        int zero=0, one=0, two=0, three=0, four=0, five=0, six=0, seven=0, eight=0, nine=0;
//        for (int i = 0; i < s.size(); i++) {
//            if (s[i] == '0') {
//                zero++;
//            } else if (s[i] == '1') {
//                one++;
//            } else if (s[i] == '2') {
//                two++;
//            } else if (s[i] == '3') {
//                three++;
//            } else if (s[i] == '4') {
//                four++;
//            } else if (s[i] == '5') {
//                five++;
//            } else if (s[i] == '6') {
//                six++;
//            } else if (s[i] == '7') {
//                seven++;
//            } else if (s[i] == '8') {
//                eight++;
//            } else if (s[i] == '9') {
//                nine++;
//            }
//        }
//        printf("%d %d %d %d %d %d %d %d %d %d\n", zero, one, two, three, four, five, six, seven, eight, nine);
//    }
//    return 0;
//}



//MARK: ------------------- 习题3-4 -- UVa455 --------------------------

//#include <stdio.h>
//#include <string.h>
//
//#define maxn 85
//char s[maxn];
//
//int main()
//{
//    int N;
//    scanf("%d", &N);
//    while (N--) {
//        scanf("%s", s);
//        for (int k = 1; k <= strlen(s); k++) {
//            if (!(strlen(s) % k)) { // 看长度能不能整除i
//                int x[k];
//                bool isResult = true;
//                for (int j = 0; j < k; j++) {
//                    x[j] = s[j];
//                }
//                for (int d = 0; d < strlen(s); d += k) {
//                    for (int c = d; c < k + d; c++) {
//                        if (x[c%k] != s[c]) {   // 以i长度划分小组，比较各小组是否相等
//                            isResult = false;
//                        }
//                    }
//                }
//                if (isResult) {
//                    printf("%d\n", k);
//                    break;
//                }
//            }
//        }
//        if (N > 0) {
//            printf("\n");  // output的格式。。。因为这个WA了5次。。不能更傻逼了
//        }
//    }
//    return 0;
//}



//MARK: --------------- 习题3-5 -- UVa227---------------------


//#include <stdio.h>
//#include <string.h>
//
//char s[6][6];
//char command[1000];
//
//
//int main()
//{
//
//    int x = 0, y = 0, count = 0;
//
//    while (++count) {     // 输入直到遇上'Z'
//        gets(s[0]);
//        if (s[0][0] == 'Z') {
//            break;
//        }
//        gets(s[1]);
//        gets(s[2]);
//        gets(s[3]);
//        gets(s[4]);
//        
//        for (int i = 0; i < 5; i++) {
//            for (int j = 0; j < 5; j++) {
//                if (s[i][j] == ' ') {
//                    x = i;
//                    y = j;
//                }
//            }
//        }
//        
//        bool illegalMove = false;
//        bool toBeContinued = true;
//        while (toBeContinued) {
//            gets(command);
//            if (command[strlen(command)-1] == '0') { // 检查这一行指令的最后一个字符，如果是0，则终止输入
//                toBeContinued = false;
//            }
//            
//            for (int i = 0; i < strlen(command); i++) {
//                if (command[i] == 'A') {
//                    char temp = s[x][y];
//                    s[x][y] = s[x-1][y];
//                    s[x-1][y] = temp;    // 根据指令来交换相邻的方块
//                    x--;
//                    if (x < 0) {        // 检查是否出界
//                        illegalMove = true;
//                    }
//                } else if (command[i] == 'B') {
//                    char temp = s[x][y];
//                    s[x][y] = s[x+1][y];
//                    s[x+1][y] = temp;
//                    x++;
//                    if (x > 4) {
//                        illegalMove = true;
//                    }
//                } else if (command[i] == 'L') {
//                    char temp = s[x][y];
//                    s[x][y] = s[x][y-1];
//                    s[x][y-1] = temp;
//                    y--;
//                    if (y < 0) {
//                        illegalMove = true;
//                    }
//                } else if (command[i] == 'R') {
//                    char temp = s[x][y];
//                    s[x][y] = s[x][y+1];
//                    s[x][y+1] = temp;
//                    y++;
//                    if (y > 4) {
//                        illegalMove = true;
//                    }
//                }
//                
//                if (illegalMove) {
//                    break;
//                }
//            }
//            
//        }
//        
//        if (count > 1) {  // 注意输出啊。。。又因为这WA5次。。。
//            printf("\n");
//        }
//        
//        printf("Puzzle #%d:\n", count);
//        if (illegalMove) {
//            printf("This puzzle has no final configuration.\n");
//        } else {
//            for (int i = 0; i < 5; i++) {
//                for (int j = 0; j < 5; j++) {
//                    if (j == 4) {
//                        printf("%c", s[i][j]);
//                    } else {
//                        printf("%c ", s[i][j]);
//                    }
//                }
//                printf("\n");
//            }
//        }
//    }
//    return 0;
//}



// MARK: ----------------- 习题3-6 -- UVa232 --------------------- not yet AC !!!!!!!!



//#include <stdio.h>
//#include <string.h>
//
//char s[11][11];
//int value[11][11];
//
//int main()
//{
//    int times = 0;
//    while (++times) {
//        memset(value, 0, sizeof(value));
//        
//        int r, c;
//        scanf("%d", &r);
//        if (r == 0) {
//            break;
//        }
//        scanf("%d", &c);
//        
//        for (int i = 0; i < r; i++) {
//            scanf("%s", s[i]);
//        }
//
//        int count = 0;
//        for (int y = 0; y < r; y++) {  //  Across
//            for (int x = 0; x < c; x++) {
//                if (s[y][x] != '*' && (y == 0 || x - 1 < 0 || y - 1 < 0 || s[y-1][x] == '*' || s[y][x-1] == '*')) { // 不为黑且eligible, 且先检查左边条件，故不会出现数组越界
//                    value[y][x] = ++count;
//                }
//            }
//        }
//        
//        
//        
//        if (times > 1) {
//            printf("\n");
//        }
//        printf("Puzzle #%d:\n", times);
//        printf("Across\n");
//        
//        for (int y = 0; y < r; y++) {  // Across
//            bool previousBlack = true;
//            for (int x = 0; x < c; x++) {
//                if (s[y][x] != '*') {             // 过滤前面的黑块
//                    previousBlack = false;
//                }
//                
//                if (s[y][x] != '*') {
//                    printf("%3d.%c", value[y][x], s[y][x]);
//                    while (x < c - 1 && s[y][++x] != '*') {
//                        printf("%c", s[y][x]);  // 一直往右打印直到'*'
//                    }
//                }
//                
//                if (!previousBlack && s[y][x] == '*' && x != c - 1 && s[y][x+1] != '*') { //不处于最后且不连续的黑块
//                    printf("\n");
//                }
//            }
//            printf("\n");
//        }
//        
//        //  以下为Down的
//        
//        printf("Down\n");
//    
//        for (int y = 0; y < r; y++) {
//            for (int x = 0; x < c; x++) {
//                if (s[y][x] != '*' && value[y][x] != 0) {
//                    printf("%3d.%c", value[y][x], s[y][x]);
//                    int temp = y;
//                    while (s[++temp][x] != '*' && temp < r) {
//                        printf("%c", s[temp][x]);   // 遇到非'*'的字符，一直往下打印，直至
//                        value[temp][x] = 0;        // 遇到'*'或列尾，并将打印过的字符去掉(设为0)
//                    }
//                    printf("\n");
//                }
//            }
//        }
//    }
//    return 0;
//}




//MARK: ---------------- 习题3-7 -- UVa1368 -------------------

//#include <stdio.h>
//
//char s[55][1005];
//
//int main()
//{
//    int T, m, n;
//    scanf("%d", &T);
//    while(T--) {
//        scanf("%d%d", &m, &n);
//        for (int i = 0; i < m; i++) {
//            scanf("%s", s[i]);
//        }
//        char res[n];
//        int hamDis = 0;
//        for (int i = 0; i < n; i++) {
//            int a = 0, t = 0, c = 0, g = 0;
//            for (int j = 0; j < m; j++) {
//                if (s[j][i] == 'A') a++;
//                if (s[j][i] == 'T') t++;
//                if (s[j][i] == 'C') c++;
//                if (s[j][i] == 'G') g++;
//            }
//            if (a >= t && a >= c && a >= g) {
//                res[i] = 'A';
//                hamDis += m - a;
//            } else if (c >= t && c >= g) {
//                res[i] = 'C';
//                hamDis += m - c;
//            } else if (g >= t) {
//                res[i] = 'G';
//                hamDis += m - g;
//            } else {
//                res[i] = 'T';
//                hamDis += m - t;
//            }
//        }
//        
//        for (int i = 0; i < n; i++) {
//            printf("%c", res[i]);
//        }
//        printf("\n%d\n", hamDis);
//    }
//    return 0;
//}




//MARK: -----------习题3-8 -- UVa202---------------------

#include <stdio.h>

double m[10000];

int main()
{
    int n, d;
    while (scanf("%d%d", &n, &d) == 2) {
        
        int num = 1;
        int start = 2;
        
        double ii = double(n)/d;
        long double dd = ii - int(ii);
        double compare = dd;
        bool foundResult = false;
        for (int i = 1; i <= 1000; i++) {
            compare *= 10;
            if (dd == compare - int(compare)) {
                num = i + 1;
                foundResult = true;
                break;
            }
        }
        
        
        if (!foundResult) {
            double i = double(n)/d;
            double decimals = i - int(i);
            m[1] = decimals;
            
            bool end = false;
            while (!end && ++num) {
                i *= 10;
                decimals = i - int(i);
                m[num] = decimals;
                for (int j = 1; j < num; j++) {
                    if (decimals == m[j]) {
                        start = j;
                        end = true;
                    }
                }
            }
        }
        printf("%d/%d = %d.", n, d, int(n/d));
        
        if (num - start <= 50) {
            for (int i = 2; i <= num; i++) {
                m[1] *= 10;
                printf("%d", int(m[1])%10);
                if (i == start) { printf("("); }
                if (i == num) { printf(")"); }
            }
        } else {
            for (int i = 2; i <= 51; i++) {
                m[1] *= 10;
                printf("%d", int(m[1])%10);
                if (i == start) { printf("("); }
            }
            printf("...)");
        }
        printf("\n%4d = number of digits in repeating cycle\n", num - start);
    }
    return 0;
}


















