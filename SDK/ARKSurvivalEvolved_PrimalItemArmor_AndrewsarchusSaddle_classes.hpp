#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemArmor_AndrewsarchusSaddle_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItemArmor_AndrewsarchusSaddle.PrimalItemArmor_AndrewsarchusSaddle_C
// 0x0000 (0x0AF0 - 0x0AF0)
class UPrimalItemArmor_AndrewsarchusSaddle_C : public UPrimalItemArmor_SaddleGeneric_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemArmor_AndrewsarchusSaddle.PrimalItemArmor_AndrewsarchusSaddle_C");
		return ptr;
	}


	void BlueprintUnequipped();
	void BlueprintEquipped(bool* bIsFromSaveGame);
	class FString GetInventoryIconDisplayText();
	void ExecuteUbergraph_PrimalItemArmor_AndrewsarchusSaddle(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
