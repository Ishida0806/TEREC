#pragma once
#include "FileRead.h"

class Map
{
    //  列挙型
public:

    //  配置用
    enum class MapData
    {
        Road = 0,
        Wood = 1,
        Player = 2,

        OverID
    };

	//	変数、
private:
    //  ファイル読み込み用
    FileRead m_fr;

    //  関数
public:

    /// <summary>
    /// マップを表示
    /// </summary>
    void OutPutMap();


};

