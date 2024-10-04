#include "map.h"
// #include "chancetile.h"
// #include "communitychesttile.h"
 #include "countrytile.h"
// #include "jailtile.h"
#include "starttile.h"
// #include "transportstationtile.h"


Map::Map(QObject *parent)
    : QObject{parent}
{
    tiles.clear();

    tiles.append(new StartTile(this, "起始位置"));
    // 添加4个不同的国家
    QMap<quint32, quint32> rentMap1 = {{1, 100}, {2, 200}, {3, 300}};
    QMap<quint32, quint32> rentMap2 = {{1, 150}, {2, 250}, {3, 350}};
    QMap<quint32, quint32> rentMap3 = {{1, 200}, {2, 300}, {3, 400}};
    QMap<quint32, quint32> rentMap4 = {{1, 250}, {2, 350}, {3, 450}};

    tiles.append(new CountryTile(this, "国家A", 500, rentMap1, 1));
    tiles.append(new CountryTile(this, "国家B", 600, rentMap2, 1));
    tiles.append(new CountryTile(this, "国家C", 700, rentMap3, 1));
    tiles.append(new CountryTile(this, "国家D", 800, rentMap4, 1));
}
