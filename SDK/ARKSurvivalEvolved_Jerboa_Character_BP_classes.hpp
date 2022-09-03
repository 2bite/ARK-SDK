#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Jerboa_Character_BP_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Jerboa_Character_BP.Jerboa_Character_BP_C
// 0x0078 (0x2300 - 0x2288)
class AJerboa_Character_BP_C : public ADino_Character_BP_C
{
public:
	class UDinoCharacterStatusComponent_BP_Jerboa_C*   DinoCharacterStatus_BP_Jerboa_C1;                         // 0x2288(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	double                                             LastAlertAnimTime;                                        // 0x2290(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AlertIntervalMax;                                         // 0x2298(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AlertIntervalMin;                                         // 0x229C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                K2Node_Select_ReturnValue;                                // 0x22A0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_Select_CmpSuccess;                                 // 0x22A8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x22A9(0x0007) MISSED OFFSET
	class UAnimMontage*                                K2Node_Select_ReturnValue2;                               // 0x22B0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_Select2_CmpSuccess;                                // 0x22B8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x22B9(0x0003) MISSED OFFSET
	float                                              CallFunc_PlayAnimEx_ReturnValue;                          // 0x22BC(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_PlayAnimEx_ReturnValue2;                         // 0x22C0(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x22C4(0x0004) MISSED OFFSET
	class UAnimMontage*                                K2Node_Select_ReturnValue3;                               // 0x22C8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_Select3_CmpSuccess;                                // 0x22D0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData03[0x7];                                       // 0x22D1(0x0007) MISSED OFFSET
	class UAnimMontage*                                K2Node_Select_ReturnValue4;                               // 0x22D8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_Select4_CmpSuccess;                                // 0x22E0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x22E1(0x0003) MISSED OFFSET
	float                                              CallFunc_PlayAnimEx_ReturnValue3;                         // 0x22E4(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_PlayAnimEx_ReturnValue4;                         // 0x22E8(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData05[0x4];                                       // 0x22EC(0x0004) MISSED OFFSET
	class UAnimMontage*                                K2Node_Select_ReturnValue5;                               // 0x22F0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_Select5_CmpSuccess;                                // 0x22F8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData06[0x3];                                       // 0x22F9(0x0003) MISSED OFFSET
	float                                              CallFunc_PlayAnimEx_ReturnValue5;                         // 0x22FC(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Jerboa_Character_BP.Jerboa_Character_BP_C");
		return ptr;
	}


	void IsPlayerNearby(bool* bNearby);
	void BPTimerServer();
	void UserConstructionScript();
	void PlayWeatherWarning_Rain();
	void PlayWeatherWarning_Superheat();
	void PlayWeatherWarning_ElectricalStorm();
	void PlayWeatherWarning_Sandstorm();
	void PlayWeatherWarning_Earthquake();
	void ExecuteUbergraph_Jerboa_Character_BP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
