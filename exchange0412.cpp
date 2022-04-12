#include <stdio.h>

void outputWon(int returnWon) {
	int oW1 = returnWon / 1000;
	int oW2 = (returnWon - oW1 * 1000) /  500;
	int oW3 = (returnWon - oW1 * 1000 - oW2 * 500) / 100;
	int oW4 = (returnWon - oW1 * 1000 - oW2 * 500 - oW3 * 100) / 50;
	int oW5 = (returnWon - oW1 * 1000 - oW2 * 500 - oW3 * 100 - oW4 * 50) / 10;
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
	
	float outputDollar = 0;
	float outputJPY = 0;
	float outputEUR = 0;
	float outputCNY = 0;
	float outputGBP = 0;
	
	if (menuNumber == 1)
	{
		float outputUSD = inputWon / RATE_USD;
		int outputExchangeU = (int)outputUSD;
		int changeUW = ((outputDollar - outputExchangeU) * RATE_USD) / 10;
		int returnWon = changeUW * 10;
		printf("기준 환율: %.2f\n", RATE_USD);
		printf("%d 원 -> %10d 달러 \n거스름돈 -> %10d 원 \n", inputWon, outputExchangeU, returnWon);
		outputWon(returnWon);
		printf("----------------------------------------------------------\n");
	}
	if (menuNumber == 2)
	{
		float outputJPY = inputWon / (RATE_JPY / 100);
		int outputExchangeJ = (int)outputJPY;
		int changeJW = ((outputJPY - outputExchangeJ) * RATE_JPY) / 10; 
		int returnWon = changeJW * 10;
		printf("기준 환율: %.2f\n", RATE_JPY);
		printf("%d 원 -> %10d 엔 \n거스름돈 -> %10d 원 \n", inputWon, outputExchangeJ, returnWon);
		outputWon(returnWon);
		printf("----------------------------------------------------------\n");
	}
	if (menuNumber == 3)
	{
		float outputEUR = inputWon / RATE_EUR;
		int outputExchangeE = (int)outputEUR;
		int  changeEW = ((outputEUR - outputExchangeE) * RATE_EUR) / 10;
		int returnWon = changeEW * 10;
		printf("기준 환율: %.2f\n", RATE_EUR);
		printf("%d 원 -> %10d 유로 \n거스름돈 -> %10d 원 \n", inputWon, outputExchangeE, returnWon);
		outputWon(returnWon);
		printf("----------------------------------------------------------\n");
	}
	if (menuNumber == 4)
	{
		float outputCNY = inputWon / RATE_CNY;
		int outputExchangeC = (int)outputCNY;
		int changeCW = ((outputCNY - outputExchangeC) * RATE_CNY) / 10;
		int returnWon = changeCW * 10;
		printf("기준 환율: %.2f\n", RATE_CNY);
		printf("%d 원 -> %10d 위안 \n거스름돈 -> %10d 원 \n", inputWon, outputExchangeC, returnWon);
		outputWon(returnWon);
		printf("----------------------------------------------------------\n");
	}
	if (menuNumber == 5)
	{
		float outputGBP = inputWon / RATE_GBP;
		int outputExchangeG = (int)outputGBP;
		int changeGW = ((outputGBP - outputExchangeG) * RATE_GBP) / 10;
		int returnWon = changeGW * 10;
		printf("기준 환율: %.2f\n", RATE_GBP);
		printf("%d 원 -> %10d 파운드 \n거스름돈 -> %10d 원 \n", inputWon, outputExchangeG, returnWon);
		outputWon(returnWon);
		printf("----------------------------------------------------------\n");
	}
	return 0;
}
