////////////////////////////////////////////////////////////////////////////////
// XiaolinWusLineAlgorithm.hpp
////////////////////////////////////////////////////////////////////////////////
#ifndef XIAOLIN_WUS_LINE_ALGORITHM_HPP
#define XIAOLIN_WUS_LINE_ALGORITHM_HPP

////////////////////////////////////////////////////////////////////////////////
// Forward declarations
////////////////////////////////////////////////////////////////////////////////
namespace sf 
{ 
	class Color;
	class RenderTarget;
}

////////////////////////////////////////////////////////////////////////////////
// Draw an anti-aliased line between two points using the Xiaolin Wu's line 
// algorithm
////////////////////////////////////////////////////////////////////////////////
void drawLine(sf::RenderTarget& target, float x1, float y1, float x2, float y2, const sf::Color& color); 

#endif