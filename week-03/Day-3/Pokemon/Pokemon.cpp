#include "pokemon.h"

Pokemon::Pokemon(const std::string& name, const std::string& type, const std::string& effectiveAgainst)
{
    _name = name;
    _type = type;
    _effectiveAgainst = effectiveAgainst;
}


bool Pokemon::isEffectiveAgainst(Pokemon anotherPokemon)
{
    return _effectiveAgainst == anotherPokemon._type;
}

std::string Pokemon::pokeFinder(std::vector<Pokemon> & pokemonofAsh, Pokemon wildpokemon) {
    std::string name;
    for (int i = 0; i < pokemonofAsh.size(); ++i) {
        if (pokemonofAsh[i].isEffectiveAgainst(wildpokemon)){
            return name = pokemonofAsh[i]._name;
        }
        
    }
    
}





