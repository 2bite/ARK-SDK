#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemSkin_VampireEyes_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItemSkin_VampireEyes.PrimalItemSkin_VampireEyes_C
// 0x0000 (0x0990 - 0x0990)
class UPrimalItemSkin_VampireEyes_C : public UPrimalItemSkinGeneric_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemSkin_VampireEyes.PrimalItemSkin_VampireEyes_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalItemSkin_VampireEyes(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif