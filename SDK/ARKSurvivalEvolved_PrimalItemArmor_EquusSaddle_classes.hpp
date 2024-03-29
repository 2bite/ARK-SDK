#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemArmor_EquusSaddle_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItemArmor_EquusSaddle.PrimalItemArmor_EquusSaddle_C
// 0x0000 (0x0AF0 - 0x0AF0)
class UPrimalItemArmor_EquusSaddle_C : public UPrimalItemArmor_SaddleGeneric_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemArmor_EquusSaddle.PrimalItemArmor_EquusSaddle_C");
		return ptr;
	}


	void BlueprintEquipped(bool* bIsFromSaveGame);
	void BlueprintUnequipped();
	void ExecuteUbergraph_PrimalItemArmor_EquusSaddle(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
