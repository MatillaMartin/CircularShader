#include "ofMain.h"
#include "ofApp.h"

//========================================================================
int main( ){
	ofDisableArbTex();

	ofGLWindowSettings settings;
	settings.setGLVersion(3, 2);
	settings.width = 500;
	settings.height = 500;

	ofCreateWindow(settings);

	ofRunApp(new ofApp());
}
