#include<stdio.h>
#include<string.h>
#include<algorithm>
using namespace std;

int t;
char map[10001][20];//�洢�������ɫ��
int sum[10001];

int main()
{
    while (~scanf_s("%d", &t) && t)
    {
        memset(sum, 0, sizeof sum);
        int i, j;
        for (i = 0; i < t; i++)
        {
            scanf_s("%s", map[i]);
            for (j = 0; j < i - 1; j++)
            {
                if (strcmp(map[i], map[j]) == 0)//������������ɫ����ǰ���ֹ���������бȽϣ������ɫ��ͬ�ͼ�1��
                    sum[i] = sum[i] + 1;//ǰ���û����һ����ɫ��ͬ�ģ������ɫ����������ͼ�1��
            }
        }
        int s = 0;
        for (i = 0; i < t; i++)//���б������ҳ����ִ���������ɫ��
        {
            if (sum[i] > s)
            {
                s = i;//��ǳ��ִ���������ɫ�ǵڼ�������
            }
        }
        printf("%s\n", map[s]);//�������������ɫ��
    }
    return 0;
}