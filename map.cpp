#include "map.h"
// #include "chancetile.h"
// #include "communitychesttile.h"
// #include "countrytile.h"
// #include "jailtile.h"
// #include "starttile.h"
// #include "transportstationtile.h"


Map::Map(QObject *parent)
    : QObject{parent}
{
    tiles.clear();
    tiles.apend({});

}
