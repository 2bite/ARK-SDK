#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_WyvernFire_OnFire_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Buff_WyvernFire_OnFire.Buff_WyvernFire_OnFire_C
// 0x0000 (0x0998 - 0x0998)
class ABuff_WyvernFire_OnFire_C : public ABuff_FlameThrower_OnFire_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Buff_WyvernFire_OnFire.Buff_WyvernFire_OnFire_C");
		return ptr;
	}


	void ReceiveTick(float* DeltaSeconds);
	bool BPCustomAllowAddBuff(class APrimalCharacter** forCharacter, class AActor** DamageCauser);
	void UserConstructionScript();
	void ExecuteUbergraph_Buff_WyvernFire_OnFire(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
