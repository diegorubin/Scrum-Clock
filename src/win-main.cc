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

#include "win-main.h"

WinMain::WinMain()
{
	showed = false;


	hide();
}

WinMain::~WinMain()
{
}

void WinMain::set_systray(Glib::RefPtr<Gtk::StatusIcon> tray)
{
	systray = tray;
	systray->set_tooltip("Scrum Clock");
	systray->signal_activate().connect(sigc::mem_fun(*this,&WinMain::on_systray_activate));
}

void WinMain::on_systray_activate()
{
	if(showed){
		showed = false;
		hide();
	}
	else
	{
		showed = true;
		show();
	}
}
