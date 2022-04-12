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
	printf("기준 환율: %.2f\n", changeRate);
	printf("%d원 -> %10d %s \n 거스름돈 -> %10d 원 \n", inputWon, outputExchange, unit, returnWon);
	printf("1000원 %d개 , 500원 %d개, 100원 %d개, 50원 %d개, 10원 %d개\n", oW1, oW2, oW3, oW4, oW5);
}
int main() {
	
	printf("환전을 원하는 원화 금액을 입력하세요 : ");
	int inputWon = 0;
	scanf("%d", &inputWon);
	int menuNumber = 0;
	do {
		printf("환전할 외화를 선택하세요 (1: USD, 2.: JPY, 3. EUR, 4:CNY, 5: GBP): ");
		scanf("%d", &menuNumber);
	}while(menuNumber < 1 || menuNumber > 5);
	
	printf("\n");
	const float RATE_USD = 1233.1;  // 상수는 대문자 단어와 단어 사이는 언더바 
	const float RATE_JPY = 987.87;
	const float RATE_EUR = 1342.94;
	const float RATE_CNY = 193.18; 
	const float RATE_GBP = 1604.52; 
	
	switch (menuNumber)
	{
	case 1:
		outputWon(RATE_USD, inputWon, "달러");
		break;
	case 2:
		outputWon(RATE_JPY, inputWon * 100, "엔");
		break;
	case 3:
		outputWon(RATE_EUR, inputWon, "유로");
		break;
	case 4:
		outputWon(RATE_CNY, inputWon, "위안");
		break;
	case 5:
		outputWon(RATE_GBP, inputWon, "파운드");
		break;
	}
}
