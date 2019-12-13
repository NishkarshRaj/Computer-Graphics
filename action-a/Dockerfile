FROM ubuntu
RUN mkdir /root/nish
ADD script1.sh /root/nish/script1.sh
ADD Hut.cpp /root/nish/Hut.cpp
WORKDIR /root/nish/
RUN apt-get -y update
RUN apt-get -y install g++
RUN apt-get -y install freeglut3-dev
RUN chmod +x /script1.sh
CMD ./script1.sh
