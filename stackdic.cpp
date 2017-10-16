#include "stackdic.h"

 stackdic ::stackdic()
{
    top=-1;
    elements [Max];
}
void stackdic ::push(int e)
{
    top++;
    elements[top]=e;
}
int stackdic ::pop()
{

    int x = elements[top--];
    return x;
}
bool stackdic::isstackfull()
{
    if (top==Max-1)
        return true;
        else
            return false;
}
bool stackdic::isstackEmpty()
{
    if (top==-1)
        return true;
        else
            return false;
}
void stackdic ::display()
{
    while(top!=-1)
        cout<<pop()<<" ";

}
