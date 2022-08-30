#include "ImgExpression.h"
#include "PhoneExpression.h"
#include "PlusOperation.h"
#include "ValueExpression.h"
#include "WeblinkExpression.h"
#include "Context.h"
#include <string>
using namespace std;

int main(int argc, char *argv[])
{
    Context oContext;
    oContext.assign("Img1", "img王小二照片");
    oContext.assign("Img2", "img蛋糕ing");
    oContext.assign("p1", "13579");
    oContext.assign("p2", "24681");
    oContext.assign("web1", "www.好人.com");
    oContext.assign("web2", "www.food.com");

    ValueExpression* value1 = new ValueExpression("Img1");

    new ImgExpression(new ValueExpression("Img1"));
    new ValueExpression("p1");


    PlusOperation oPlus1();

    return 0;
}
