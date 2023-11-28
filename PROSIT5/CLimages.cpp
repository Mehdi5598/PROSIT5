#include "CLimages.h"
using namespace System;

namespace NS_composants
{
    System::Drawing::Bitmap^ CLimages::acquisitionImage(String^ fichier)
    {
        if (System::IO::File::Exists(fichier))
        {
            return gcnew System::Drawing::Bitmap(fichier);
        }
        else
        {
            return nullptr;
        }
    }

}
