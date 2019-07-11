# Variable Precision Test
This is a simple test application to demonstrate how to set model precision at build time.


## Compiling

````
mkdir build
cd build
````

Single precision:
````
cmake -DFLOAT_TYPE=single ..
````

Double precision:
````
cmake -DFLOAT_TYPE=double ..
````

Make and run the code:
````
make
./main/vp_test ..
````