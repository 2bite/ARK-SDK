#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_EndBossMorph_Dissolve_Out_Minion_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Buff_EndBossMorph_Dissolve_Out_Minion.Buff_EndBossMorph_Dissolve_Out_Minion_C
// 0x0050 (0x0AF8 - 0x0AA8)
class ABuff_EndBossMorph_Dissolve_Out_Minion_C : public ABuff_EndBossMorph_Dissolve_In_Minion_C
{
public:
	class USoundBase*                                  ExplosionSound;                                           // 0x0AA8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     CallFunc_K2_GetActorLocation_ReturnValue;                 // 0x0AB0(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FRotator                                    CallFunc_K2_GetActorRotation_ReturnValue;                 // 0x0ABC(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsDedicatedServer_ReturnValue;                   // 0x0AC8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0AC9(0x0007) MISSED OFFSET
	class APrimalCharacter*                            CallFunc_GetOwningPrimalCharacter_Owner;                  // 0x0AD0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BPIsA_ReturnValue;                               // 0x0AD8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0AD9(0x0007) MISSED OFFSET
	class UParticleSystem*                             K2Node_Select_ReturnValue;                                // 0x0AE0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_Select_CmpSuccess;                                 // 0x0AE8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0AE9(0x0007) MISSED OFFSET
	class UParticleSystemComponent*                    CallFunc_SpawnEmitterAtLocation_ReturnValue;              // 0x0AF0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Buff_EndBossMorph_Dissolve_Out_Minion.Buff_EndBossMorph_Dissolve_Out_Minion_C");
		return ptr;
	}


	void ReceiveDestroyed();
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_Buff_EndBossMorph_Dissolve_Out_Minion(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
