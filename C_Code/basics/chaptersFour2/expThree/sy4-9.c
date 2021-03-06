/*
 * @explain: Copyright (c) 2020 WEI.ZHOU. All rights reserved.
 * The following code is only used for learning and communication, not for illegal and commercial use.
 * If the code is used, no consent is required, but the author has nothing to do with any problems 
 * and consequences.
 * 
 * In case of code problems, feedback can be made through the following email address.
 * 						<xiaoandx@gmail.com>
 * 
 * @Description: 编程实现，从键盘上输入一行字符
 * 统计其中英文字母、数字、空格和其它字符的个数
 * @Author: WEI.ZHOU
 * @Date: 2020-11-07 17:51:49
 * @Version: V1.0
 * @LastEditTime: 2020-11-07 18:01:37
 * @LastEditors: WEI.ZHOU
 * @Others: 
 */
#include <stdio.h>
int main(void) {
    int letters = 0, spaces = 0, digits = 0, others = 0;
    char c;
    printf("请输入字符串：");
    while ((c = getchar()) != '\n') {
        if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) {
            letters++;
        } else if (c == ' ') {
            spaces++;
        } else if (c >= '0' && c <= '9') {
            digits++;
        } else {
            others++;
        }
    }
    printf("字母=%d,数字=%d,空格=%d,其他字符=%d\n", letters, digits, spaces, others);
    return 0;
}