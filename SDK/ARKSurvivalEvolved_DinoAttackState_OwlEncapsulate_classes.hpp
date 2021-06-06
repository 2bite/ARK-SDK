#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoAttackState_OwlEncapsulate_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass DinoAttackState_OwlEncapsulate.DinoAttackState_OwlEncapsulate_C
// 0x0020 (0x00C0 - 0x00A0)
class UDinoAttackState_OwlEncapsulate_C : public UPrimalAIStateBPBase
{
public:
	class UClass*                                      EncapsulateBuffClass;                                     // 0x00A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Radius;                                                   // 0x00A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x00AC(0x0004) MISSED OFFSET
	TArray<class APrimalCharacter*>                    ProtectedChars;                                           // 0x00B0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DinoAttackState_OwlEncapsulate.DinoAttackState_OwlEncapsulate_C");
		return ptr;
	}


	void BPOnAttackEnd(int* AttackIndex);
	void BPOnAttackStart(int* AttackIndex);
	void ExecuteUbergraph_DinoAttackState_OwlEncapsulate(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
