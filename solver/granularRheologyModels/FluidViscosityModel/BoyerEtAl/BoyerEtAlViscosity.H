/*---------------------------------------------------------------------------*\
  =========                 |
  \\      /  F ield         | OpenFOAM: The Open Source CFD Toolbox
   \\    /   O peration     |
    \\  /    A nd           | Copyright (C) 2011 OpenFOAM Foundation
     \\/     M anipulation  |
-------------------------------------------------------------------------------
License
    This file is part of OpenFOAM.

    OpenFOAM is free software: you can redistribute it and/or modify it
    under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    OpenFOAM is distributed in the hope that it will be useful, but WITHOUT
    ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
    FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License
    for more details.

    You should have received a copy of the GNU General Public License
    along with OpenFOAM.  If not, see <http://www.gnu.org/licenses/>.

Class
    Foam::BoyerEtAlViscosity

Description

    This file is in the \dir FluidViscosityModel/BoyerEtAl subdirectory
    inside the \dir FluidViscosityModel subdirectory

SourceFiles
    BoyerEtAlViscosity.C

\*---------------------------------------------------------------------------*/

#ifndef BoyerEtAlViscosity_H
#define BoyerEtAlViscosity_H

#include "FluidViscosityModel.H"

// * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * //

namespace Foam
{
namespace granularRheologyModels
{

/*---------------------------------------------------------------------------*\
                           Class BoyerEtAlViscosity Declaration
\*---------------------------------------------------------------------------*/

class BoyerEtAlViscosity
:
    public FluidViscosityModel
{

public:

    //- Runtime type information
    TypeName("BoyerEtAl");


    // Constructors

        //- Construct from components
    BoyerEtAlViscosity(const dictionary& dict);


    //- Destructor
    virtual ~BoyerEtAlViscosity();


    // Member functions

    tmp<volScalarField> nuvb
    (
        const volScalarField& alpha,
        const dimensionedScalar& nub,
        const dimensionedScalar& alphaMax,
        const dimensionedScalar& Alphasmall,
        const dimensionedScalar& n
    ) const;
};


// * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * //

} // End namespace granularRheologyModels
} // End namespace Foam

// * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * //

#endif

// ************************************************************************* //
