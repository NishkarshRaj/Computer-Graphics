FROM ubuntu
RUN apt-get -y update
RUN apt-get -y install apt-utils
RUN apt-get -y install g++
RUN apt-get -y install freeglut3-dev
RUN mkdir /nish
WORKDIR /nish
ADD script1.sh /nish/script1.sh
ADD Hut.cpp /nish/Hut.cpp
RUN pwd
RUN ls
RUN chmod +x /nish/script1.sh
CMD /nish/script1.sh
