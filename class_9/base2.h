// Definition of class Base2
#ifndef BASE2_H
#define BASE2_H

// class Base2 definition
class Base2 {
public:
	Base2(char characterData) { letter = characterData; }
	char getData() const { return letter; }

protected:        // accessible to derived classes
	char letter;   // inherited by derived class

};  // end class Base2

#endif  // BASE2_H

