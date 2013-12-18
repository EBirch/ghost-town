#include "./particle.h"
#include <SFML/System.hpp>

Particle::Particle(sf::Vector2<int> pos, float angle, float speed, float rotation, float xScale, float yScale, int lifespan, sf::Color color):
	angle(angle)
	,speed(speed)
	,lifespan(lifespan)
	,vertex(sf::Vector2f(pos.x, pos.y), color)
	,vel(xScale * cos(angle), yScale * sin(angle))
	,rotation(rotation)
	,xScale(xScale)
	,yScale(yScale)
{
}
