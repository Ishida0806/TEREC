#pragma once
#include "FileRead.h"

class Map
{
    //  �񋓌^
public:

    //  �z�u�p
    enum class MapData
    {
        Road = 0,
        Wood = 1,
        Player = 2,

        OverID
    };

	//	�ϐ��A
private:
    //  �t�@�C���ǂݍ��ݗp
    FileRead m_fr;

    //  �֐�
public:

    /// <summary>
    /// �}�b�v��\��
    /// </summary>
    void OutPutMap();


};

