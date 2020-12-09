## compiler
CXX = g++ -std=c++11
CXXFLAGS = -pedantic -g
ola6: Email_main.o Email.o
	$(CXX) $(CXXFLAGS) Email_main.o Email.o -o ola6
Email_main.o: Email_main.cpp Email.h
	$(CXX) $(CXXFLAGS) -c Email_main.cpp
Email.o: Email.cpp Email.h
	$(CXX) $(CXXFLAGS) -c Email.cpp
clean:
	$(RM) ola6 *.o
