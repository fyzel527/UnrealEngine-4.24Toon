// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
#pragma once

#include "DatasmithDefinitions.h"
#include "MasterMaterials/DatasmithMasterMaterial.h"
#include "MasterMaterials/DatasmithMasterMaterialSelector.h"

#include "Templates/SharedPointer.h"

class IDatasmithMasterMaterialElement;

class FDatasmithCityEngineMaterialSelector : public FDatasmithMasterMaterialSelector
{
public:
	FDatasmithCityEngineMaterialSelector();

	virtual bool IsValid() const override;
	virtual const FDatasmithMasterMaterial& GetMasterMaterial( const TSharedPtr< IDatasmithMasterMaterialElement >& InDatasmithMaterial ) const override;

protected:
	bool IsValidMaterialType( EDatasmithMasterMaterialType InType ) const;

private:
	FDatasmithMasterMaterial MasterMaterial;
	FDatasmithMasterMaterial MasterMaterialTransparent;
	FDatasmithMasterMaterial MasterMaterialTransparentSimple;
};
