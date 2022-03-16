#include <TH1I.h>
#include <TCanvas.h>
#include <fstream>
using namespace std;
void tempOnDay()
{
    TH1I *hist=new TH1I("temperature", "Temperature; Temperature[#circC]; Entries", 300, -30, 40);
    ifstream inp;
    double x;
    inp.open("lund.txt");
    hist->SetFillColor(kRed+1);
    while (inp >> x)
    {
        /* code */
        hist->Fill(x);
    }
    TCanvas *can=new TCanvas();
    hist->Draw();
    inp.close();
}