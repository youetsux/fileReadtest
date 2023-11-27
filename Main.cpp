
# include <Siv3D.hpp> // OpenSiv3D v0.6.10
#include <fstream>
#include <vector>

using std::string;
using std::ifstream;
using std::cout;
using std::endl;
using std::vector;

void Main()
{
	// 背景の色を設定する | Set the background color
	Scene::SetBackground(ColorF{ 0.6, 0.8, 0.7 });

	// 太文字のフォントを作成する | Create a bold font with MSDF method
	const Font font{ FontMethod::MSDF, 30, Typeface::Light };
	ifstream InputFile;
	string fileName = "output.txt";
	InputFile.open(fileName, std::ios::in); //ファイルオープン
	if (InputFile.fail())//エラー処理は大事
	{
		Console.open();
		cout << "ファイルオープンに失敗" << endl;
		exit(0);
	}
	Console.open();
	string inputData;
	InputFile >> inputData;
	cout << inputData << endl;
	InputFile >> inputData;
	cout << inputData << endl;
	InputFile >> inputData;
	cout << inputData << endl;
	InputFile >> inputData;
	cout << inputData << endl;
	InputFile.close();


	while (System::Update())
	{

	}
}


