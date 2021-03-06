#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_RocketSurfers_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Buff_RocketSurfers.Buff_RocketSurfers_C
// 0x000C (0x096C - 0x0960)
class ABuff_RocketSurfers_C : public ABuff_Base_C
{
public:
	double                                             Time_Upon_Unbasing;                                       // 0x0960(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Time_Before_Immune_To_Ridden_Missile_Damage;              // 0x0968(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Buff_RocketSurfers.Buff_RocketSurfers_C");
		return ptr;
	}


	bool BPCheckPreventInput(TEnumAsByte<EPrimalCharacterInputType>* inputType);
	void BuffTickClient(float* DeltaTime);
	void BuffTickServer(float* DeltaTime);
	void UserConstructionScript();
	void ExecuteUbergraph_Buff_RocketSurfers(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
