#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
	ofSetLogLevel(ofLogLevel::OF_LOG_VERBOSE);

	shader.load("Circle");

	quad.addVertex(ofDefaultVertexType(glm::vec3(0, 0, 0)));
	quad.addVertex(ofDefaultVertexType(glm::vec3(1, 0, 0)));
	quad.addVertex(ofDefaultVertexType(glm::vec3(1, 1, 0)));
	quad.addVertex(ofDefaultVertexType(glm::vec3(0, 1, 0)));

	quad.addTexCoord(ofDefaultTexCoordType(0, 0));
	quad.addTexCoord(ofDefaultTexCoordType(1, 0));
	quad.addTexCoord(ofDefaultTexCoordType(1, 1));
	quad.addTexCoord(ofDefaultTexCoordType(0, 1));

	quad.addIndex(0);
	quad.addIndex(1);
	quad.addIndex(2);
	quad.addIndex(0);
	quad.addIndex(2);
	quad.addIndex(3);

	texture.load("heatmap.png");
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
	shader.begin();
		shader.setUniform2f("pos", 0, 0);
		shader.setUniform2f("size", 500, 500);
		shader.setUniformTexture("texture", texture.getTexture(), 0);
		quad.draw();
	shader.end();
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseEntered(int x, int y){

}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y){

}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}
