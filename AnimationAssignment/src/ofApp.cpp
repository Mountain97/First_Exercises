#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofBackground(ofColor::aqua);
    
    ofSetFrameRate(80);
    x = ofGetWidth() / 2;
    y = ofGetHeight() / 2;
    
    ofSetBackgroundAuto(false);
    
    ofLog() << "Press spacebar to clear the screen";
    

}

//--------------------------------------------------------------
void ofApp::update(){
    
    x = x + (ofGetMouseX() - x);
    y = y + (ofGetMouseY() - y);
    
    ofSetLineWidth(8);
    ofDrawLine(ofGetPreviousMouseX(),ofGetPreviousMouseY(),ofGetMouseX(),ofGetMouseY());

}

//--------------------------------------------------------------
void ofApp::draw(){
    
    ofSetCircleResolution(50);
    ofSetColor(137,80,222);
    ofDrawCircle(x,y,4);

}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
    
    if(key == ' ') {
        ofBackground(ofColor::aqua);
    }

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
