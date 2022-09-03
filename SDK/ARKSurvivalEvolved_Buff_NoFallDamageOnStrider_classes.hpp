#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_NoFallDamageOnStrider_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Buff_NoFallDamageOnStrider.Buff_NoFallDamageOnStrider_C
// 0x0000 (0x0978 - 0x0978)
class ABuff_NoFallDamageOnStrider_C : public ABuff_Base_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Buff_NoFallDamageOnStrider.Buff_NoFallDamageOnStrider_C");
		return ptr;
	}


	void BPOnInstigatorMovementModeChangedNotify(TEnumAsByte<EMovementMode>* PrevMovementMode, unsigned char* PreviousCustomMode, TEnumAsByte<EMovementMode>* NewMovementMode, unsigned char* NewCustomMode);
	bool BPCustomAllowAddBuff(class APrimalCharacter** forCharacter, class AActor** DamageCauser);
	void UserConstructionScript();
	void ExecuteUbergraph_Buff_NoFallDamageOnStrider(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
