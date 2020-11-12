docker run -it \
-e USER=root \
-w /usr/src/myapp \
-v ${PWD}:/usr/src/myapp \
--name gcc_global \
gcc bash

