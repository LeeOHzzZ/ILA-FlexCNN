// File: flexcnn.h

#ifndef FLEXCNN_H__
#define FLEXCNN_H__

#include <string>

#include <ilang/ilang++.h>

namespace ilang {

namespace flexcnn {

Ila GetFlexcnnIla(const std::string& model_name = "flexcnn");

};

};

#endif // FLEXCNN_H__
