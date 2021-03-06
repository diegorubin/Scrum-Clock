/* -*- Mode: C; indent-tabs-mode: t; c-basic-offset: 4; tab-width: 4 -*- */
/*
 * main.cc
 * Copyright (C) Diego Rubin 2010 <rubin.diego@gmail.com>
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

#include <gtkmm.h>
#include <iostream>
#include "win-main.h"

#ifdef ENABLE_NLS
#  include <libintl.h>
#endif

   
int
main (int argc, char *argv[])
{
	std::string home = getenv("HOME");
	
	Gtk::Main kit(argc, argv);
	Glib::RefPtr<Gtk::StatusIcon> systray = Gtk::StatusIcon::create_from_file(home + "/.scrum-clock/icon.jpg");
	
	WinMain winMain;
	winMain.set_systray(systray);
		
	kit.run();
	return 0;
}
