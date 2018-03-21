/* ScummVM - Graphic Adventure Engine
 *
 * ScummVM is the legal property of its developers, whose names
 * are too numerous to list here. Please refer to the COPYRIGHT
 * file distributed with this source distribution.
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * as published by the Free Software Foundation; either version 2
 * of the License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301, USA.
 *
 */

#include <common/scummsys.h>

#ifndef PINK_RESOURCE_MGR_H
#define PINK_RESOURCE_MGR_H

namespace Common {
    class String;
}

namespace Pink {

class GamePage;
class PinkEngine;
class OrbFile;
class BroFile;
class Sound;

struct ResourceDescription;

class ResourceMgr {
public:
    ResourceMgr();
    ~ResourceMgr();

    void init(PinkEngine *game, GamePage *page);
    //move methods to page
    //compiler must do RVO
    //Common::String loadText(Common::String &name);
    Sound loadSound(Common::String &name);
    // loadCEL();

private:
    PinkEngine *_game;
    OrbFile *_orb;
    BroFile *_bro;
    ResourceDescription *_resDescTable;
    uint32 _resCount;
};

} // End of namespace Pink

#endif