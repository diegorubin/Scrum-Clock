/* -*- Mode: C; indent-tabs-mode: t; c-basic-offset: 4; tab-width: 4 -*- */
/*
 * scrum-clock
 * Copyright (C)  2010 <>
 * 
 * scrum-clock is free software: you can redistribute it and/or modify it
 * under the terms of the GNU General Public License as published by the
 * Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 * 
 * scrum-clock is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 * See the GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License along
 * with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef _WIN_MAIN_H_
#define _WIN_MAIN_H_

#include <gtkmm.h>

class WinMain: public Gtk::Window 
{
public:
	WinMain();
	virtual ~WinMain();

protected:

private:

};

#endif // _WIN_MAIN_H_