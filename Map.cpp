
#include <iostream>
#include "Map.h"


/// <summary>
/// �}�b�v��\��
/// </summary>
void Map::OutPutMap()
{
    m_fr.Read("Resouces/map.csv");

    int* s = m_fr.GetArray();

    for (int y = 0; y < m_fr.GetRaw(); ++y)
    {
        for (int x = 0; x < m_fr.GetWidth(); ++x)
        {
            int mapData = s[y * m_fr.GetWidth() + x];

            MapData md = static_cast<MapData>(mapData);

            switch (md)
            {
            case MapData::Road:   std::cout << "��"; break;
            case MapData::Wood:   std::cout << "��"; break;
            case MapData::Player: std::cout << "�V"; break;
            case MapData::OverID:                    break;
            default:                                 break;
            }

        }
        std::cout << std::endl;
    }

    system("pause");
}
