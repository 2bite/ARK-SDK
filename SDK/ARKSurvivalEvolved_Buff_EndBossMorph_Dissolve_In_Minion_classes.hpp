#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_EndBossMorph_Dissolve_In_Minion_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Buff_EndBossMorph_Dissolve_In_Minion.Buff_EndBossMorph_Dissolve_In_Minion_C
// 0x00C5 (0x0AA8 - 0x09E3)
class ABuff_EndBossMorph_Dissolve_In_Minion_C : public ABuff_EndBossMorph_Dissolve_C
{
public:
	unsigned char                                      UnknownData00[0x5];                                       // 0x09E3(0x0005) MISSED OFFSET
	class UParticleSystem*                             DroneParticle;                                            // 0x09E8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class APrimalCharacter*                            CallFunc_GetOwningPrimalCharacter_Owner;                  // 0x09F0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BPIsA_ReturnValue;                               // 0x09F8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x09F9(0x0003) MISSED OFFSET
	struct FRotator                                    CallFunc_K2_GetComponentRotation_ReturnValue;             // 0x09FC(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_K2_GetComponentLocation_ReturnValue;             // 0x0A08(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsServer_ReturnValue;                            // 0x0A14(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0A15(0x0003) MISSED OFFSET
	class APrimalCharacter*                            CallFunc_GetOwningPrimalCharacter_Owner2;                 // 0x0A18(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class APrimalCharacter*                            CallFunc_GetOwningPrimalCharacter_Owner3;                 // 0x0A20(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class AEndDrone_Character_BP_C*                    K2Node_DynamicCast_AsEndDrone_Character_BP_C;             // 0x0A28(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast_CastSuccess;                           // 0x0A30(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData03[0x7];                                       // 0x0A31(0x0007) MISSED OFFSET
	class AEndTank_Character_BP_C*                     K2Node_DynamicCast_AsEndTank_Character_BP_C;              // 0x0A38(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast2_CastSuccess;                          // 0x0A40(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x0A41(0x0003) MISSED OFFSET
	float                                              CallFunc_PlayAnimEx_ReturnValue;                          // 0x0A44(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsDedicatedServer_ReturnValue;                   // 0x0A48(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData05[0x7];                                       // 0x0A49(0x0007) MISSED OFFSET
	class UObject*                                     CallFunc_GetClassDefaultObject_ReturnValue;               // 0x0A50(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class APrimalCharacter*                            CallFunc_GetOwningPrimalCharacter_Owner4;                 // 0x0A58(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class UEndBoss_FunctionObject_C*                   K2Node_DynamicCast_AsEndBoss_FunctionObject_C;            // 0x0A60(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast3_CastSuccess;                          // 0x0A68(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData06[0x7];                                       // 0x0A69(0x0007) MISSED OFFSET
	class APrimalDinoCharacter*                        K2Node_DynamicCast_AsPrimalDinoCharacter;                 // 0x0A70(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast4_CastSuccess;                          // 0x0A78(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData07[0x3];                                       // 0x0A79(0x0003) MISSED OFFSET
	struct FLinearColor                                CallFunc_GetEndBossColor_Color;                           // 0x0A7C(0x0010) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData08[0x4];                                       // 0x0A8C(0x0004) MISSED OFFSET
	class UParticleSystem*                             K2Node_Select_ReturnValue;                                // 0x0A90(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_Select_CmpSuccess;                                 // 0x0A98(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData09[0x7];                                       // 0x0A99(0x0007) MISSED OFFSET
	class UParticleSystemComponent*                    CallFunc_SpawnEmitterAttached_ReturnValue;                // 0x0AA0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Buff_EndBossMorph_Dissolve_In_Minion.Buff_EndBossMorph_Dissolve_In_Minion_C");
		return ptr;
	}


	void ReceiveDestroyed();
	void BPDeactivated(class AActor** ForInstigator);
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_Buff_EndBossMorph_Dissolve_In_Minion(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
