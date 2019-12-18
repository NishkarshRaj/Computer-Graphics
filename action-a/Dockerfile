FROM debian:9.5-slim
RUN apt-get -y update
RUN apt-get -y install apt-utils
RUN apt-get -y install g++
RUN apt-get -y install freeglut3-dev
ADD script1.sh /script1.sh
ADD Hut.cpp /Hut.cpp
ADD script1.sh /script1.sh
RUN ls
RUN pwd
RUN chmod +x /script1.sh
ENTRYPOINT ["/script1.sh"]
