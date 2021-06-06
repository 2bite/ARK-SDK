#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Direbear_Character_BP_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Direbear_Character_BP.Direbear_Character_BP_C
// 0x0008 (0x2270 - 0x2268)
class ADirebear_Character_BP_C : public ADino_Character_BP_C
{
public:
	class UDinoCharacterStatusComponent_BP_Direbear_C* DinoCharacterStatus_BP_Direbear_C1;                       // 0x2268(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Direbear_Character_BP.Direbear_Character_BP_C");
		return ptr;
	}


	void BPNotifyClearRider(class AShooterCharacter** RiderClearing);
	void BPNotifySetRider(class AShooterCharacter** RiderSetting);
	void GetBestExtraRunSpeedModifier(float* Out);
	void GetExtraRunSpeedModifierPercent(float* PercentVal);
	void UserConstructionScript();
	void ExecuteUbergraph_Direbear_Character_BP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
