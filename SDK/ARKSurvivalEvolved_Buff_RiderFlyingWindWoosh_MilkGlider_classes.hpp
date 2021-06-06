#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_RiderFlyingWindWoosh_MilkGlider_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Buff_RiderFlyingWindWoosh_MilkGlider.Buff_RiderFlyingWindWoosh_MilkGlider_C
// 0x0000 (0x0960 - 0x0960)
class ABuff_RiderFlyingWindWoosh_MilkGlider_C : public ABuff_Base_Disease_Low_GasMaskable_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Buff_RiderFlyingWindWoosh_MilkGlider.Buff_RiderFlyingWindWoosh_MilkGlider_C");
		return ptr;
	}


	bool AllowPostProcessEffect();
	float GetBuffPostprocessIntensity();
	bool BPCustomAllowAddBuff(class APrimalCharacter** forCharacter, class AActor** DamageCauser);
	void BuffTickClient(float* DeltaTime);
	void UserConstructionScript();
	void ExecuteUbergraph_Buff_RiderFlyingWindWoosh_MilkGlider(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
