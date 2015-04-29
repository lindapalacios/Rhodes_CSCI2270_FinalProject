# Rhodes_CSCI2270_FinalProject

Project Summary:
  My final project includes 4 cipher methods, 4 decipher methods, and 2 methods that give a list of cipher methods and a list of decipher methods. The 4 cipher methods either take in just a string or a string and some integer values. One will cipher a string with one of the 4 cipher methods, and then one can decipher the returned string with the related decipher method. To correctly decipher, the same integer values used in the cipher must be used in the decipher, and the returned ciphered string must be passed through the decipher.

Dependencies:
  My project does not require any additional libraries or dependencies.
  
System Requirements:
  A C++ IDE is required, but this project should run on any Mac, Linux, Windows, etc.
  
Group Members:
  Just myself, Derek Rhodes.
  
Contributors:
  None so far, will update upon contribution.
  
Issues:
  Some issues that can be handled are for the Shift cipher and Affine Cipher. Both of these require integer inputs, and the Shift cipher needs an integer between 0 and 26. The Affine Cipher needs two integers that are between 0 and 26 and coprime to one another. Contributions can be included to correctly handle integers for both the Shift Cipher and Affine Cipher. For example, maybe force the integer to be mod27 in the Shift Cipher, or return a string that the integer is not between 0 and 26. Also, for the Affine Cipher, either return a string that the integers are not coprime and not between 0-26, or write some logic to force the integers to be coprime and between 0 and 26.

Directions to Install:
  Clone the repo, and create a project with main.cpp, Message.h, and Message.cpp. I found I needed to compile in the terminal with "g++ -o test main.cpp Message.cpp" when you are within the Cloned repository directory. Then use "./test" to run the "test" executable. One can manipulate the strings and calls to methods within the main.cpp.
