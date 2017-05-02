#version 150
#define M_PI 3.1415926535897932384626433832795

uniform sampler2D texture;
in vec2 texCoordVarying;
out vec4 outputColor;
 
void main()
{
	vec2 centeredTexCoords = texCoordVarying - 0.5;
	float radius = length(centeredTexCoords);
	float angle = atan(centeredTexCoords.y, centeredTexCoords.x);
	angle = (angle + M_PI) / (2.0*M_PI);

	float threshold = 0.0;

	threshold = threshold + step(radius, 0.5);
	threshold = threshold - step (radius, 0.25);

	radius -= 0.25;
	radius /= (0.5 - 0.25);

	float alpha = threshold * 1.0;

	vec2 polarTexCoords = vec2(angle, radius);

	outputColor = vec4(texture2D(texture, polarTexCoords).rgb, alpha);
}