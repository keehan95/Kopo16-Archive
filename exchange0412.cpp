#include <stdio.h>

void outputWon(float changeRate,int inputWon, const char *unit) {
	float outputMoney = inputWon / changeRate;
	int outputExchange = (int)outputMoney;
	int changeMW = ((outputMoney - outputExchange) * changeRate) / 10;
	int returnWon = changeMW * 10;
	int oW1 = returnWon / 1000;
	int oW2 = (returnWon - oW1 * 1000) /  500;
	int oW3 = (returnWon - oW1 * 1000 - oW2 * 500) / 100;
	int oW4 = (returnWon - oW1 * 1000 - oW2 * 500 - oW3 * 100) / 50;
	int oW5 = (returnWon - oW1 * 1000 - oW2 * 500 - oW3 * 100 - oW4 * 50) / 10;
	printf("���� ȯ��: %.2f\n", changeRate);
	printf("%d �� -> %10d %s \n�Ž����� -> %10d �� \n", inputWon, outputExchange, unit, returnWon);
	printf("1000�� %d�� , 500�� %d��, 100�� %d��, 50�� %d��, 10�� %d��\n", oW1, oW2, oW3, oW4, oW5);
}
int main() {
	
	printf("ȯ���� ���ϴ� ��ȭ �ݾ��� �Է��ϼ��� : ");
	int inputWon = 0;
	scanf("%d", &inputWon);
	int menuNumber = 0;
	do {
		printf("ȯ���� ��ȭ�� �����ϼ��� (1: USD, 2.: JPY, 3. EUR, 4:CNY, 5: GBP): ");
		scanf("%d", &menuNumber);
	}while(menuNumber < 1 || menuNumber > 5);
	
	printf("\n");
	const float RATE_USD = 1233.1;  // ����� �빮�� �ܾ�� �ܾ� ���̴� ����� 
	const float RATE_JPY = 9.87;
	const float RATE_EUR = 1342.94;
	const float RATE_CNY = 193.18; 
	const float RATE_GBP = 1604.52; 
	//const char *USD = "�޷�"; const char *JPY = "��"; const char *EUR = "����"; const char *CNY = "����"; const char *GBP = "�Ŀ��"; 
	switch (menuNumber)
	{
	case 1:
		outputWon(RATE_USD, inputWon, "�޷�");
		break;
	case 2:
		outputWon(RATE_JPY, inputWon, "��");
		break;
	case 3:
		outputWon(RATE_EUR, inputWon, "����");
		break;
	case 4:
		outputWon(RATE_CNY, inputWon, "����");
		break;
	case 5:
		outputWon(RATE_GBP, inputWon, "�Ŀ��");
		break;
	}
}
