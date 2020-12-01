#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Direbear_Character_Polar_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Direbear_Character_Polar.Direbear_Character_Polar_C
// 0x0008 (0x2110 - 0x2108)
class ADirebear_Character_Polar_C : public ADino_Character_BP_C
{
public:
	class UDinoCharacterStatusComponent_BP_Direbear_C* DinoCharacterStatus_BP_Direbear_C1;                       // 0x2108(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Direbear_Character_Polar.Direbear_Character_Polar_C");
		return ptr;
	}


	void GetBestExtraRunSpeedModifier(float* Out);
	void GetExtraRunSpeedModifierPercent(float* PercentVal);
	void UserConstructionScript();
	void ExecuteUbergraph_Direbear_Character_Polar(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
