
#if 0
//VT 94 COD.001
#include <string>

std::string* obtenerPtr() // cualquier función que devuelve un puntero
{
    //hacer algo
} 

int main()
{
    auto ptr1{ obtenerPtr() }; // std::string*

    return 0;
}






//VT 94 COD.002
#include <string>

std::string* obtenerPtr() // cualquier función que devuelve un puntero
{
    //hacer algo
} 

int main()
{
    auto ptr1{ obtenerPtr() };  // std::string*
    auto* ptr2{ obtenerPtr() }; // std::string*

    return 0;
}





//VT 94 COD.003
#include <string>

std::string* obtenerPtr() // cualquier función que devuelve un puntero
{
    //hacer algo
}
int main()
{
    auto ptr3{ *obtenerPtr() };      // std::string (porque indireccionamos obtenerPtr())
    auto* ptr4{ *obtenerPtr() };     // error de compilación (el inicializador no es un puntero)

    return 0;
}






//VT 94 COD.004
#include <string>

std::string* obtenerPtr() // cualquier función que devuelve un puntero
{

}
int main()
{
    const auto ptr1{ obtenerPtr() };  // std::string* const
    auto const ptr2{ obtenerPtr() }; // std::string* const

    const auto* ptr3{ obtenerPtr() }; // const std::string*
    auto* const ptr4{ obtenerPtr() }; // std::string* const

    return 0;
}

#endif









//VT 94 COD.005
#include <string>

const std::string* const obtenerConstPtr() // cualquier función que devuelve un puntero constante a un valor constante
{
    //hacer algo
}
int main()
{
    auto ptr1{ obtenerConstPtr() };  // const std::string*
    auto* ptr2{ obtenerConstPtr() }; // const std::string*

    auto const ptr3{ obtenerConstPtr() };  // const std::string* const
    const auto ptr4{ obtenerConstPtr() };  // const std::string* const

    auto* const ptr5{ obtenerConstPtr() }; // const std::string* const
    const auto* ptr6{ obtenerConstPtr() }; // const std::string*

    const auto const ptr7{ obtenerConstPtr() };  // const std::string* const
    const auto* const ptr8{ obtenerConstPtr() }; // const std::string* const

    return 0;
}
