#!/bin/bash

if [ -d build ]
then
  rm -rf build
fi

mkdir build && cd build
cmake -DBUILD_TESTS=ON ..
make

# Run the test suites.
if [ -f test_main ]
then
  ./test_main
else
<<<<<<< HEAD
  export RED_FONT_COLOR='\033[0;31m'
  echo -e "${RED_FONT_COLOR}Build failed!"
fi
=======
  echo "Build failed!"
fi
>>>>>>> f227b0166a0dc51509b5228cf015c068b778c456
