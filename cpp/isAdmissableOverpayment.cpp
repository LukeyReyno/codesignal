#include <vector>
#include <string>
#include <sstream>
#include <cstdlib>

using namespace std;

double analyzePayment(double price, string note)
{
   string percent, type;
   istringstream stm(note);

   getline(stm, percent, ' ');
   getline(stm, type, ' ');

   if (type == "lower")
   {
      double original = (price / (1 - (atoi(percent.c_str()) / 100.0)));
      return price - original;
   }

   if (type == "higher")
   {
      double original = (price / (1 + (atoi(percent.c_str()) / 100.0)));
      return price - original;
   }
   
   return 0;
}

bool isAdmissibleOverpayment(vector<double> prices, vector<string> notes, double x)
{
   double priceDifferences = 0;
   for (unsigned i = 0; i < prices.size(); i++)
      priceDifferences += (analyzePayment(prices[i], notes[i]));
   if (priceDifferences - x < 0.00000000001) // approximate
      return x != 0;
   return priceDifferences <= x;
}
