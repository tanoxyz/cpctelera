//-----------------------------LICENSE NOTICE------------------------------------
//  This file is part of CPCtelera: An Amstrad CPC Game Engine
//  Copyright (C) 2009 Targhan / Arkos
//  Copyright (C) 2015 ronaldo / Fremos / Cheesetea / ByteRealms (@FranGallegoBR)
//
//  This program is free software: you can redistribute it and/or modify
//  it under the terms of the GNU General Public License as published by
//  the Free Software Foundation, either version 3 of the License, or
//  (at your option) any later version.
//
//  This program is distributed in the hope that it will be useful,
//  but WITHOUT ANY WARRANTY; without even the implied warranty of
//  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
//  GNU General Public License for more details.
//
//  You should have received a copy of the GNU General Public License
//  along with this program.  If not, see <http://www.gnu.org/licenses/>.
//-------------------------------------------------------------------------------
//######################################################################
//### MODULE: Audio                                                  ###
//######################################################################
//### This module contains code for music and SFX players and other  ###
//### audio routines.                                                ###
//######################################################################
//
#ifndef CPCT_AUDIO_H
#define CPCT_AUDIO_H

void cpct_arkosPlayer_songInit(void* songdata);
void cpct_arkosPlayer_songPlay();
void cpct_arkosPlayer_songStop();
void cpct_arkosPlayer_enableSFX (unsigned char enable_bitmask);
void cpct_arkosPlayer_disableSFX(unsigned char disable_bitmask);
void cpct_arkosPlayer_SFXInit(void* sfx_song_data);
void cpct_arkosPlayer_SFXStopAll();
void cpct_arkosPlayer_SFXStop(unsigned char stop_bitmask);
void cpct_arkosPlayer_SFXPlay(unsigned char sfx_num, unsigned char volume, unsigned char note, unsigned char speed, unsigned int inverted_pitch, unsigned char channel_num);

#endif