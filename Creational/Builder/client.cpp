#include "desktopbuilder.hpp"
#include "hpdesktopbuilder.hpp"
#include "delldesktopbuilder.hpp"
#include "desktopdirector.hpp"

int main(){
    Hpdesktopbuilder*hpdesktopbuilder= new Hpdesktopbuilder();
    Delldesktopbuilder*delldesktopbuilder =new Delldesktopbuilder();

    Desktopdirector*director1=new  Desktopdirector(hpdesktopbuilder);
    Desktopdirector*director2 = new Desktopdirector(delldesktopbuilder);

    Desktop*desktop1 = director1->Builddesktop();
    Desktop*desktop2 =director2->Builddesktop();

    desktop1->showspecs();
    desktop2->showspecs();
}
