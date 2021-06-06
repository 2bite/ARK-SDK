#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemArmor_TekStriderAttachment_Base_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItemArmor_TekStriderAttachment_Base.PrimalItemArmor_TekStriderAttachment_Base_C
// 0x0000 (0x0AE0 - 0x0AE0)
class UPrimalItemArmor_TekStriderAttachment_Base_C : public UPrimalItemArmor_BaseShirt_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemArmor_TekStriderAttachment_Base.PrimalItemArmor_TekStriderAttachment_Base_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalItemArmor_TekStriderAttachment_Base(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
