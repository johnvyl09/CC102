#include <iostream>
using namespace std;

int main()
{
	double sugarPriceUSD, ricePricePound, sardinesPricePound, coffeePriceUSD, milkPriceUSD;
	int sugarQty, riceQty, sardinesQty, coffeeQty, milkQty;
	double usdToPhp, poundToPhp;
		
	cout << "*******************************************************************************" << endl;
		
	cout << "Enter the price of sugar (In USD)\t\t: ";
	cin >> sugarPriceUSD;
	
	cout << "Enter the price of the rice (In pound)\t\t: ";
	cin >> ricePricePound;
	
	cout << "Enter the price of the sardines (In pound)\t: ";
	cin >> sardinesPricePound;
	
	cout << "Enter the price of the coffee (In USD)\t\t: ";
	cin >> coffeePriceUSD;
	
	cout << "Enter the price of the milk (In USD)\t\t: ";
	cin >> milkPriceUSD;
	
	cout << "*******************************************************************************" << endl;
	
	cout << "Enter the quality of the sugar purchased \t: ";
	cin >> sugarQty;
	
	cout << "Enter the quality of the rice purchased\t\t: ";
	cin >> riceQty;
	
	cout << "Enter the quality of the sardines purchased\t: ";
	cin >> sardinesQty;
	
	cout << "Enter the quality of the coffee purchased\t: ";
	cin >> coffeeQty;
	
	cout << "Enter the quality of the milk purchased\t\t: ";
	cin >> milkQty;
	
	cout << "*******************************************************************************" << endl;
	
	cout << "Enter the USD to PHP conversion rate\t\t: ";
	cin >> usdToPhp;
	
	cout << "Enter the Pound to PHP conversion rate\t\t: ";
	cin >> poundToPhp;
	
	cout << "*******************************************************************************" << endl;
	
	double sugarCostPHP = sugarPriceUSD * usdToPhp * sugarQty;
	double riceCostPHP = ricePricePound * poundToPhp * riceQty;
	double sardinesCostPHP = sardinesPricePound * poundToPhp * sardinesQty;
	double coffeeCostPHP = coffeePriceUSD * usdToPhp * coffeeQty;
	double milkCostPHP = milkPriceUSD * usdToPhp * milkQty;
	
	double totalcostPHP = sugarCostPHP + riceCostPHP + sardinesCostPHP + coffeeCostPHP + milkCostPHP;
	
	cout << "\nPurchase Details:\n";
	
	cout << "Sugar\t: " << sugarQty << " x " << sugarPriceUSD * usdToPhp << " PHP = " << sugarCostPHP << " PHP\n";
	cout << "Rice\t: " << riceQty << " x " << ricePricePound * poundToPhp << " PHP = " << riceCostPHP << " PHP\n";
	cout << "Sardines: " << sardinesQty << " x " << sardinesPricePound * poundToPhp << " PHP = " << sardinesCostPHP << " PHP\n";
	cout << "Coffee\t: " << coffeeQty << " x " << coffeePriceUSD * usdToPhp << " PHP = " << coffeeCostPHP << " PHP\n";
	cout << "Milk\t: " << milkQty << " x " << milkPriceUSD * usdToPhp << " PHP = " << milkCostPHP << " PHP\n";
	
	cout << "*******************************************************************************" << endl;
	
	cout << "\nTotal amount to be paid\t\t\t: " << totalcostPHP << " PHP\n";
	
	return 0;
}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	