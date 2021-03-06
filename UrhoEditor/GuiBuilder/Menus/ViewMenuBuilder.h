#pragma once

#include "../GuiBuilder.h"

namespace SprueEditor
{

    class ViewMenuBuilder : public GuiBuilder
    {
    public:
        virtual void Build(UrhoEditor* editor) override;
    };

}