/********************************************************************
 KWin - the KDE window manager
 This file is part of the KDE project.

 Copyright (C) 2008 Martin Gräßlin <ubuntu@martin-graesslin.com

This program is free software; you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation; either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*********************************************************************/

#ifndef KWIN_FLIPSWITCH_CONFIG_H
#define KWIN_FLIPSWITCH_CONFIG_H

#define KDE3_SUPPORT
#include <kcmodule.h>
#undef KDE3_SUPPORT

#include "ui_flipswitch_config.h"

namespace KWin
{

class FlipSwitchEffectConfigForm : public QWidget, public Ui::FlipSwitchEffectConfigForm
{
    Q_OBJECT
    public:
        explicit FlipSwitchEffectConfigForm(QWidget* parent);
};

class FlipSwitchEffectConfig : public KCModule
    {
    Q_OBJECT
    public:
        explicit FlipSwitchEffectConfig(QWidget* parent = 0, const QVariantList& args = QVariantList());
        ~FlipSwitchEffectConfig();

    public slots:
        virtual void save();
        virtual void load();
        virtual void defaults();

    private:
        FlipSwitchEffectConfigForm* m_ui;
    };

} // namespace

#endif