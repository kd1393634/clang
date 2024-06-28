#include <stdio.h>
enum BitState
{
	Base=0,		//00000000 通常
	Poison=1<<0,	//00000001どく
	Sleep=1<<1,		//00000010ねむり
	Paralysis=1<<2,	//00000100まひ
	Burn=1<<3,		//00001000やけど
	AtkUp=1<<4,		//00010000攻撃力アップ
	AtkDown=1<<5,	//攻撃力ダウン
};
typedef unsigned int UINT;
void DisplayStatus(UINT s);
void ChangeFlag(UINT* s);
void ClearFlag(UINT* s);
main()
{
	UINT myState = Base;
	ChagFlag(&MyState);
	DisplayStatus(MyState);
}
