#include "Sample.h"
//メイン関数
int main()
{
	//SampleClass クラスのインスタンス（実態）を作る
	SampleClass a;
	//３つのメンバ関数を呼び出す
	//クラスのインスタンスを特にオブジェクトという
	a.Input();
	a.Plus();
	a.Disp();
}