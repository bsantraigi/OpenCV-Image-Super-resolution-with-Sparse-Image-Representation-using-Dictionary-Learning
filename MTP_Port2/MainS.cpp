#include "CommonHeader.h"
#define ck(s) std::cout<<s<<endl
using namespace cv;
using namespace std;

Timer timer;

int main( int argc, char** argv )
{	
	ImLoader imloader(16, 4);
	//Mat image = imloader.LoadImage(1, 32);
	//Utilities::DisplayMat(image);
	ck("WTF");
	vector<vector<double>> fMat = imloader.GetDataMatrix();

	// My code
	timer.start();
	timer.stop();	
	
    waitKey(0); // Wait for a keystroke in the window
    return 0;
}