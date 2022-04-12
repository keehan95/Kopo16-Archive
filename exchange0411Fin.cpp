#include <stdio.h>

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
	
	if (menuNumber == 1)
	{
		const float RATE_USD = 1233.1; // 상수는 대문자 단어와 단어 사이는 언더바 
		int outputUsd = 0;
		int changeUW = 0;
		int returnUWon = 0;
		int outputExchangeU = 0;
		float outputDollar = 0;
		outputDollar = inputWon / RATE_USD;
		outputExchangeU = inputWon / RATE_USD;
		changeUW = ((outputDollar - outputExchangeU) * RATE_USD) / 10;
		returnUWon = changeUW * 10;
		
		int oUW1 = returnUWon / 1000;
		int oUW2 = (returnUWon - oUW1 * 1000) /  500;
		int oUW3 = (returnUWon - oUW1 * 1000 - oUW2 * 500) / 100;
		int oUW4 = (returnUWon - oUW1 * 1000 - oUW2 * 500 - oUW3 * 100) / 50;
		int oUW5 = (returnUWon - oUW1 * 1000 - oUW2 * 500 - oUW3 * 100 - oUW4 * 50) / 10;
		
		printf("기준 환율: %.2f\n", RATE_USD);
		printf("%d 원 -> %10d 달러 \n거스름돈 -> %10d 원 \n", inputWon, outputExchangeU, returnUWon);
		printf("1000원 %d개 , 500원 %d개, 100원 %d개, 50원 %d개, 10원 %d개\n", oUW1, oUW2, oUW3, oUW4, oUW5);
		printf("----------------------------------------------------------\n");
	}
	if (menuNumber == 2)
	{
		const float RATE_JPY = 983.69; // 상수는 대문자 단어와 단어 사이는 언더바 
		int outputExchangeJ = 0;
		int changeJW = 0;
	    int returnJWon = 0;
		float outputJPY = 0;
		outputJPY = inputWon * 100 / RATE_JPY ;
		outputExchangeJ = inputWon * 100 / RATE_JPY;
		changeJW = ((outputJPY - outputExchangeJ) * RATE_JPY) / 10; 
		returnJWon = changeJW * 10;
		
		int oJW1 = returnJWon / 1000;
		int oJW2 = (returnJWon - oJW1 * 1000) /  500;
		int oJW3 = (returnJWon - oJW1 * 1000 - oJW2 * 500) / 100;
		int oJW4 = (returnJWon - oJW1 * 1000 - oJW2 * 500 - oJW3 * 100) / 50;
		int oJW5 = (returnJWon - oJW1 * 1000 - oJW2 * 500 - oJW3 * 100 - oJW4 * 50) / 10;
		
		printf("기준 환율: %.2f\n", RATE_JPY);
		printf("%d 원 -> %10d 엔 \n거스름돈 -> %10d 원 \n", inputWon, outputExchangeJ, returnJWon);
		printf("1000원 %d개 , 500원 %d개, 100원 %d개, 50원 %d개, 10원 %d개\n", oJW1, oJW2, oJW3, oJW4, oJW5);
		printf("----------------------------------------------------------\n");
	}
	if (menuNumber == 3)
	{
		const float RATE_EUR = 1342.94; // 상수는 대문자 단어와 단어 사이는 언더바 
		int outputExchangeE = 0;
		int changeEW = 0;
	    int returnEWon = 0;
		float outputEUR = 0;
		outputEUR = inputWon / RATE_EUR;
		outputExchangeE = inputWon / RATE_EUR;
		changeEW = ((outputEUR - outputExchangeE) * RATE_EUR) / 10;
		returnEWon = changeEW * 10;
		
		int oEW1 = returnEWon / 1000;
		int oEW2 = (returnEWon - oEW1 * 1000) /  500;
		int oEW3 = (returnEWon - oEW1 * 1000 - oEW2 * 500) / 100;
		int oEW4 = (returnEWon - oEW1 * 1000 - oEW2 * 500 - oEW3 * 100) / 50;
		int oEW5 = (returnEWon - oEW1 * 1000 - oEW2 * 500 - oEW3 * 100 - oEW4 * 50) / 10;
		
		printf("기준 환율: %.2f\n", RATE_EUR);
		printf("%d 원 -> %10d 유로 \n거스름돈 -> %10d 원 \n", inputWon, outputExchangeE, returnEWon);
		printf("1000원 %d개 , 500원 %d개, 100원 %d개, 50원 %d개, 10원 %d개\n", oEW1, oEW2, oEW3, oEW4, oEW5);
		printf("----------------------------------------------------------\n");
	}
	if (menuNumber == 4)
	{
		const float RATE_CNY = 193.18; // 상수는 대문자 단어와 단어 사이는 언더바 
		int outputExchangeC = 0;
		int changeCW = 0;
	    int returnCWon = 0;
		float outputCNY = 0;
		outputCNY = inputWon / RATE_CNY;
		outputExchangeC = inputWon / RATE_CNY;
		changeCW = ((outputCNY - outputExchangeC) * RATE_CNY) / 10;
		returnCWon = changeCW * 10;
		
		int oCW1 = returnCWon / 1000;
		int oCW2 = (returnCWon - oCW1 * 1000) /  500;
		int oCW3 = (returnCWon - oCW1 * 1000 - oCW2 * 500) / 100;
		int oCW4 = (returnCWon - oCW1 * 1000 - oCW2 * 500 - oCW3 * 100) / 50;
		int oCW5 = (returnCWon - oCW1 * 1000 - oCW2 * 500 - oCW3 * 100 - oCW4 * 50) / 10;
		
		printf("기준 환율: %.2f\n", RATE_CNY);
		printf("%d 원 -> %10d 위안 \n거스름돈 -> %10d 원 \n", inputWon, outputExchangeC, returnCWon);
		printf("1000원 %d개 , 500원 %d개, 100원 %d개, 50원 %d개, 10원 %d개\n", oCW1, oCW2, oCW3, oCW4, oCW5);
		printf("----------------------------------------------------------\n");
	}
	if (menuNumber == 5)
	{
		const float RATE_GBP = 1604.52; // 상수는 대문자 단어와 단어 사이는 언더바 
		int outputExchangeG = 0;
		int changeGW = 0;
	    int returnGWon = 0;
		float outputGBP = 0;
		outputGBP = inputWon / RATE_GBP;
		outputExchangeG = inputWon / RATE_GBP;
		changeGW = ((outputGBP - outputExchangeG) * RATE_GBP) / 10;
		returnGWon = changeGW * 10;
		
		int oGW1 = returnGWon / 1000;
		int oGW2 = (returnGWon - oGW1 * 1000) /  500;
		int oGW3 = (returnGWon - oGW1 * 1000 - oGW2 * 500) / 100;
		int oGW4 = (returnGWon - oGW1 * 1000 - oGW2 * 500 - oGW3 * 100) / 50;
		int oGW5 = (returnGWon - oGW1 * 1000 - oGW2 * 500 - oGW3 * 100 - oGW4 * 50) / 10;
		
		printf("기준 환율: %.2f\n", RATE_GBP);
		printf("%d 원 -> %10d 파운드 \n거스름돈 -> %10d 원 \n", inputWon, outputExchangeG, returnGWon);
		printf("1000원 %d개 , 500원 %d개, 100원 %d개, 50원 %d개, 10원 %d개\n", oGW1, oGW2, oGW3, oGW4, oGW5);
		printf("----------------------------------------------------------\n");
	}
	return 0;
}
