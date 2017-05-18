/****************************************************************************************** 
 *	Chili DirectX Framework Version 16.07.20											  *	
 *	Game.cpp																			  *
 *	Copyright 2016 PlanetChili.net <http://www.planetchili.net>							  *
 *																						  *
 *	This file is part of The Chili DirectX Framework.									  *
 *																						  *
 *	The Chili DirectX Framework is free software: you can redistribute it and/or modify	  *
 *	it under the terms of the GNU General Public License as published by				  *
 *	the Free Software Foundation, either version 3 of the License, or					  *
 *	(at your option) any later version.													  *
 *																						  *
 *	The Chili DirectX Framework is distributed in the hope that it will be useful,		  *
 *	but WITHOUT ANY WARRANTY; without even the implied warranty of						  *
 *	MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the						  *
 *	GNU General Public License for more details.										  *
 *																						  *
 *	You should have received a copy of the GNU General Public License					  *
 *	along with The Chili DirectX Framework.  If not, see <http://www.gnu.org/licenses/>.  *
 ******************************************************************************************/
#include "MainWindow.h"
#include "Game.h"

Game::Game( MainWindow& wnd )
	:
	wnd( wnd ),
	gfx( wnd ),
	tunnel()
{
	tunnel.createTunnel(5);
	Color c=Colors::Blue;
	tunnel.dataFile(0).setColor(c);
	tunnel.dataFile(0).setThing(0,100);
	tunnel.dataFile(0).setThing(1,100);
	tunnel.dataFile(0).setThing(2,200);
	tunnel.dataFile(0).setThing(3,200);
	tunnel.dataFile(0).thing2=17.0f;
	c=Colors::Red;
	tunnel.dataFile(1).setColor(c);
	tunnel.dataFile(1).setThing(0,100);
	tunnel.dataFile(1).setThing(1,100);
	tunnel.dataFile(1).setThing(2,200);
	tunnel.dataFile(1).setThing(3,200);
	c=Colors::Yellow;
	tunnel.dataFile(2).setColor(c);
	tunnel.dataFile(2).setThing(0,100);
	tunnel.dataFile(2).setThing(1,100);
	tunnel.dataFile(2).setThing(2,200);
	tunnel.dataFile(2).setThing(3,200);
	c=Colors::Gray;
	tunnel.dataFile(3).setColor(c);
	tunnel.dataFile(3).setThing(0,100);
	tunnel.dataFile(3).setThing(1,100);
	tunnel.dataFile(3).setThing(2,200);
	tunnel.dataFile(3).setThing(3,200);
	c=Colors::Green;
	tunnel.dataFile(4).setColor(c);
	tunnel.dataFile(4).setThing(0,100);
	tunnel.dataFile(4).setThing(1,100);
	tunnel.dataFile(4).setThing(2,200);
	tunnel.dataFile(4).setThing(3,200);
	c=Colors::Magenta;
	tunnel.dataFile(5).setColor(c);
	tunnel.dataFile(5).setThing(0,100);
	tunnel.dataFile(5).setThing(1,100);
	tunnel.dataFile(5).setThing(2,200);
	tunnel.dataFile(5).setThing(3,200);
}

void Game::Go()
{
	gfx.BeginFrame();	
	UpdateModel();
	ComposeFrame();
	gfx.EndFrame();
}

void Game::UpdateModel()
{
}

void Game::ComposeFrame()
{
	frameCurrent++;
	if(frameCurrent==frameRate){
		frameCurrent=0;
		step++;
	}
	if(step==6){
		step=0;
	}
	gfx.drawRect(
		tunnel.dataFile(step).getThing(0),
		tunnel.dataFile(step).getThing(1),
		tunnel.dataFile(step).getThing(2),
		tunnel.dataFile(step).getThing(3),
		tunnel.dataFile(step).getColor());
}
