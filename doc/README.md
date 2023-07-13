
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

## Dépendances circulaires

Le conflit que vous rencontrez lors de l'importation des classes peut être dû à des dépendances circulaires entre les classes `AMateria` et `ICharacter`. Pour résoudre ce problème, vous pouvez utiliser des déclarations anticipées (forward declarations) pour déclarer les classes avant leurs définitions réelles. Voici un exemple de modification de votre code pour résoudre le conflit :

```cpp
// Déclaration anticipée de la classe ICharacter
class ICharacter;

class AMateria
{
protected:
    // ...
public:
    AMateria(std::string const & type);
    // ...
    std::string const & getType() const; // Retourne le type de materia
    virtual AMateria* clone() const = 0;
    virtual void use(ICharacter& target);
};

class ICharacter
{
public:
    virtual ~ICharacter() {}
    virtual std::string const & getName() const = 0;
    virtual void equip(AMateria* m) = 0;
    virtual void unequip(int idx) = 0;
    virtual void use(int idx, ICharacter& target) = 0;
};
```

En déclarant `ICharacter` de manière anticipée avant de définir `AMateria`, vous informez le compilateur que `ICharacter` est un type valide sans nécessiter la définition complète à ce stade. Cela résout le problème de dépendance circulaire et vous permet d'importer les deux classes sans conflits.