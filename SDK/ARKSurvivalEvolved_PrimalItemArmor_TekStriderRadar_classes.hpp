#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemArmor_TekStriderRadar_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItemArmor_TekStriderRadar.PrimalItemArmor_TekStriderRadar_C
// 0x0000 (0x0AE8 - 0x0AE8)
class UPrimalItemArmor_TekStriderRadar_C : public UPrimalItemArmor_TekStriderAttachment_Base_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemArmor_TekStriderRadar.PrimalItemArmor_TekStriderRadar_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalItemArmor_TekStriderRadar(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
