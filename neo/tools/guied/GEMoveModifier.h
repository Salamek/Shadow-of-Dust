/*
===========================================================================

Shadow of Dust GPL Source Code
Copyright (C) 1999-2011 id Software LLC, a ZeniMax Media company.

This file is part of the Shadow of Dust GPL Source Code ("Shadow of Dust Source Code").

Shadow of Dust Source Code is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 3 of the License, or
(at your option) any later version.

Shadow of Dust Source Code is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with Shadow of Dust Source Code.  If not, see <http://www.gnu.org/licenses/>.

In addition, the Shadow of Dust Source Code is also subject to certain additional terms. You should have received a copy of these additional terms immediately following the terms and conditions of the GNU General Public License which accompanied the Shadow of Dust Source Code.  If not, please request a copy in writing from id Software at the address below.

If you have questions concerning this license or the applicable additional terms, you may contact in writing id Software LLC, c/o ZeniMax Media Inc., Suite 120, Rockville, Maryland 20850 USA.

===========================================================================
*/
#ifndef GEMOVEMODIFIER_H_
#define GEMOVEMODIFIER_H_

class rvGEMoveModifier : public rvGEModifier
{
public:

	rvGEMoveModifier ( const char* name, idWindow* window, float x, float y );

	virtual bool		CanMerge	( rvGEModifier* merge );
	virtual bool		Merge		( rvGEModifier* merge );

	virtual bool		Apply		( void );
	virtual bool		Undo		( void );

	virtual bool		IsValid		( void );

protected:

	idRectangle		mNewRect;
	idRectangle		mOldRect;
};

ID_INLINE bool rvGEMoveModifier::CanMerge ( rvGEModifier* merge )
{
	return true;
}

#endif // GEMOVEMODIFIER_H_