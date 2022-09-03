#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemSkin_ChibiDino_Manta_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItemSkin_ChibiDino_Manta.PrimalItemSkin_ChibiDino_Manta_C
// 0x0000 (0x0B01 - 0x0B01)
class UPrimalItemSkin_ChibiDino_Manta_C : public UPrimalItemSkin_ChibiDino_Base_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemSkin_ChibiDino_Manta.PrimalItemSkin_ChibiDino_Manta_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalItemSkin_ChibiDino_Manta(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
