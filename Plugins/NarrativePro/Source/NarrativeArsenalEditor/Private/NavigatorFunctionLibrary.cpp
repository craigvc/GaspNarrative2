// Copyright Narrative Tools 2022. 


#include "NavigatorFunctionLibrary.h"
#include "Factories/Texture2dFactoryNew.h"


class UTexture2DFactoryNew* UNavigatorFunctionLibrary::GetTexture2DFactory()
{
	return NewObject<UTexture2DFactoryNew>();
}
