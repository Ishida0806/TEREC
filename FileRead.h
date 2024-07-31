
#include <iostream>
#include <fstream>
#include <string>

class FileRead
{
public:

	FileRead() = default;
	~FileRead() = default;

	void Read(const std::string& FileName)
	{
		std::ifstream	file(FileName);
		std::string		line;

		int y = 0;

		while (std::getline(file, line, ',')) {
			for (int x = 0; x < line.length(); x++) {
				map[x][y] = std::stoi(line);
			}
			y++;
		}

		file.close();
	}


	int* GetArray() { return *map; }
	int  GetRaw() { return raw; }
	int  GetWidth() { return width; }

private:

	int raw = 5;
	int width = 5;
	int map[5][5] = { 0 };
};