#pragma once

#include "ofMain.h"

#include "ofxGui"

#include "ofxBox2d"

class ofApp : public ofBaseApp{

	public:
		void setup();
		void update();
		void draw();

		void keyPressed(int key);
		void keyReleased(int key);
		void mouseMoved(int x, int y );
		void mouseDragged(int x, int y, int button);
		void mousePressed(int x, int y, int button);
		void mouseReleased(int x, int y, int button);
		void mouseEntered(int x, int y);
		void mouseExited(int x, int y);
		void windowResized(int w, int h);
		void dragEvent(ofDragInfo dragInfo);
		void gotMessage(ofMessage msg);
    
    
    
    bool bHide;
    
    ofxFloatSlider radius;
    ofxColorSlider color;
    ofxVec2Slider center;
    ofxToggle filled;
    ofxButton twoCircles;
    
    ofxPanel gui;
    
    ofxBox2d                                box2d;
    ofPolyline                              drawing;
    ofxBox2dEdge                            edgeLine;
    vector		<shared_ptr<ofxBox2dCircle> >	circles;
    vector		<shared_ptr<ofxBox2dRect> >		boxes;
		
};
