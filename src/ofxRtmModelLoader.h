
#pragma once
#include "ofFileUtils.h"
#include "ofURLFileLoader.h"


// https://github.com/open-mmlab/mmpose
// RTMO: https://github.com/open-mmlab/mmpose/tree/main/projects/rtmo
// RTMPose: https://github.com/open-mmlab/mmpose/tree/main/projects/rtmpose

// https://github.com/Tau-J/rtmlib/tree/main

// Below is a list of urls for downloading models for convenience.

// Detectors
// --- YOLO Human Art ---
// nano: https://download.openmmlab.com/mmpose/v1/projects/rtmposev1/onnx_sdk/yolox_nano_8xb8-300e_humanart-40f6f0d0.zip
// tiny: https://download.openmmlab.com/mmpose/v1/projects/rtmposev1/onnx_sdk/yolox_tiny_8xb8-300e_humanart-6f3252f9.zip
// small: https://download.openmmlab.com/mmpose/v1/projects/rtmposev1/onnx_sdk/yolox_s_8xb8-300e_humanart-3ef259a7.zip
// medium: https://download.openmmlab.com/mmpose/v1/projects/rtmposev1/onnx_sdk/yolox_m_8xb8-300e_humanart-c2c7a14a.zip
// large: https://download.openmmlab.com/mmpose/v1/projects/rtmposev1/onnx_sdk/yolox_l_8xb8-300e_humanart-ce1d7a62.zip
// x-large: https://download.openmmlab.com/mmpose/v1/projects/rtmposev1/onnx_sdk/yolox_x_8xb8-300e_humanart-a39d44ed.zip


// --- Body 2d ( 17 Keypoints ) ---
// tiny: https://download.openmmlab.com/mmpose/v1/projects/rtmposev1/onnx_sdk/rtmpose-t_8xb256-420e_humanart-256x192-60b68c98_20230612.zip
// s: https://download.openmmlab.com/mmpose/v1/projects/rtmposev1/onnx_sdk/rtmpose-s_8xb256-420e_humanart-256x192-5a3ac943_20230611.zip
// m: https://download.openmmlab.com/mmpose/v1/projects/rtmposev1/onnx_sdk/rtmpose-m_8xb256-420e_humanart-256x192-8430627b_20230611.zip
// l: https://download.openmmlab.com/mmpose/v1/projects/rtmposev1/onnx_sdk/rtmpose-l_8xb256-420e_humanart-256x192-389f2cb0_20230611.zip

// --- Body 2d Halpe26 ---
// t: https://download.openmmlab.com/mmpose/v1/projects/rtmposev1/onnx_sdk/rtmpose-t_simcc-body7_pt-body7-halpe26_700e-256x192-6020f8a6_20230605.zip
// s: https://download.openmmlab.com/mmpose/v1/projects/rtmposev1/onnx_sdk/rtmpose-s_simcc-body7_pt-body7-halpe26_700e-256x192-7f134165_20230605.zip
// m: https://download.openmmlab.com/mmpose/v1/projects/rtmposev1/onnx_sdk/rtmpose-m_simcc-body7_pt-body7-halpe26_700e-256x192-4d3e73dd_20230605.zip
// l: https://download.openmmlab.com/mmpose/v1/projects/rtmposev1/onnx_sdk/rtmpose-l_simcc-body7_pt-body7-halpe26_700e-256x192-2abb7558_20230605.zip
// m-384: https://download.openmmlab.com/mmpose/v1/projects/rtmposev1/onnx_sdk/rtmpose-m_simcc-body7_pt-body7-halpe26_700e-384x288-89e6428b_20230605.zip
// l-384: https://download.openmmlab.com/mmpose/v1/projects/rtmposev1/onnx_sdk/rtmpose-l_simcc-body7_pt-body7-halpe26_700e-384x288-734182ce_20230605.zip
// x-384: https://download.openmmlab.com/mmpose/v1/projects/rtmposev1/onnx_sdk/rtmpose-x_simcc-body7_pt-body7-halpe26_700e-384x288-7fb6e239_20230606.zip


