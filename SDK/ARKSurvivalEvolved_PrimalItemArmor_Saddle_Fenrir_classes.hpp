#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemArmor_Saddle_Fenrir_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItemArmor_Saddle_Fenrir.PrimalItemArmor_Saddle_Fenrir_C
// 0x0000 (0x0AF0 - 0x0AF0)
class UPrimalItemArmor_Saddle_Fenrir_C : public UPrimalItemArmor_SaddleGeneric_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemArmor_Saddle_Fenrir.PrimalItemArmor_Saddle_Fenrir_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalItemArmor_Saddle_Fenrir(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
