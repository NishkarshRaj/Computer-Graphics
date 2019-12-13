FROM ubuntu
ADD script1.sh /script1.sh
ADD Hut.cpp /Hut.cpp
RUN apt-get -y update
RUN apt-get -y install g++
RUN apt-get -y install freeglut3-dev
RUN chmod +x /script1.sh
ENTRYPOINT ["/script1.sh"]
