#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_ExitedMekShield_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Buff_ExitedMekShield.Buff_ExitedMekShield_C
// 0x0000 (0x0930 - 0x0930)
class ABuff_ExitedMekShield_C : public ABuff_Base_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Buff_ExitedMekShield.Buff_ExitedMekShield_C");
		return ptr;
	}


	void BuffTickClient(float* DeltaTime);
	void GetOwnerMek(bool* IsValid, bool* IsFriendly, class AMek_Character_BP_C** Mek);
	bool IsOwnerMek();
	void UserConstructionScript();
	void ExecuteUbergraph_Buff_ExitedMekShield(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