// --- WholeBody 2d (133 Keypoints) ---
// https://github.com/open-mmlab/mmpose/tree/main/projects/rtmpose
// Estimators / Inference
// - RTMW -
// m: https://download.openmmlab.com/mmpose/v1/projects/rtmw/onnx_sdk/rtmw-dw-m-s_simcc-cocktail14_270e-256x192_20231122.zip
// l: https://download.openmmlab.com/mmpose/v1/projects/rtmw/onnx_sdk/rtmw-dw-x-l_simcc-cocktail14_270e-256x192_20231122.zip
// l-384: https://download.openmmlab.com/mmpose/v1/projects/rtmw/onnx_sdk/rtmw-dw-x-l_simcc-cocktail14_270e-384x288_20231122.zip

// - RtmPose -
// tiny: https://download.openmmlab.com/mmpose/v1/projects/rtmposev1/onnx_sdk/rtmpose-t_simcc-ucoco_dw-ucoco_270e-256x192-dcf277bf_20230728.zip
// s: https://download.openmmlab.com/mmpose/v1/projects/rtmposev1/onnx_sdk/rtmpose-s_simcc-ucoco_dw-ucoco_270e-256x192-3fd922c8_20230728.zip
// m: https://download.openmmlab.com/mmpose/v1/projects/rtmposev1/onnx_sdk/rtmpose-m_simcc-ucoco_dw-ucoco_270e-256x192-c8b76419_20230728.zip
// l: https://download.openmmlab.com/mmpose/v1/projects/rtmposev1/onnx_sdk/rtmpose-l_simcc-ucoco_dw-ucoco_270e-256x192-4d6dfc62_20230728.zip
// l-384: https://download.openmmlab.com/mmpose/v1/projects/rtmposev1/onnx_sdk/rtmpose-l_simcc-ucoco_dw-ucoco_270e-384x288-2438fd99_20230728.zip

// --- Whole Body 3d (133 Keypoints) NOT IMPLEMENTED ---
//x: https://huggingface.co/Soykaf/RTMW3D-x/resolve/main/onnx/rtmw3d-x_8xb64_cocktail14-384x288-b0a0eab7_20240626.onnx

// --- Hand 2d (21 Keypoints ) ---
// Detector
// nano (alpha): https://download.openmmlab.com/mmpose/v1/projects/rtmposev1/onnx_sdk/rtmdet_nano_8xb32-300e_hand-267f9c8f.zip
// Inference
// m: https://download.openmmlab.com/mmpose/v1/projects/rtmposev1/onnx_sdk/rtmpose-m_simcc-hand5_pt-aic-coco_210e-256x256-74fb594_20230320.zip


// https://github.com/open-mmlab/mmpose/tree/main/projects/rtmo
// --- RTMO ---
// t: https://download.openmmlab.com/mmpose/v1/projects/rtmo/onnx_sdk/rtmo-t_8xb32-600e_body7-416x416-f48f75cb_20231219.zip
// s: https://download.openmmlab.com/mmpose/v1/projects/rtmo/onnx_sdk/rtmo-s_8xb32-600e_body7-640x640-dac2bf74_20231211.zip
// m: https://download.openmmlab.com/mmpose/v1/projects/rtmo/onnx_sdk/rtmo-m_16xb16-600e_body7-640x640-39e78cc4_20231211.zip
// l: https://download.openmmlab.com/mmpose/v1/projects/rtmo/onnx_sdk/rtmo-l_16xb16-600e_body7-640x640-b37118ce_20231211.zip


class ofxRtmModelLoader {
public:
	static std::string loadModel(const std::string& modelsRoot, const std::string& modelUrl );
	static std::string loadModel(const std::string& aTag, const std::string& modelsRoot, const std::string& modelUrl );
	
	static std::string loadModel(const std::string& modelsRoot, const std::string& modelUrl, ofHttpRequest& arequest );
	static std::string loadModel(const std::string& aTag, const std::string& modelsRoot, const std::string& modelUrl, ofHttpRequest& arequest );
	
protected:
	static bool unzipTo(const std::string& zipPath, const std::string& dstDir);
	static bool downloadWithCurl(const std::string& url, const std::string& dstPath, int timeoutSeconds);
	static std::string findPathContainingExtRecursive( const std::string& root, const std::string& ext, int depth, int maxDepth = 6);
	static std::string hashString(const std::string& s);
	
};
