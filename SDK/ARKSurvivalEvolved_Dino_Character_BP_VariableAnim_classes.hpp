#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Dino_Character_BP_VariableAnim_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Dino_Character_BP_VariableAnim.Dino_Character_BP_VariableAnim_C
// 0x0038 (0x21C0 - 0x2188)
class ADino_Character_BP_VariableAnim_C : public ADino_Character_BP_C
{
public:
	class UAnimSequence*                               SequenceChargeFwd;                                        // 0x2188(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimSequence*                               SequenceChargeLft;                                        // 0x2190(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimSequence*                               SequenceChargeRit;                                        // 0x2198(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimSequence*                               SequenceIdle;                                             // 0x21A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimSequence*                               SequenceMoveFwd;                                          // 0x21A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimSequence*                               SequenceMoveLft;                                          // 0x21B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimSequence*                               SequenceMoveRit;                                          // 0x21B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Dino_Character_BP_VariableAnim.Dino_Character_BP_VariableAnim_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_Dino_Character_BP_VariableAnim(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
