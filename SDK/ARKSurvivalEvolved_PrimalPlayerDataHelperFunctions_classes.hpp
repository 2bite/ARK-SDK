#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalPlayerDataHelperFunctions_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalPlayerDataHelperFunctions.PrimalPlayerDataHelperFunctions_C
// 0x0000 (0x0028 - 0x0028)
class UPrimalPlayerDataHelperFunctions_C : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalPlayerDataHelperFunctions.PrimalPlayerDataHelperFunctions_C");
		return ptr;
	}


	void Apply_To_Player_Pawn_Character(class AShooterPlayerState* For_Player_State, class AShooterCharacter* New_Player_Character, int HexagonCount, int ChibiLevelUpsCount, TArray<float>* Ascension_Data);
	void ExecuteUbergraph_PrimalPlayerDataHelperFunctions(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
