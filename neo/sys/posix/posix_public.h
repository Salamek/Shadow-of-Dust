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

#ifndef __SYS_POSIX__
#define __SYS_POSIX__

#include <signal.h>

#include "sys/sys_public.h"

const char*	Posix_Cwd( void );

// called first thing. does InitSigs and various things
void		Posix_EarlyInit( );
// called after common has been initialized
void		Posix_LateInit( );

void		Posix_InitSigs( );
void		Posix_ClearSigs( );

void		Posix_Exit( int ret );
void		Posix_SetExit(int ret); // override the exit code
void		Posix_SetExitSpawn( const char *exeName ); // set the process to be spawned when we quit

void		Posix_InitConsoleInput( void );
void		Posix_Shutdown( void );

void		Sys_FPE_handler( int signum, siginfo_t *info, void *context );
void		Sys_DoStartProcess( const char *exeName, bool dofork = true ); // if not forking, current process gets replaced

#endif
