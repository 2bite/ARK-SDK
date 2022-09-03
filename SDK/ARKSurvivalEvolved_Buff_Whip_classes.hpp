#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_Whip_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Buff_Whip.Buff_Whip_C
// 0x0031 (0x09A9 - 0x0978)
class ABuff_Whip_C : public APrimalBuff
{
public:
	float                                              MaxDragWeight;                                            // 0x0978(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x097C(0x0004) MISSED OFFSET
	class APrimalDinoCharacter*                        DinoCharacter;                                            // 0x0980(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	float                                              PercentChanceToAffectPlayer;                              // 0x0988(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x098C(0x0004) MISSED OFFSET
	class AActor*                                      K2Node_Event_ForInstigator;                               // 0x0990(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsServer_ReturnValue;                            // 0x0998(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0999(0x0007) MISSED OFFSET
	class APrimalDinoCharacter*                        K2Node_DynamicCast_AsPrimalDinoCharacter;                 // 0x09A0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast_CastSuccess;                           // 0x09A8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Buff_Whip.Buff_Whip_C");
		return ptr;
	}


	void BPPreSetupForInstigator(class AActor** ForInstigator);
	bool BPPreventflight();
	void PlayStartledAnim();
	void BPActivated(class AActor** ForInstigator);
	bool BPCustomAllowAddBuff(class APrimalCharacter** forCharacter, class AActor** DamageCauser);
	void UserConstructionScript();
	void BPSetupForInstigator(class AActor** ForInstigator);
	void ExecuteUbergraph_Buff_Whip(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
