#pragma once
#using <System.Drawing.dll>

using namespace System;
using namespace System::Drawing;

namespace NS_composants
{
    public ref class CLimages
    {
    public:
        Bitmap^ acquisitionImage(String^ fichier);
    };
}
