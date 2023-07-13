
## Virtual

En C++, le mot clé "virtual" est utilisé avant une fonction dans une classe pour indiquer qu'il s'agit d'une fonction virtuelle. Une fonction virtuelle permet la liaison dynamique du code, ce qui signifie que la résolution de la fonction appelée se fait au moment de l'exécution en fonction du type réel de l'objet.

Lorsqu'une classe déclare une fonction virtuelle, les classes dérivées peuvent la redéfinir en fournissant leur propre implémentation de la fonction. Lorsque vous appelez une fonction virtuelle via un pointeur ou une référence vers un objet de classe de base, le comportement dépendra du type réel de l'objet.

Voici un exemple pour illustrer l'utilisation du mot clé "virtual" :

```cpp
class Animal {
public:
    virtual void parler() {
        std::cout << "Animal parle!" << std::endl;
    }
};

class Chien : public Animal {
public:
    void parler() override {
        std::cout << "Le chien aboie!" << std::endl;
    }
};

class Chat : public Animal {
public:
    void parler() override {
        std::cout << "Le chat miaule!" << std::endl;
    }
};

int main() {
    Animal* animal1 = new Chien();
    Animal* animal2 = new Chat();

    animal1->parler(); // Affiche "Le chien aboie!"
    animal2->parler(); // Affiche "Le chat miaule!"

    delete animal1;
    delete animal2;

    return 0;
}
```