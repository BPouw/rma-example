#include <iostream>
#include "libs/potato-library/PotatoClassifier.h"
#include "libs/potato-library/Prediction.h"

int main() {
    std::cout << "Hello, World!" << std::endl;
    PotatoClassifier classifier("/path/to/model.onnx");
    Prediction result = classifier.classify("../img/rot.jpg");
    std::cout << result.predictedClass << std::endl;
    return 0;
}
