#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_INetMaterialInterface_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass INetMaterialInterface.INetMaterialInterface_C
// 0x0000 (0x0028 - 0x0028)
class UINetMaterialInterface_C : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass INetMaterialInterface.INetMaterialInterface_C");
		return ptr;
	}


	void GetMaterialIndicesToSupportNet(TArray<int>* MaterialIndices);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
