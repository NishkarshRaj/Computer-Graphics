FROM ubuntu
ADD script1.sh /script1.sh
ADD Hut.cpp /Hut.cpp
RUN "apt-get install g++"
RUN "chmod +x script1.sh"
ENTRYPOINT ["script1.sh"]
