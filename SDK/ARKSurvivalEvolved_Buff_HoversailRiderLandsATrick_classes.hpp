#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_HoversailRiderLandsATrick_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Buff_HoversailRiderLandsATrick.Buff_HoversailRiderLandsATrick_C
// 0x0000 (0x0960 - 0x0960)
class ABuff_HoversailRiderLandsATrick_C : public ABuff_Base_Disease_Low_GasMaskable_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Buff_HoversailRiderLandsATrick.Buff_HoversailRiderLandsATrick_C");
		return ptr;
	}


	bool AllowPostProcessEffect();
	float GetBuffPostprocessIntensity();
	void BuffTickClient(float* DeltaTime);
	void UserConstructionScript();
	void ExecuteUbergraph_Buff_HoversailRiderLandsATrick(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
