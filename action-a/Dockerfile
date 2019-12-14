FROM ubuntu
RUN apt-get -y update
RUN apt-get -y install g++
RUN apt-get -y install freeglut3-dev
RUN mkdir /root/nish
ADD script1.sh /root/nish/script1.sh
ADD Hut.cpp /root/nish/Hut.cpp
WORKDIR /root/nish
RUN chmod +x /root/nish/script1.sh
CMD ./root/nish/script1.sh
