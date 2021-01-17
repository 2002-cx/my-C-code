#include<stdio.h>
#include<Windows.h>
int main()
{
	int i;
	char name[100];
	printf("请输入您要轰炸的ID：");
	scanf_s("%s",&name,40);
	printf("请输入您要轰炸的次数：");
	scanf_s("%d", &i);
	HWND H = FindWindow(0, name);//找到对话窗口
	while (i-- > 0)
	{
		SendMessage(H,WM_PASTE,0,0);//粘贴内容
		SendMessage(H, WM_KEYDOWN, VK_RETURN, 0);//回车发送
		Sleep(5);//延迟一秒打印
	}
}