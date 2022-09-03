#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_InflatableRex_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Buff_InflatableRex.Buff_InflatableRex_C
// 0x0008 (0x0980 - 0x0978)
class ABuff_InflatableRex_C : public APrimalBuff
{
public:
	class USoundCue*                                   FootstepSound;                                            // 0x0978(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Buff_InflatableRex.Buff_InflatableRex_C");
		return ptr;
	}


	class USoundCue* BPGetPlayerFootStepSound();
	void UserConstructionScript();
	void ExecuteUbergraph_Buff_InflatableRex(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
