/*
 * ahcommandserver.cpp - Server implementation of XEP-50 (Ad-Hoc Commands)
 * Copyright (C) 2001-2019  Psi Team
 * Copyright (C) 2005  Remko Troncon
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
 * along with this program.  If not, see <https://www.gnu.org/licenses/>.
 *
 */

#include "ahcommandserver.h"

#include "ahcservermanager.h"

// --------------------------------------------------------------------------
// AHCommandServer: The server-side implementation of an Ad-hoc command.
// --------------------------------------------------------------------------

AHCommandServer::AHCommandServer(AHCServerManager* manager) : manager_(manager)
{
    manager_->addServer(this);
}

AHCommandServer::~AHCommandServer()
{
    manager_->removeServer(this);
}
