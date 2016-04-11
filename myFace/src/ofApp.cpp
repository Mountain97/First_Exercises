#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){

}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    
    ofBackground(107,96,136);
    ofSetColor(255);
    
    ofSetLineWidth(1);
    
    //Hair (in retrospect I would have done it with a shape)
    ofDrawTriangle(50,270,
                   110,180,
                   90,340);
    ofDrawTriangle(110,180,
                   125,95,
                   175,100);
    ofDrawTriangle(175,100,
                   390,25,
                   450,75);
    ofDrawTriangle(450,75,
                   550,85,
                   565,220);
    ofDrawTriangle(565,220,
                   600,275,
                   575,275);
    ofDrawTriangle(600,275,
                   665,302,
                   620,325);
    ofDrawTriangle(620,325,
                   655,375,
                   600,350);
    ofDrawTriangle(600,350,
                   625,410,
                   580,395);
    ofDrawTriangle(580,395,
                   600,475,
                   565,445);
    ofDrawTriangle(565,445,
                   575,475,
                   525,455);
    ofDrawTriangle(525,455,
                   530,485,
                   505,465);
    ofDrawTriangle(505,465,
                   475,525,
                   475,445);
    ofDrawTriangle(475,445,
                   435,485,
                   450,400);
    ofDrawTriangle(450,400,
                   425,445,
                   437,417);
    ofDrawTriangle(437,417,
                   410,325,
                   420,325);
    ofDrawTriangle(410,325,//Start of bangs
                   420,405,
                   325,335);
    ofDrawTriangle(325,335,
                   360,415,
                   260,360);
    ofDrawTriangle(260,360,
                   295,427,
                   228,380);
    ofDrawTriangle(228,380,
                   225,430,
                   215,375);
    ofDrawTriangle(215,375,
                   140,330,
                   145,330);
    ofDrawTriangle(90,340,//END OF BANGS
                   90,485,
                   110,440);
    ofDrawTriangle(110,440,
                   160,535,
                   150,465);
    ofDrawTriangle(150,465,
                   178,510,
                   168,455);
    ofDrawTriangle(168,455,
                   175,585,
                   250,525);
    ofDrawTriangle(250,525,
                   250,610,
                   290,560);
    
    //hair coloring
    ofBeginShape();
    ofVertex(90,340);
    ofVertex(140,330);
    ofVertex(145,330);
    ofVertex(215,375);
    ofVertex(228,380);
    ofVertex(260,360);
    ofVertex(325,335);
    ofVertex(410,325);
    ofVertex(420,325);
    ofVertex(437,417);
    ofVertex(450,400);
    ofVertex(475,445);
    ofVertex(505,465);
    ofVertex(525,455);
    ofVertex(565,445);
    ofVertex(580,395);
    ofVertex(600,350);
    ofVertex(620,325);
    ofVertex(600,275);
    ofVertex(565,220);
    ofVertex(450,75);
    ofVertex(175,100);
    ofVertex(110,180);
    ofVertex(50,270);
    
    ofEndShape();
    
    ofBeginShape();
    ofVertex(90,340);
    ofVertex(110,440);
    ofVertex(150,465);
    ofVertex(168,455);
    ofVertex(250,525);
    ofVertex(290,560);
    ofVertex(350,250);
    ofEndShape();
    
    
    //face
    ofSetColor(255,254,227);
    ofBeginShape();
    ofVertex(140,330);
    ofVertex(145,365);
    ofVertex(151,375);
    ofVertex(151,385);
    ofVertex(178,425);
    ofVertex(187,450);
    ofVertex(210,485);
    ofVertex(310,565); //TIP OF CHIN
    ofVertex(327,555);
    ofVertex(425,445);
    ofVertex(437,417);
    ofVertex(410,325);
    ofVertex(420,405);
    ofVertex(325,335);
    ofVertex(360,415);
    ofVertex(260,360);
    ofVertex(295,427);
    ofVertex(228,380);
    ofVertex(225,430);
    ofVertex(215,375);
    ofVertex(140,330);
    
    ofEndShape();
    
    
    //Face lines
    ofSetColor(0);
    ofNoFill();
    ofSetLineWidth(2);
    
    ofBeginShape();
    ofVertex(140,330);
    ofVertex(145,365);
    ofVertex(151,375);
    ofVertex(151,385);
    ofVertex(178,425);
    ofVertex(187,450);
    ofVertex(210,485);
    ofVertex(310,565); //TIP OF CHIN
    ofVertex(327,555);
    ofVertex(425,445);
    ofVertex(437,417);
    ofVertex(410,325);
    ofVertex(420,405);
    ofVertex(325,335);
    ofVertex(360,415);
    ofVertex(260,360);
    ofVertex(295,427);
    ofVertex(228,380);
    ofVertex(225,430);
    ofVertex(215,375);
    ofVertex(140,330);
    
    ofEndShape();
    ofFill();
    
    //Eyelashes
    ofDrawTriangle(151,385,
                   142,395,
                   190,385);
    
    
    
    //Eye
    ofSetCurveResolution(50);
    ofSetColor(174,73,77);
    ofBeginShape();
    ofCurveVertex(155,385);
    ofCurveVertex(155,385);
    ofCurveVertex(155,390);
    ofCurveVertex(173,415);
    ofCurveVertex(175,405);
    ofCurveVertex(173,392);
    ofCurveVertex(168,390);
    ofCurveVertex(168,390);
    ofEndShape();
    
    
    
    //Eye lines
    ofSetColor(0);
    ofNoFill();
    ofSetLineWidth(2);
    ofBeginShape();
    ofCurveVertex(155,385);
    ofCurveVertex(155,385);
    ofCurveVertex(155,390);
    ofCurveVertex(173,415);
    ofCurveVertex(175,405);
    ofCurveVertex(173,392);
    ofCurveVertex(168,390);
    ofCurveVertex(168,390);
    ofEndShape();
    
    ofFill();
    
    
    //Pupil
    ofBeginShape();
    ofCurveVertex(159,385);
    ofCurveVertex(159,385);
    ofCurveVertex(158,390);
    ofCurveVertex(168,405);
    ofCurveVertex(170,395);
    ofCurveVertex(170,395);
    ofEndShape();
    
    //Eyelashes
    ofSetColor(0);
    ofDrawTriangle(151,385,
                   142,395,
                   210,380);
    
    //Eyebrow
    ofDrawTriangle(143,360,
                   185,355,
                   180,352);
    
    //Detail Eye Lines
    ofSetLineWidth(1);
    ofNoFill();
    ofDrawCurve(140,400,
                151,375,
                200,372,
                225,377);
    ofFill();
    
    //Nose
    ofNoFill();
    ofSetLineWidth(2);
    ofDrawCurve(185,325,
                210,375,
                185,450,
                135,425);
    ofDrawCurve(150,445,
                185,450,
                215,465,
                225,450);
    ofFill();
    
    //Smile
    ofDrawCurve(225,475,
                260,505,
                275,500,
                300,475);
    ofNoFill();
    ofDrawCurve(300,475,
                285,496,
                330,465,
                400,410);
    ofFill();
                   
    
    

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
