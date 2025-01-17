/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amanjon <amanjon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/17 11:36:43 by amanjon           #+#    #+#             */
/*   Updated: 2025/01/17 12:36:57 by amanjon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <iostream>
#include <iomanip>
#include <stack>
#include <deque>


/**
 * std::deque (contenedor como el almacenamiento subyacente para std::stack)
 
Al acceder a this->c (el miembro protegido de std::stack que representa el contenedor subyacente),
podemos usar directamente los métodos de std::deque como begin(), end(), rbegin(), y rend() para crear nuestros iteradores.

Es un contenedor dinámico que almacena datos en bloques contiguos de memoria, pero no en un bloque único como std::vector.
Permite acceso aleatorio mediante índices (deque[i]), lo cual no es posible en una lista doblemente enlazada.
Sus extremos están optimizados para inserciones y eliminaciones rápidas, pero el acceso a elementos intermedios no es tan rápido como un vector.
Es totalmente iterable. Puedes utilizar iteradores (similares a los de std::vector) para recorrer sus elementos:

Iteradores directos: begin(), end().
Iteradores inversos: rbegin(), rend().

Inserciones y eliminaciones eficientes en ambos extremos:

push_front y pop_front para insertar/eliminar al inicio.
push_back y pop_back para insertar/eliminar al final.

std::deque es iterable y se parece más a un híbrido entre un std::vector y un std::list. 
Lo usas cuando necesitas eficiencia en los extremos (inicio y final) junto con acceso aleatorio.

 * Lista doblemente enlazada (std::list):

Se compone de nodos independientes que están enlazados entre sí en ambos sentidos.
Es eficiente para inserciones y eliminaciones en cualquier posición, ya que solo se necesita cambiar los punteros.
No permite acceso aleatorio: debes iterar para llegar a un elemento.
*/
class MutantStack
{
    private:

    public:
        MutantStack();
        MutantStack(const MutantStack& constrCopy);
        MutantStack& operator=(const MutantStack& constrCopy);
        ~MutantStack();
};

std::ostream& operator<<(std::ostream &output, const MutantStack& constrCopy);

#endif
